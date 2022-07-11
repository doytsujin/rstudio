/* UserPrefValues.hpp
 *
 * Copyright (C) 2022 by RStudio, PBC
 *
 * Unless you have received this program directly from RStudio pursuant
 * to the terms of a commercial license agreement with RStudio, then
 * this program is licensed to you under the terms of version 3 of the
 * GNU Affero General Public License. This program is distributed WITHOUT
 * ANY EXPRESS OR IMPLIED WARRANTY, INCLUDING THOSE OF NON-INFRINGEMENT,
 * MERCHANTABILITY OR FITNESS FOR A PARTICULAR PURPOSE. Please refer to the
 * AGPL (http://www.gnu.org/licenses/agpl-3.0.txt) for more details.
 *
 */
 
/* DO NOT HAND-EDIT! This file is automatically generated from the formal user preference schema
 * JSON. To add a preference, add it to "user-prefs-schema.json", then run "generate-prefs.R" to
 * rebuild this file.
 */

#ifndef SESSION_USER_STATE_VALUES_HPP
#define SESSION_USER_STATE_VALUES_HPP

#include <session/prefs/Preferences.hpp>

namespace rstudio {
namespace session {
namespace prefs {

#define kGeneral "general"
#define kGeneralIgnoredUpdateVersions "ignoredUpdateVersions"
#define kFont "font"
#define kFontProportionalFont "proportionalFont"
#define kFontFixedWidthFont "fixedWidthFont"
#define kView "view"
#define kViewZoomLevel "zoomLevel"
#define kViewWindowBounds "windowBounds"
#define kViewAccessibility "accessibility"
#define kRemoteSession "remote_session"
#define kRemoteSessionLastRemoteSessionUrl "lastRemoteSessionUrl"
#define kRemoteSessionAuthCookies "authCookies"
#define kRemoteSessionTempAuthCookies "tempAuthCookies"
#define kRenderer "renderer"
#define kRendererEngine "engine"
#define kRendererUseGpuExclusionList "useGpuExclusionList"
#define kRendererUseGpuDriverBugWorkarounds "useGpuDriverBugWorkarounds"
#define kPlatform "platform"
#define kPlatformWindows "windows"
#define kContextId "context_id"
#define kAutoCreatedProfile "auto_created_profile"
#define kTheme "theme"
#define kThemeName "name"
#define kThemeUrl "url"
#define kThemeIsDark "isDark"
#define kDefaultProjectLocation "default_project_location"
#define kClearHidden "clear_hidden"
#define kExportPlotOptions "export_plot_options"
#define kExportPlotOptionsWidth "width"
#define kExportPlotOptionsHeight "height"
#define kExportPlotOptionsFormat "format"
#define kExportPlotOptionsKeepRatio "keepRatio"
#define kExportPlotOptionsViewAfterSave "viewAfterSave"
#define kExportPlotOptionsCopyAsMetafile "copyAsMetafile"
#define kExportViewerOptions "export_viewer_options"
#define kExportViewerOptionsWidth "width"
#define kExportViewerOptionsHeight "height"
#define kExportViewerOptionsFormat "format"
#define kExportViewerOptionsKeepRatio "keepRatio"
#define kExportViewerOptionsViewAfterSave "viewAfterSave"
#define kExportViewerOptionsCopyAsMetafile "copyAsMetafile"
#define kSavePlotAsPdfOptions "save_plot_as_pdf_options"
#define kSavePlotAsPdfOptionsWidth "width"
#define kSavePlotAsPdfOptionsHeight "height"
#define kSavePlotAsPdfOptionsPortrait "portrait"
#define kSavePlotAsPdfOptionsCairoPdf "cairo_pdf"
#define kSavePlotAsPdfOptionsViewAfterSave "viewAfterSave"
#define kCompileRNotebookPrefs "compile_r_notebook_prefs"
#define kCompileRNotebookPrefsAuthor "author"
#define kCompileRNotebookPrefsType "type"
#define kCompileRMarkdownNotebookPrefs "compile_r_markdown_notebook_prefs"
#define kCompileRMarkdownNotebookPrefsFormat "format"
#define kShowPublishUi "show_publish_ui"
#define kEnableRsconnectPublishUi "enable_rsconnect_publish_ui"
#define kPublishAccount "publish_account"
#define kPublishAccountName "name"
#define kPublishAccountServer "server"
#define kDocumentOutlineWidth "document_outline_width"
#define kConnectVia "connect_via"
#define kConnectViaConnectRConsole "connect-r-console"
#define kConnectViaConnectNewRScript "connect-new-r-script"
#define kConnectViaConnectNewRNotebook "connect-new-r-notebook"
#define kConnectViaConnectCopyToClipboard "connect-copy-to-clipboard"
#define kErrorHandlerType "error_handler_type"
#define kErrorHandlerTypeMessage "message"
#define kErrorHandlerTypeTraceback "traceback"
#define kErrorHandlerTypeBreak "break"
#define kErrorHandlerTypeNotebook "notebook"
#define kErrorHandlerTypeCustom "custom"
#define kUsingMingwGcc49 "using_mingw_gcc49"
#define kVisualModeConfirmed "visual_mode_confirmed"
#define kBibliographyDefaultType "bibliography_default_type"
#define kBibliographyDefaultTypeBib "bib"
#define kBibliographyDefaultTypeYaml "yaml"
#define kBibliographyDefaultTypeJson "json"
#define kCitationDefaultInText "citation_default_in_text"
#define kZoteroConnectionType "zotero_connection_type"
#define kZoteroConnectionTypeAuto "auto"
#define kZoteroConnectionTypeNone "none"
#define kZoteroConnectionTypeLocal "local"
#define kZoteroConnectionTypeWeb "web"
#define kZoteroUseBetterBibtex "zotero_use_better_bibtex"
#define kZoteroApiKey "zotero_api_key"
#define kZoteroDataDir "zotero_data_dir"
#define kQuartoWebsiteSyncEditor "quarto_website_sync_editor"

class UserStateValues: public Preferences
{
public:
   static std::vector<std::string> allKeys();
   /**
    * 
    */
   core::json::Object general();
   core::Error setGeneral(core::json::Object val);

   /**
    * Font options from the Appearance category
    */
   core::json::Object font();
   core::Error setFont(core::json::Object val);

   /**
    * 
    */
   core::json::Object view();
   core::Error setView(core::json::Object val);

   /**
    * 
    */
   core::json::Object remoteSession();
   core::Error setRemoteSession(core::json::Object val);

   /**
    * 
    */
   core::json::Object renderer();
   core::Error setRenderer(core::json::Object val);

   /**
    * 
    */
   core::json::Object platform();
   core::Error setPlatform(core::json::Object val);

   /**
    * A unique identifier representing the user and machine.
    */
   std::string contextId();
   core::Error setContextId(std::string val);

   /**
    * Whether we have automatically created an .Rprofile for this user.
    */
   bool autoCreatedProfile();
   core::Error setAutoCreatedProfile(bool val);

   /**
    * The color theme to apply.
    */
   core::json::Object theme();
   core::Error setTheme(core::json::Object val);

   /**
    * The directory path under which to place new projects by default. Shadows a uipref.
    */
   std::string defaultProjectLocation();
   core::Error setDefaultProjectLocation(std::string val);

   /**
    * Whether to clear hidden objects along with visible objects when clearing the workspace. Set automatically to remember last action.
    */
   bool clearHidden();
   core::Error setClearHidden(bool val);

   /**
    * The most recently used plot export options.
    */
   core::json::Object exportPlotOptions();
   core::Error setExportPlotOptions(core::json::Object val);

   /**
    * The most recently used viewer export options.
    */
   core::json::Object exportViewerOptions();
   core::Error setExportViewerOptions(core::json::Object val);

   /**
    * The most recently used options for saving a plot as a PDF.
    */
   core::json::Object savePlotAsPdfOptions();
   core::Error setSavePlotAsPdfOptions(core::json::Object val);

   /**
    * Most recently used settings for compiling a notebook from an R script.
    */
   core::json::Object compileRNotebookPrefs();
   core::Error setCompileRNotebookPrefs(core::json::Object val);

   /**
    * Most recently used settings for compiling a notebook using R Markdown.
    */
   core::json::Object compileRMarkdownNotebookPrefs();
   core::Error setCompileRMarkdownNotebookPrefs(core::json::Object val);

   /**
    * Whether to show UI for publishing content.
    */
   bool showPublishUi();
   core::Error setShowPublishUi(bool val);

   /**
    * Whether to show UI for publishing content to RStudio Connect.
    */
   bool enableRsconnectPublishUi();
   core::Error setEnableRsconnectPublishUi(bool val);

   /**
    * The default (last) account used for publishing
    */
   core::json::Object publishAccount();
   core::Error setPublishAccount(core::json::Object val);

   /**
    * The preferred width, in pixels, of the document outline pane.
    */
   int documentOutlineWidth();
   core::Error setDocumentOutlineWidth(int val);

   /**
    * How to create new connections to data sources.
    */
   std::string connectVia();
   core::Error setConnectVia(std::string val);

   /**
    * The kind of handler to invoke when errors occur.
    */
   std::string errorHandlerType();
   core::Error setErrorHandlerType(std::string val);

   /**
    * Whether or not the MinGW compiler with GCC 4.9 is used.
    */
   bool usingMingwGcc49();
   core::Error setUsingMingwGcc49(bool val);

   /**
    * Whether or not the use of Visual Mode has been confirmed.
    */
   bool visualModeConfirmed();
   core::Error setVisualModeConfirmed(bool val);

   /**
    * The default type for new bibliographies.
    */
   std::string bibliographyDefaultType();
   core::Error setBibliographyDefaultType(std::string val);

   /**
    * The default style for inserting citations.
    */
   bool citationDefaultInText();
   core::Error setCitationDefaultInText(bool val);

   /**
    * Zotero connection type (local or web)
    */
   std::string zoteroConnectionType();
   core::Error setZoteroConnectionType(std::string val);

   /**
    * Whether to use Better BibTeX when suggesting citation keys and writing citations to BibTeX bibliographies
    */
   bool zoteroUseBetterBibtex();
   core::Error setZoteroUseBetterBibtex(bool val);

   /**
    * Key for making Zotero API calls
    */
   std::string zoteroApiKey();
   core::Error setZoteroApiKey(std::string val);

   /**
    * Directory containing Zotero data files
    */
   std::string zoteroDataDir();
   core::Error setZoteroDataDir(std::string val);

   /**
    * Sync source editor to Quarto website preview navigation.
    */
   bool quartoWebsiteSyncEditor();
   core::Error setQuartoWebsiteSyncEditor(bool val);

};

   
}
}
}

#endif
