// this script is required so we can keep the arguments used by electron-forge/maker-dmg when generating the package
// Example: electron-forge make --platform=win32 --arch=x64
// On some platforms, the package name generated by electron-forge/maker-dmg has a max length set to 27 because of node-appdmg package

exports.createFullPackageFileName = () => {
  const package = require('../package.json');
  var fs = require('fs');

  const getArgumentValueFromMakeCli = (argument) => {
    try {
      const value =
        process.argv[
          1 +
            process.argv
              .map((arg, index) => ({
                arg,
                index,
              }))
              .filter((arg) => arg.arg.includes('--' + argument))
              .map((arg) => arg.index)[0]
        ];

      return value;
    } catch (error) {
      console.warn(
        `Error when getting platform from "--${argument}" argument for "electron-forge make" command: `,
        error,
      );
    }

    return undefined;
  };

  const archName = getArgumentValueFromMakeCli('arch') || process.arch;
  let platformName = getArgumentValueFromMakeCli('platform') || process.platform;

  switch (platformName) {
    case 'darwin':
      platformName = 'osx';
      break;
    case 'linux':
      platformName = 'linux';
      break;
    case 'win32':
      platformName = 'win';
      break;
    default:
      console.error(`Unsupported platform: ${platformName}`);
      process.exit(1);
  }

  const dmgName = `${package.productName}-electron-${platformName}-${archName}-${package.version}`.replace(
    new RegExp('+', 'g'),
    '-',
  );

  const outDir = `${__dirname}/../out/`;
  const filenameExtension = 'filename';

  if (!fs.existsSync(outDir)) {
    fs.mkdirSync(outDir, { recursive: true });
  }

  fs.appendFile(`${outDir}${dmgName}.${filenameExtension}`, '', function (err) {
    if (err) throw err;
    console.log('\nFull Filename Saved!');
  });
};
