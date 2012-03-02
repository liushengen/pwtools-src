#pragma once

#include "..\COMMON\task.h"

using namespace System;
using namespace System::IO;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Text;

public ref class MainWindow : public System::Windows::Forms::Form
{
	public:
	MainWindow(void)
	{
		InitializeComponent();
		this->Icon = (Drawing::Icon^)((gcnew Resources::ResourceManager("sTools.icons", Reflection::Assembly::GetExecutingAssembly()))->GetObject("app"));
		comboBox_search->SelectedIndex = 0;
	}

	protected:
	/// <summary>
	/// Clean up any resources being used.
	/// </summary>
	~MainWindow()
	{
		if (components)
		{
			delete components;
		}
	}

	array<Task^>^ Tasks;
	Task^ SelectedTask;

	private: System::Windows::Forms::MenuStrip^  menuStrip_mainMenu;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  loadToolStripMenuItem;
	private: System::Windows::Forms::ProgressBar^  progressBar_progress;
	private: System::Windows::Forms::TextBox^  textBox_search;
	private: System::Windows::Forms::Button^  button_search;
	private: System::Windows::Forms::TreeView^  treeView_tasks;
	private: System::Windows::Forms::GroupBox^  groupBox_required_items;
	private: System::Windows::Forms::GroupBox^  groupBox_team_members;
	private: System::Windows::Forms::DataGridView^  dataGridView_date_spans;
	private: System::Windows::Forms::DataGridView^  dataGridView_requiredItems;
	private: System::Windows::Forms::DataGridView^  dataGridView_team;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^  taskSplitToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^  groupBox_reward;
	private: System::Windows::Forms::DataGridView^  dataGridView_rewardItems;
	private: System::Windows::Forms::TextBox^  textBox_rewardREP;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::TextBox^  textBox_rewardSP;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::TextBox^  textBox_rewardEXP;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::TextBox^  textBox_rewardCoins;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::TextBox^  textBox_rewardVigor;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::TextBox^  textBox_rewardCulti;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::TextBox^  textBox_rewardNewQuest;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::TextBox^  textBox_rewardPetbag;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::TextBox^  textBox_rewardInventory;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::TextBox^  textBox_rewardStorage;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::TextBox^  textBox_conversationPrompt;
	private: System::Windows::Forms::TextBox^  textBox_rewardTeleportMap;
	private: System::Windows::Forms::TextBox^  textBox_rewardTeleportZ;
	private: System::Windows::Forms::TextBox^  textBox_rewardTeleportX;
	private: System::Windows::Forms::TextBox^  textBox_rewardTeleportAltitude;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label37;
	private: System::Windows::Forms::ToolStripMenuItem^  exportToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ToolStripMenuItem_v55;
	private: System::Windows::Forms::ToolStripMenuItem^  ToolStripMenuItem_v56;
	private: System::Windows::Forms::GroupBox^  groupBox_answers;
	private: System::Windows::Forms::GroupBox^  groupBox_dialogs;
	private: System::Windows::Forms::GroupBox^  groupBox_conversation;
	private: System::Windows::Forms::Label^  label40;
	private: System::Windows::Forms::TextBox^  textBox_conversationText;
	private: System::Windows::Forms::Label^  label42;
	private: System::Windows::Forms::ListBox^  listBox_dialogs;
	private: System::Windows::Forms::Label^  label43;
	private: System::Windows::Forms::TextBox^  textBox_dialogUnknown;
	private: System::Windows::Forms::TextBox^  textBox_answerTlink;
	private: System::Windows::Forms::Label^  label46;
	private: System::Windows::Forms::TextBox^  textBox_answerQlink;
	private: System::Windows::Forms::Label^  label47;
	private: System::Windows::Forms::ListBox^  listBox_answers;
	private: System::Windows::Forms::GroupBox^  groupBox_questions;
	private: System::Windows::Forms::TextBox^  textBox_questionPrevious;
	private: System::Windows::Forms::Label^  label45;
	private: System::Windows::Forms::TextBox^  textBox_questionID;
	private: System::Windows::Forms::Label^  label44;
	private: System::Windows::Forms::ListBox^  listBox_questions;
	private: System::Windows::Forms::TextBox^  textBox_answerText;
	private: System::Windows::Forms::TextBox^  textBox_questionText;
	private: System::Windows::Forms::TextBox^  textBox_dialogText;
	private: System::Windows::Forms::GroupBox^  groupBox_reward_groups;
	private: System::Windows::Forms::ListBox^  listBox_rewardTimed;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown_timeFactor;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::RadioButton^  radioButton_timed;
	private: System::Windows::Forms::RadioButton^  radioButton_failed;
	private: System::Windows::Forms::RadioButton^  radioButton_success;
	private: System::Windows::Forms::GroupBox^  groupBox_given_items;
	private: System::Windows::Forms::DataGridView^  dataGridView_givenItems;
	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip_date_spans;
	private: System::Windows::Forms::ToolStripMenuItem^  addRowToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  deleteRowToolStripMenuItem;
	private: System::Windows::Forms::TextBox^  textBox_time_limit;
	private: System::Windows::Forms::Label^  label32;
	private: System::Windows::Forms::TextBox^  textBox_author_text;
	private: System::Windows::Forms::TextBox^  textBox_name;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::TextBox^  textBox_id;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::CheckBox^  checkBox_author_mode;
	private: System::Windows::Forms::ToolTip^  toolTip;
	private: System::Windows::Forms::ComboBox^  comboBox_type;
	private: System::Windows::Forms::Label^  label55;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn12;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn13;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn14;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn15;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::DataGridViewCheckBoxColumn^  dataGridViewTextBoxColumn5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn24;
	private: System::Windows::Forms::DataGridViewCheckBoxColumn^  dataGridViewTextBoxColumn25;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn26;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn27;
	private: System::Windows::Forms::DataGridViewComboBoxColumn^  Column_rewardGroups;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn28;
	private: System::Windows::Forms::DataGridViewCheckBoxColumn^  dataGridViewTextBoxColumn29;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn30;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn31;
	private: System::Windows::Forms::Label^  label57;
	private: System::Windows::Forms::CheckedListBox^  checkedListBox_rewardGroupFlags;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown_rewardGroups;
	private: System::Windows::Forms::Label^  label56;
	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip_task;
	private: System::Windows::Forms::ToolStripMenuItem^  cloneSelectedToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  deleteSelectedToolStripMenuItem;
	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip_conversation;
	private: System::Windows::Forms::ToolStripMenuItem^  addToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  removeToolStripMenuItem;
	private: System::Windows::Forms::TextBox^  textBox_rewardUnknown1;
	private: System::Windows::Forms::Label^  label59;
	private: System::Windows::Forms::TextBox^  textBox_rewardSeperator;
	private: System::Windows::Forms::Label^  label61;
	private: System::Windows::Forms::TextBox^  textBox_rewardUnknown2;
	private: System::Windows::Forms::Label^  label60;
	private: System::Windows::Forms::TextBox^  textBox_rewardAITrigger;
	private: System::Windows::Forms::Label^  label63;
	private: System::Windows::Forms::TextBox^  textBox_requiredItemsUnknown;
	private: System::Windows::Forms::Label^  label68;
	private: System::Windows::Forms::Label^  label69;
	private: System::Windows::Forms::TextBox^  textBox_requiredCoins;
	private: System::Windows::Forms::Label^  label39;
	private: System::Windows::Forms::TextBox^  textBox_teamMembersUnknown;
	private: System::Windows::Forms::Label^  label74;
	private: System::Windows::Forms::TextBox^  textBox_givenItemsUnknown;
	private: System::Windows::Forms::Label^  label75;
	private: System::Windows::Forms::TextBox^  textBox_unknown_07;
	private: System::Windows::Forms::Label^  label76;
	private: System::Windows::Forms::ToolStripMenuItem^  creatureBuilderListToolStripMenuItem;
	private: System::Windows::Forms::ComboBox^  comboBox_search;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
	private: System::Windows::Forms::ToolStripMenuItem^  exportSelectedItemToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  replaceSelectedItemToolStripMenuItem;
	private: System::Windows::Forms::Panel^  panel_task;
	private: System::Windows::Forms::GroupBox^  groupBox_general;
	private: System::Windows::Forms::TextBox^  textBox_unknown_01;
	private: System::Windows::Forms::Label^  label81;
	private: System::Windows::Forms::CheckBox^  checkBox_has_date_fail;
	private: System::Windows::Forms::CheckBox^  checkBox_has_date_spans;
	private: System::Windows::Forms::TextBox^  textBox_unknown_05;
	private: System::Windows::Forms::Label^  label84;
	private: System::Windows::Forms::TextBox^  textBox_unknown_04;
	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::TextBox^  textBox_unknown_06;
	private: System::Windows::Forms::Label^  label85;
	private: System::Windows::Forms::GroupBox^  groupBox_requirements;
	private: System::Windows::Forms::Label^  label35;
	private: System::Windows::Forms::TextBox^  textBox_level_min;
	private: System::Windows::Forms::Label^  label36;
	private: System::Windows::Forms::TextBox^  textBox_level_max;
private: System::Windows::Forms::TextBox^  textBox_instant_pay_coins;












	private: System::Windows::Forms::Label^  label65;
	private: System::Windows::Forms::TextBox^  textBox_subQuestFirst;
	private: System::Windows::Forms::Label^  label52;
	private: System::Windows::Forms::TextBox^  textBox_nextQuest;
	private: System::Windows::Forms::Label^  label51;
	private: System::Windows::Forms::TextBox^  textBox_previousQuest;
	private: System::Windows::Forms::Label^  label50;
	private: System::Windows::Forms::TextBox^  textBox_parentQuest;
	private: System::Windows::Forms::Label^  label49;
	private: System::Windows::Forms::CheckBox^  checkBox_unknown_02;
	private: System::Windows::Forms::CheckBox^  checkBox_unknown_03;
	private: System::Windows::Forms::Label^  label82;
	private: System::Windows::Forms::Label^  label86;
	private: System::Windows::Forms::Label^  label83;
	private: System::Windows::Forms::Label^  label87;
	private: System::Windows::Forms::Label^  label88;
	private: System::Windows::Forms::DataGridView^  dataGridView_date_fail;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn32;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn33;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn34;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn35;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn36;
	private: System::Windows::Forms::DataGridViewComboBoxColumn^  Column1;
	private: System::Windows::Forms::TextBox^  textBox_unknown_08;
	private: System::Windows::Forms::Label^  label89;
	private: System::Windows::Forms::TextBox^  textBox_unknown_09;
	private: System::Windows::Forms::Label^  label90;
	private: System::Windows::Forms::GroupBox^  groupBox_flags;
	private: System::Windows::Forms::Label^  label91;
	private: System::Windows::Forms::CheckBox^  checkBox_activate_first_subquest;
	private: System::Windows::Forms::Label^  label100;
	private: System::Windows::Forms::CheckBox^  checkBox_on_fail_parent_fail;
	private: System::Windows::Forms::Label^  label99;
	private: System::Windows::Forms::CheckBox^  checkBox_fail_on_death;
	private: System::Windows::Forms::Label^  label98;
	private: System::Windows::Forms::CheckBox^  checkBox_repeatable_after_failure;
	private: System::Windows::Forms::Label^  label97;
	private: System::Windows::Forms::CheckBox^  checkBox_repeatable;
	private: System::Windows::Forms::Label^  label96;
	private: System::Windows::Forms::CheckBox^  checkBox_can_give_up;
	private: System::Windows::Forms::Label^  label95;
	private: System::Windows::Forms::CheckBox^  checkBox_on_success_parent_success;
	private: System::Windows::Forms::Label^  label94;
	private: System::Windows::Forms::CheckBox^  checkBox_on_give_up_parent_fails;
	private: System::Windows::Forms::Label^  label93;
	private: System::Windows::Forms::CheckBox^  checkBox_activate_next_subquest;
	private: System::Windows::Forms::Label^  label92;
	private: System::Windows::Forms::CheckBox^  checkBox_activate_random_subquest;
	private: System::Windows::Forms::Label^  label101;
	private: System::Windows::Forms::CheckBox^  checkBox_unknown_10;
	private: System::Windows::Forms::Label^  label105;
	private: System::Windows::Forms::CheckBox^  checkBox_unknown_14;
	private: System::Windows::Forms::Label^  label104;
	private: System::Windows::Forms::CheckBox^  checkBox_unknown_13;
	private: System::Windows::Forms::Label^  label103;
	private: System::Windows::Forms::CheckBox^  checkBox_unknown_12;
	private: System::Windows::Forms::Label^  label102;
	private: System::Windows::Forms::CheckBox^  checkBox_unknown_11;
	private: System::Windows::Forms::GroupBox^  groupBox_required_to_do;
	private: System::Windows::Forms::TextBox^  textBox_getItemsUnknown;
	private: System::Windows::Forms::Label^  label67;
	private: System::Windows::Forms::TextBox^  textBox_chaseUnknown;
	private: System::Windows::Forms::Label^  label66;
	private: System::Windows::Forms::TextBox^  textBox_requiredLocationMap;
	private: System::Windows::Forms::Label^  label54;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::TextBox^  textBox_waitTime;
	private: System::Windows::Forms::TextBox^  textBox_requiredLocationNorth;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  textBox_requiredLocationSouth;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  textBox_requiredLocationTop;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox_requiredLocationBottom;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox_requiredLocationWest;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox_requiredLocationEast;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::DataGridView^  dataGridView_chase;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn20;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn21;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn22;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn23;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column14;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column15;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column16;
	private: System::Windows::Forms::DataGridView^  dataGridView_getItems;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn16;
	private: System::Windows::Forms::DataGridViewCheckBoxColumn^  dataGridViewTextBoxColumn17;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn18;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn19;
	private: System::Windows::Forms::ToolStripMenuItem^  ToolStripMenuItem_v93;
	private: System::Windows::Forms::DataGridView^  dataGridView_trigger_location_spans;
	private: System::Windows::Forms::CheckBox^  checkBox_trigger_locations_has_spans;
	private: System::Windows::Forms::Label^  label106;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn37;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn38;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn39;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn40;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn41;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn42;
	private: System::Windows::Forms::Label^  label107;
	private: System::Windows::Forms::TextBox^  textBox_trigger_locations_map_id;
	private: System::Windows::Forms::GroupBox^  groupBox_trigger_location;
	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip_trigger_location;
	private: System::Windows::Forms::ToolStripMenuItem^  addToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  removeToolStripMenuItem1;
	private: System::Windows::Forms::GroupBox^  groupBox_unknown_location;
	private: System::Windows::Forms::TextBox^  textBox_unknown_locations_unknown_1;
	private: System::Windows::Forms::DataGridView^  dataGridView_unknown_location_spans;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn43;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn44;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn45;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn46;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn47;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn48;
	private: System::Windows::Forms::TextBox^  textBox_unknown_locations_map_id;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::GroupBox^  groupBox_valid_location;
	private: System::Windows::Forms::TextBox^  textBox_valid_locations_unknown_1;
	private: System::Windows::Forms::DataGridView^  dataGridView_valid_location_spans;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn49;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn50;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn51;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn52;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn53;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn54;
	private: System::Windows::Forms::TextBox^  textBox_valid_locations_map_id;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
	private: System::Windows::Forms::DataGridViewComboBoxColumn^  Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column12;
	private: System::Windows::Forms::DataGridViewComboBoxColumn^  Column13;
	private: System::Windows::Forms::TextBox^  textBox_trigger_locations_unknown_1;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::CheckBox^  checkBox_unknown_locations_has_spans;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::CheckBox^  checkBox_valid_locations_has_spans;
	private: System::Windows::Forms::Label^  label53;
	private: System::Windows::Forms::CheckBox^  checkBox_unknown_17;
	private: System::Windows::Forms::Label^  label108;
	private: System::Windows::Forms::GroupBox^  groupBox_reach_location;
	private: System::Windows::Forms::CheckBox^  checkBox_has_instant_teleport;
	private: System::Windows::Forms::Label^  label109;
	private: System::Windows::Forms::GroupBox^  groupBox_prerequisites;
	private: System::Windows::Forms::ComboBox^  comboBox_gender;
	private: System::Windows::Forms::Label^  label58;
	private: System::Windows::Forms::TextBox^  textBox_unknownLevel;
	private: System::Windows::Forms::Label^  label30;








	private: System::Windows::Forms::Label^  label48;
	private: System::Windows::Forms::TextBox^  textBox_requiredQuestUndone1;
	private: System::Windows::Forms::TextBox^  textBox_requiredQuestUndone2;
	private: System::Windows::Forms::TextBox^  textBox_requiredQuestUndone3;
	private: System::Windows::Forms::TextBox^  textBox_requiredQuestUndone5;
	private: System::Windows::Forms::TextBox^  textBox_requiredQuestUndone4;
	private: System::Windows::Forms::GroupBox^  groupBox_skills;
	private: System::Windows::Forms::TextBox^  textBox_requiredApothecary;
	private: System::Windows::Forms::Label^  label80;
	private: System::Windows::Forms::TextBox^  textBox_requiredCraftsman;
	private: System::Windows::Forms::Label^  label79;
	private: System::Windows::Forms::TextBox^  textBox_requiredTailor;
	private: System::Windows::Forms::Label^  label78;
	private: System::Windows::Forms::TextBox^  textBox_requiredBlacksmith;
	private: System::Windows::Forms::Label^  label77;
	private: System::Windows::Forms::GroupBox^  groupBox_occupations;
	private: System::Windows::Forms::CheckBox^  checkBox_cleric;
	private: System::Windows::Forms::CheckBox^  checkBox_archer;
	private: System::Windows::Forms::CheckBox^  checkBox_genie;
	private: System::Windows::Forms::CheckBox^  checkBox_barbarian;
	private: System::Windows::Forms::CheckBox^  checkBox_venomancer;
	private: System::Windows::Forms::CheckBox^  checkBox_monk;
	private: System::Windows::Forms::CheckBox^  checkBox_wizzard;
	private: System::Windows::Forms::CheckBox^  checkBox_blademaster;
	private: System::Windows::Forms::CheckBox^  checkBox_unknown_18;
	private: System::Windows::Forms::Label^  label110;
	private: System::Windows::Forms::CheckBox^  checkBox_unknown_20;
	private: System::Windows::Forms::Label^  label112;
	private: System::Windows::Forms::CheckBox^  checkBox_unknown_19;
	private: System::Windows::Forms::Label^  label111;
	private: System::Windows::Forms::TextBox^  textBox_ai_trigger;
	private: System::Windows::Forms::Label^  label113;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::CheckBox^  checkBox_unknown_23;
	private: System::Windows::Forms::Label^  label116;
	private: System::Windows::Forms::CheckBox^  checkBox_unknown_22;
	private: System::Windows::Forms::Label^  label115;
	private: System::Windows::Forms::CheckBox^  checkBox_unknown_21;
	private: System::Windows::Forms::Label^  label114;
	private: System::Windows::Forms::TextBox^  textBox_unknown_level;
	private: System::Windows::Forms::Label^  label117;
	private: System::Windows::Forms::TextBox^  textBox_instant_teleport_location_z;
	private: System::Windows::Forms::Label^  label121;
	private: System::Windows::Forms::TextBox^  textBox_instant_teleport_location_alt;
	private: System::Windows::Forms::Label^  label120;
	private: System::Windows::Forms::TextBox^  textBox_instant_teleport_location_x;
	private: System::Windows::Forms::Label^  label119;
	private: System::Windows::Forms::TextBox^  textBox_instant_teleport_location_map_id;
	private: System::Windows::Forms::Label^  label118;
	private: System::Windows::Forms::Label^  label123;
	private: System::Windows::Forms::CheckBox^  checkBox_mark_available_point;
	private: System::Windows::Forms::Label^  label122;
	private: System::Windows::Forms::CheckBox^  checkBox_mark_available_icon;
	private: System::Windows::Forms::Label^  label33;
	private: System::Windows::Forms::TextBox^  textBox_quest_npc;
	private: System::Windows::Forms::Label^  label34;
	private: System::Windows::Forms::TextBox^  textBox_reward_npc;
	private: System::Windows::Forms::CheckBox^  checkBox_unknown_24;
	private: System::Windows::Forms::Label^  label124;
	private: System::Windows::Forms::CheckBox^  checkBox_unknown_26;
	private: System::Windows::Forms::Label^  label126;
	private: System::Windows::Forms::CheckBox^  checkBox_unknown_25;
	private: System::Windows::Forms::Label^  label125;
	private: System::Windows::Forms::CheckBox^  checkBox_craft_skill;
	private: System::Windows::Forms::Label^  label127;
	private: System::Windows::Forms::Label^  label128;
	private: System::Windows::Forms::TextBox^  textBox_unknown_26_01;
	private: System::Windows::Forms::ToolStripMenuItem^  ToolStripMenuItem_v100;
	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip_valid_location;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem5;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem6;
	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip_unknown_location;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem4;
private: System::Windows::Forms::CheckBox^  checkBox_unknown_28;

private: System::Windows::Forms::CheckBox^  checkBox_unknown_27;

private: System::Windows::Forms::Label^  label64;
private: System::Windows::Forms::Label^  label62;
private: System::Windows::Forms::TextBox^  textBox_required_items_unknown;
private: System::Windows::Forms::Label^  label70;
private: System::Windows::Forms::CheckBox^  checkBox_unknown_28_01;

private: System::Windows::Forms::Label^  label71;
private: System::Windows::Forms::TextBox^  textBox_unknown_30;

private: System::Windows::Forms::Label^  label73;
private: System::Windows::Forms::TextBox^  textBox_unknown_29;

private: System::Windows::Forms::Label^  label72;
private: System::Windows::Forms::TextBox^  textBox_given_items_unknown;

private: System::Windows::Forms::Label^  label129;
private: System::Windows::Forms::CheckBox^  checkBox_unknown_31;
private: System::Windows::Forms::Label^  label130;
private: System::Windows::Forms::TextBox^  textBox_unknown_32;
private: System::Windows::Forms::Label^  label131;
private: System::Windows::Forms::TextBox^  textBox_requiredReputation;
private: System::Windows::Forms::Label^  label38;
private: System::Windows::Forms::CheckBox^  checkBox_unknown_33;
private: System::Windows::Forms::Label^  label132;
private: System::Windows::Forms::Label^  label41;
private: System::Windows::Forms::TextBox^  textBox_required_quests_done_1;
private: System::Windows::Forms::TextBox^  textBox_required_quests_done_2;
private: System::Windows::Forms::TextBox^  textBox_required_quests_done_3;
private: System::Windows::Forms::TextBox^  textBox_required_quests_done_4;
private: System::Windows::Forms::TextBox^  textBox_required_quests_done_5;





	private: System::ComponentModel::IContainer^  components;

	private:
	/// <summary>
	/// Required designer variable.
	/// </summary>


#pragma region Windows Form Designer generated code
	/// <summary>
	/// Required method for Designer support - do not modify
	/// the contents of this method with the code editor.
	/// </summary>
	void InitializeComponent(void)
	{
		this->components = (gcnew System::ComponentModel::Container());
		System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle87 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
		System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle74 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
		System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle75 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
		System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle76 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
		System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle77 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
		System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle78 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
		System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle79 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
		System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle80 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
		System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle81 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
		System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle82 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
		System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle83 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
		System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle84 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
		System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle85 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
		System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle86 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
		System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle90 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
		System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle14 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
		System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle88 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
		System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle89 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
		System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle98 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
		System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle18 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
		System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle91 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
		System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle92 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
		System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle93 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
		System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle94 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
		System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle95 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
		System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle96 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
		System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle97 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
		System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle102 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
		System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle27 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
		System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle99 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
		System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle100 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
		System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle101 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
		System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle105 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
		System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle32 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
		System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle103 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
		System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle104 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
		System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle111 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
		System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle36 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
		System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle106 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
		System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle107 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
		System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle108 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
		System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle109 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
		System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle110 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
		System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle117 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
		System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle43 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
		System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle112 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
		System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle113 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
		System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle114 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
		System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle115 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
		System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle116 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
		System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle123 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
		System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle50 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
		System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle118 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
		System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle119 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
		System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle120 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
		System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle121 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
		System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle122 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
		System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle127 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
		System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle57 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
		System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle124 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
		System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle125 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
		System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle126 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
		System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle130 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
		System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle62 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
		System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle128 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
		System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle129 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
		System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle136 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
		System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle66 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
		System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle131 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
		System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle132 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
		System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle133 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
		System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle134 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
		System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle135 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
		this->menuStrip_mainMenu = (gcnew System::Windows::Forms::MenuStrip());
		this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->loadToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->exportToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->ToolStripMenuItem_v55 = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->ToolStripMenuItem_v56 = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->ToolStripMenuItem_v93 = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->ToolStripMenuItem_v100 = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->taskSplitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->creatureBuilderListToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->contextMenuStrip_date_spans = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
		this->addRowToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->deleteRowToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->progressBar_progress = (gcnew System::Windows::Forms::ProgressBar());
		this->textBox_search = (gcnew System::Windows::Forms::TextBox());
		this->button_search = (gcnew System::Windows::Forms::Button());
		this->treeView_tasks = (gcnew System::Windows::Forms::TreeView());
		this->contextMenuStrip_task = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
		this->cloneSelectedToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->deleteSelectedToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
		this->exportSelectedItemToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->replaceSelectedItemToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->comboBox_type = (gcnew System::Windows::Forms::ComboBox());
		this->label55 = (gcnew System::Windows::Forms::Label());
		this->checkBox_author_mode = (gcnew System::Windows::Forms::CheckBox());
		this->textBox_time_limit = (gcnew System::Windows::Forms::TextBox());
		this->label32 = (gcnew System::Windows::Forms::Label());
		this->textBox_author_text = (gcnew System::Windows::Forms::TextBox());
		this->textBox_name = (gcnew System::Windows::Forms::TextBox());
		this->label29 = (gcnew System::Windows::Forms::Label());
		this->textBox_id = (gcnew System::Windows::Forms::TextBox());
		this->label28 = (gcnew System::Windows::Forms::Label());
		this->textBox_unknown_07 = (gcnew System::Windows::Forms::TextBox());
		this->label76 = (gcnew System::Windows::Forms::Label());
		this->dataGridView_date_spans = (gcnew System::Windows::Forms::DataGridView());
		this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->Column6 = (gcnew System::Windows::Forms::DataGridViewComboBoxColumn());
		this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->Column12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->Column13 = (gcnew System::Windows::Forms::DataGridViewComboBoxColumn());
		this->groupBox_required_items = (gcnew System::Windows::Forms::GroupBox());
		this->label69 = (gcnew System::Windows::Forms::Label());
		this->textBox_requiredCoins = (gcnew System::Windows::Forms::TextBox());
		this->label39 = (gcnew System::Windows::Forms::Label());
		this->textBox_requiredItemsUnknown = (gcnew System::Windows::Forms::TextBox());
		this->label68 = (gcnew System::Windows::Forms::Label());
		this->dataGridView_requiredItems = (gcnew System::Windows::Forms::DataGridView());
		this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
		this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->groupBox_team_members = (gcnew System::Windows::Forms::GroupBox());
		this->textBox_teamMembersUnknown = (gcnew System::Windows::Forms::TextBox());
		this->label74 = (gcnew System::Windows::Forms::Label());
		this->dataGridView_team = (gcnew System::Windows::Forms::DataGridView());
		this->dataGridViewTextBoxColumn8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->dataGridViewTextBoxColumn9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->dataGridViewTextBoxColumn10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->dataGridViewTextBoxColumn11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->dataGridViewTextBoxColumn12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->dataGridViewTextBoxColumn13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->dataGridViewTextBoxColumn14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->dataGridViewTextBoxColumn15 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->dataGridView_rewardItems = (gcnew System::Windows::Forms::DataGridView());
		this->Column_rewardGroups = (gcnew System::Windows::Forms::DataGridViewComboBoxColumn());
		this->dataGridViewTextBoxColumn28 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->dataGridViewTextBoxColumn29 = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
		this->dataGridViewTextBoxColumn30 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->dataGridViewTextBoxColumn31 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->groupBox_given_items = (gcnew System::Windows::Forms::GroupBox());
		this->textBox_givenItemsUnknown = (gcnew System::Windows::Forms::TextBox());
		this->label75 = (gcnew System::Windows::Forms::Label());
		this->dataGridView_givenItems = (gcnew System::Windows::Forms::DataGridView());
		this->dataGridViewTextBoxColumn24 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->dataGridViewTextBoxColumn25 = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
		this->dataGridViewTextBoxColumn26 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->dataGridViewTextBoxColumn27 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->groupBox_reward_groups = (gcnew System::Windows::Forms::GroupBox());
		this->numericUpDown_timeFactor = (gcnew System::Windows::Forms::NumericUpDown());
		this->label3 = (gcnew System::Windows::Forms::Label());
		this->radioButton_timed = (gcnew System::Windows::Forms::RadioButton());
		this->radioButton_failed = (gcnew System::Windows::Forms::RadioButton());
		this->radioButton_success = (gcnew System::Windows::Forms::RadioButton());
		this->listBox_rewardTimed = (gcnew System::Windows::Forms::ListBox());
		this->groupBox_reward = (gcnew System::Windows::Forms::GroupBox());
		this->label63 = (gcnew System::Windows::Forms::Label());
		this->textBox_rewardAITrigger = (gcnew System::Windows::Forms::TextBox());
		this->textBox_rewardSeperator = (gcnew System::Windows::Forms::TextBox());
		this->label61 = (gcnew System::Windows::Forms::Label());
		this->textBox_rewardUnknown2 = (gcnew System::Windows::Forms::TextBox());
		this->label60 = (gcnew System::Windows::Forms::Label());
		this->textBox_rewardUnknown1 = (gcnew System::Windows::Forms::TextBox());
		this->label59 = (gcnew System::Windows::Forms::Label());
		this->label57 = (gcnew System::Windows::Forms::Label());
		this->checkedListBox_rewardGroupFlags = (gcnew System::Windows::Forms::CheckedListBox());
		this->numericUpDown_rewardGroups = (gcnew System::Windows::Forms::NumericUpDown());
		this->label56 = (gcnew System::Windows::Forms::Label());
		this->label37 = (gcnew System::Windows::Forms::Label());
		this->textBox_rewardTeleportMap = (gcnew System::Windows::Forms::TextBox());
		this->textBox_rewardTeleportZ = (gcnew System::Windows::Forms::TextBox());
		this->textBox_rewardTeleportX = (gcnew System::Windows::Forms::TextBox());
		this->textBox_rewardTeleportAltitude = (gcnew System::Windows::Forms::TextBox());
		this->label26 = (gcnew System::Windows::Forms::Label());
		this->textBox_rewardPetbag = (gcnew System::Windows::Forms::TextBox());
		this->label23 = (gcnew System::Windows::Forms::Label());
		this->textBox_rewardInventory = (gcnew System::Windows::Forms::TextBox());
		this->label24 = (gcnew System::Windows::Forms::Label());
		this->textBox_rewardStorage = (gcnew System::Windows::Forms::TextBox());
		this->label25 = (gcnew System::Windows::Forms::Label());
		this->textBox_rewardNewQuest = (gcnew System::Windows::Forms::TextBox());
		this->label22 = (gcnew System::Windows::Forms::Label());
		this->textBox_rewardVigor = (gcnew System::Windows::Forms::TextBox());
		this->label21 = (gcnew System::Windows::Forms::Label());
		this->textBox_rewardCulti = (gcnew System::Windows::Forms::TextBox());
		this->label20 = (gcnew System::Windows::Forms::Label());
		this->textBox_rewardREP = (gcnew System::Windows::Forms::TextBox());
		this->label19 = (gcnew System::Windows::Forms::Label());
		this->textBox_rewardSP = (gcnew System::Windows::Forms::TextBox());
		this->label18 = (gcnew System::Windows::Forms::Label());
		this->textBox_rewardEXP = (gcnew System::Windows::Forms::TextBox());
		this->label17 = (gcnew System::Windows::Forms::Label());
		this->textBox_rewardCoins = (gcnew System::Windows::Forms::TextBox());
		this->label16 = (gcnew System::Windows::Forms::Label());
		this->groupBox_conversation = (gcnew System::Windows::Forms::GroupBox());
		this->textBox_conversationText = (gcnew System::Windows::Forms::TextBox());
		this->label42 = (gcnew System::Windows::Forms::Label());
		this->label40 = (gcnew System::Windows::Forms::Label());
		this->textBox_conversationPrompt = (gcnew System::Windows::Forms::TextBox());
		this->groupBox_answers = (gcnew System::Windows::Forms::GroupBox());
		this->textBox_answerText = (gcnew System::Windows::Forms::TextBox());
		this->textBox_answerTlink = (gcnew System::Windows::Forms::TextBox());
		this->label46 = (gcnew System::Windows::Forms::Label());
		this->textBox_answerQlink = (gcnew System::Windows::Forms::TextBox());
		this->label47 = (gcnew System::Windows::Forms::Label());
		this->listBox_answers = (gcnew System::Windows::Forms::ListBox());
		this->contextMenuStrip_conversation = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
		this->addToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->removeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->groupBox_questions = (gcnew System::Windows::Forms::GroupBox());
		this->textBox_questionText = (gcnew System::Windows::Forms::TextBox());
		this->textBox_questionPrevious = (gcnew System::Windows::Forms::TextBox());
		this->label45 = (gcnew System::Windows::Forms::Label());
		this->textBox_questionID = (gcnew System::Windows::Forms::TextBox());
		this->label44 = (gcnew System::Windows::Forms::Label());
		this->listBox_questions = (gcnew System::Windows::Forms::ListBox());
		this->groupBox_dialogs = (gcnew System::Windows::Forms::GroupBox());
		this->textBox_dialogText = (gcnew System::Windows::Forms::TextBox());
		this->textBox_dialogUnknown = (gcnew System::Windows::Forms::TextBox());
		this->label43 = (gcnew System::Windows::Forms::Label());
		this->listBox_dialogs = (gcnew System::Windows::Forms::ListBox());
		this->toolTip = (gcnew System::Windows::Forms::ToolTip(this->components));
		this->label106 = (gcnew System::Windows::Forms::Label());
		this->label107 = (gcnew System::Windows::Forms::Label());
		this->label10 = (gcnew System::Windows::Forms::Label());
		this->label11 = (gcnew System::Windows::Forms::Label());
		this->label12 = (gcnew System::Windows::Forms::Label());
		this->label13 = (gcnew System::Windows::Forms::Label());
		this->label14 = (gcnew System::Windows::Forms::Label());
		this->label15 = (gcnew System::Windows::Forms::Label());
		this->label53 = (gcnew System::Windows::Forms::Label());
		this->label48 = (gcnew System::Windows::Forms::Label());
		this->comboBox_search = (gcnew System::Windows::Forms::ComboBox());
		this->panel_task = (gcnew System::Windows::Forms::Panel());
		this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
		this->label35 = (gcnew System::Windows::Forms::Label());
		this->label128 = (gcnew System::Windows::Forms::Label());
		this->textBox_level_min = (gcnew System::Windows::Forms::TextBox());
		this->label36 = (gcnew System::Windows::Forms::Label());
		this->textBox_unknown_26_01 = (gcnew System::Windows::Forms::TextBox());
		this->textBox_level_max = (gcnew System::Windows::Forms::TextBox());
		this->checkBox_craft_skill = (gcnew System::Windows::Forms::CheckBox());
		this->label127 = (gcnew System::Windows::Forms::Label());
		this->checkBox_unknown_26 = (gcnew System::Windows::Forms::CheckBox());
		this->label126 = (gcnew System::Windows::Forms::Label());
		this->checkBox_unknown_25 = (gcnew System::Windows::Forms::CheckBox());
		this->label125 = (gcnew System::Windows::Forms::Label());
		this->checkBox_unknown_24 = (gcnew System::Windows::Forms::CheckBox());
		this->label124 = (gcnew System::Windows::Forms::Label());
		this->label33 = (gcnew System::Windows::Forms::Label());
		this->textBox_quest_npc = (gcnew System::Windows::Forms::TextBox());
		this->label34 = (gcnew System::Windows::Forms::Label());
		this->textBox_reward_npc = (gcnew System::Windows::Forms::TextBox());
		this->label123 = (gcnew System::Windows::Forms::Label());
		this->checkBox_mark_available_point = (gcnew System::Windows::Forms::CheckBox());
		this->label122 = (gcnew System::Windows::Forms::Label());
		this->checkBox_mark_available_icon = (gcnew System::Windows::Forms::CheckBox());
		this->textBox_instant_teleport_location_z = (gcnew System::Windows::Forms::TextBox());
		this->label121 = (gcnew System::Windows::Forms::Label());
		this->textBox_instant_teleport_location_alt = (gcnew System::Windows::Forms::TextBox());
		this->label120 = (gcnew System::Windows::Forms::Label());
		this->textBox_instant_teleport_location_x = (gcnew System::Windows::Forms::TextBox());
		this->label119 = (gcnew System::Windows::Forms::Label());
		this->textBox_instant_teleport_location_map_id = (gcnew System::Windows::Forms::TextBox());
		this->label118 = (gcnew System::Windows::Forms::Label());
		this->textBox_unknown_level = (gcnew System::Windows::Forms::TextBox());
		this->label117 = (gcnew System::Windows::Forms::Label());
		this->label108 = (gcnew System::Windows::Forms::Label());
		this->checkBox_unknown_23 = (gcnew System::Windows::Forms::CheckBox());
		this->checkBox_unknown_17 = (gcnew System::Windows::Forms::CheckBox());
		this->label116 = (gcnew System::Windows::Forms::Label());
		this->label109 = (gcnew System::Windows::Forms::Label());
		this->checkBox_unknown_22 = (gcnew System::Windows::Forms::CheckBox());
		this->checkBox_has_instant_teleport = (gcnew System::Windows::Forms::CheckBox());
		this->label115 = (gcnew System::Windows::Forms::Label());
		this->label110 = (gcnew System::Windows::Forms::Label());
		this->checkBox_unknown_21 = (gcnew System::Windows::Forms::CheckBox());
		this->checkBox_unknown_18 = (gcnew System::Windows::Forms::CheckBox());
		this->label114 = (gcnew System::Windows::Forms::Label());
		this->label111 = (gcnew System::Windows::Forms::Label());
		this->textBox_ai_trigger = (gcnew System::Windows::Forms::TextBox());
		this->checkBox_unknown_19 = (gcnew System::Windows::Forms::CheckBox());
		this->label113 = (gcnew System::Windows::Forms::Label());
		this->label112 = (gcnew System::Windows::Forms::Label());
		this->checkBox_unknown_20 = (gcnew System::Windows::Forms::CheckBox());
		this->groupBox_prerequisites = (gcnew System::Windows::Forms::GroupBox());
		this->comboBox_gender = (gcnew System::Windows::Forms::ComboBox());
		this->label58 = (gcnew System::Windows::Forms::Label());
		this->textBox_unknownLevel = (gcnew System::Windows::Forms::TextBox());
		this->label30 = (gcnew System::Windows::Forms::Label());
		this->textBox_requiredQuestUndone1 = (gcnew System::Windows::Forms::TextBox());
		this->textBox_requiredQuestUndone2 = (gcnew System::Windows::Forms::TextBox());
		this->textBox_requiredQuestUndone3 = (gcnew System::Windows::Forms::TextBox());
		this->textBox_requiredQuestUndone5 = (gcnew System::Windows::Forms::TextBox());
		this->textBox_requiredQuestUndone4 = (gcnew System::Windows::Forms::TextBox());
		this->groupBox_skills = (gcnew System::Windows::Forms::GroupBox());
		this->textBox_requiredApothecary = (gcnew System::Windows::Forms::TextBox());
		this->label80 = (gcnew System::Windows::Forms::Label());
		this->textBox_requiredCraftsman = (gcnew System::Windows::Forms::TextBox());
		this->label79 = (gcnew System::Windows::Forms::Label());
		this->textBox_requiredTailor = (gcnew System::Windows::Forms::TextBox());
		this->label78 = (gcnew System::Windows::Forms::Label());
		this->textBox_requiredBlacksmith = (gcnew System::Windows::Forms::TextBox());
		this->label77 = (gcnew System::Windows::Forms::Label());
		this->groupBox_occupations = (gcnew System::Windows::Forms::GroupBox());
		this->checkBox_cleric = (gcnew System::Windows::Forms::CheckBox());
		this->checkBox_archer = (gcnew System::Windows::Forms::CheckBox());
		this->checkBox_genie = (gcnew System::Windows::Forms::CheckBox());
		this->checkBox_barbarian = (gcnew System::Windows::Forms::CheckBox());
		this->checkBox_venomancer = (gcnew System::Windows::Forms::CheckBox());
		this->checkBox_monk = (gcnew System::Windows::Forms::CheckBox());
		this->checkBox_wizzard = (gcnew System::Windows::Forms::CheckBox());
		this->checkBox_blademaster = (gcnew System::Windows::Forms::CheckBox());
		this->groupBox_reach_location = (gcnew System::Windows::Forms::GroupBox());
		this->groupBox_valid_location = (gcnew System::Windows::Forms::GroupBox());
		this->checkBox_valid_locations_has_spans = (gcnew System::Windows::Forms::CheckBox());
		this->textBox_valid_locations_unknown_1 = (gcnew System::Windows::Forms::TextBox());
		this->dataGridView_valid_location_spans = (gcnew System::Windows::Forms::DataGridView());
		this->dataGridViewTextBoxColumn49 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->dataGridViewTextBoxColumn50 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->dataGridViewTextBoxColumn51 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->dataGridViewTextBoxColumn52 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->dataGridViewTextBoxColumn53 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->dataGridViewTextBoxColumn54 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->contextMenuStrip_valid_location = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
		this->toolStripMenuItem5 = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->toolStripMenuItem6 = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->textBox_valid_locations_map_id = (gcnew System::Windows::Forms::TextBox());
		this->groupBox_unknown_location = (gcnew System::Windows::Forms::GroupBox());
		this->checkBox_unknown_locations_has_spans = (gcnew System::Windows::Forms::CheckBox());
		this->textBox_unknown_locations_unknown_1 = (gcnew System::Windows::Forms::TextBox());
		this->dataGridView_unknown_location_spans = (gcnew System::Windows::Forms::DataGridView());
		this->dataGridViewTextBoxColumn43 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->dataGridViewTextBoxColumn44 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->dataGridViewTextBoxColumn45 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->dataGridViewTextBoxColumn46 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->dataGridViewTextBoxColumn47 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->dataGridViewTextBoxColumn48 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->contextMenuStrip_unknown_location = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
		this->toolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->toolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->textBox_unknown_locations_map_id = (gcnew System::Windows::Forms::TextBox());
		this->groupBox_trigger_location = (gcnew System::Windows::Forms::GroupBox());
		this->textBox_trigger_locations_unknown_1 = (gcnew System::Windows::Forms::TextBox());
		this->dataGridView_trigger_location_spans = (gcnew System::Windows::Forms::DataGridView());
		this->dataGridViewTextBoxColumn37 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->dataGridViewTextBoxColumn38 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->dataGridViewTextBoxColumn39 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->dataGridViewTextBoxColumn40 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->dataGridViewTextBoxColumn41 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->dataGridViewTextBoxColumn42 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->contextMenuStrip_trigger_location = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
		this->addToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->removeToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->checkBox_trigger_locations_has_spans = (gcnew System::Windows::Forms::CheckBox());
		this->textBox_trigger_locations_map_id = (gcnew System::Windows::Forms::TextBox());
		this->groupBox_required_to_do = (gcnew System::Windows::Forms::GroupBox());
		this->textBox_getItemsUnknown = (gcnew System::Windows::Forms::TextBox());
		this->label67 = (gcnew System::Windows::Forms::Label());
		this->textBox_chaseUnknown = (gcnew System::Windows::Forms::TextBox());
		this->label66 = (gcnew System::Windows::Forms::Label());
		this->textBox_requiredLocationMap = (gcnew System::Windows::Forms::TextBox());
		this->label54 = (gcnew System::Windows::Forms::Label());
		this->label27 = (gcnew System::Windows::Forms::Label());
		this->textBox_waitTime = (gcnew System::Windows::Forms::TextBox());
		this->textBox_requiredLocationNorth = (gcnew System::Windows::Forms::TextBox());
		this->label8 = (gcnew System::Windows::Forms::Label());
		this->textBox_requiredLocationSouth = (gcnew System::Windows::Forms::TextBox());
		this->label9 = (gcnew System::Windows::Forms::Label());
		this->textBox_requiredLocationTop = (gcnew System::Windows::Forms::TextBox());
		this->label6 = (gcnew System::Windows::Forms::Label());
		this->textBox_requiredLocationBottom = (gcnew System::Windows::Forms::TextBox());
		this->label7 = (gcnew System::Windows::Forms::Label());
		this->textBox_requiredLocationWest = (gcnew System::Windows::Forms::TextBox());
		this->label5 = (gcnew System::Windows::Forms::Label());
		this->textBox_requiredLocationEast = (gcnew System::Windows::Forms::TextBox());
		this->label4 = (gcnew System::Windows::Forms::Label());
		this->label2 = (gcnew System::Windows::Forms::Label());
		this->label1 = (gcnew System::Windows::Forms::Label());
		this->dataGridView_chase = (gcnew System::Windows::Forms::DataGridView());
		this->dataGridViewTextBoxColumn20 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->dataGridViewTextBoxColumn21 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->dataGridViewTextBoxColumn22 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->dataGridViewTextBoxColumn23 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->Column14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->Column15 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->Column16 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->dataGridView_getItems = (gcnew System::Windows::Forms::DataGridView());
		this->dataGridViewTextBoxColumn16 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->dataGridViewTextBoxColumn17 = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
		this->dataGridViewTextBoxColumn18 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->dataGridViewTextBoxColumn19 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->groupBox_flags = (gcnew System::Windows::Forms::GroupBox());
		this->label105 = (gcnew System::Windows::Forms::Label());
		this->checkBox_unknown_14 = (gcnew System::Windows::Forms::CheckBox());
		this->label104 = (gcnew System::Windows::Forms::Label());
		this->checkBox_unknown_13 = (gcnew System::Windows::Forms::CheckBox());
		this->label103 = (gcnew System::Windows::Forms::Label());
		this->checkBox_unknown_12 = (gcnew System::Windows::Forms::CheckBox());
		this->label102 = (gcnew System::Windows::Forms::Label());
		this->checkBox_unknown_11 = (gcnew System::Windows::Forms::CheckBox());
		this->label101 = (gcnew System::Windows::Forms::Label());
		this->checkBox_unknown_10 = (gcnew System::Windows::Forms::CheckBox());
		this->label100 = (gcnew System::Windows::Forms::Label());
		this->checkBox_on_fail_parent_fail = (gcnew System::Windows::Forms::CheckBox());
		this->label99 = (gcnew System::Windows::Forms::Label());
		this->checkBox_fail_on_death = (gcnew System::Windows::Forms::CheckBox());
		this->label98 = (gcnew System::Windows::Forms::Label());
		this->checkBox_repeatable_after_failure = (gcnew System::Windows::Forms::CheckBox());
		this->label97 = (gcnew System::Windows::Forms::Label());
		this->checkBox_repeatable = (gcnew System::Windows::Forms::CheckBox());
		this->label96 = (gcnew System::Windows::Forms::Label());
		this->checkBox_can_give_up = (gcnew System::Windows::Forms::CheckBox());
		this->label95 = (gcnew System::Windows::Forms::Label());
		this->checkBox_on_success_parent_success = (gcnew System::Windows::Forms::CheckBox());
		this->label94 = (gcnew System::Windows::Forms::Label());
		this->checkBox_on_give_up_parent_fails = (gcnew System::Windows::Forms::CheckBox());
		this->label93 = (gcnew System::Windows::Forms::Label());
		this->checkBox_activate_next_subquest = (gcnew System::Windows::Forms::CheckBox());
		this->label92 = (gcnew System::Windows::Forms::Label());
		this->checkBox_activate_random_subquest = (gcnew System::Windows::Forms::CheckBox());
		this->label91 = (gcnew System::Windows::Forms::Label());
		this->checkBox_activate_first_subquest = (gcnew System::Windows::Forms::CheckBox());
		this->groupBox_requirements = (gcnew System::Windows::Forms::GroupBox());
		this->textBox_given_items_unknown = (gcnew System::Windows::Forms::TextBox());
		this->label129 = (gcnew System::Windows::Forms::Label());
		this->textBox_unknown_30 = (gcnew System::Windows::Forms::TextBox());
		this->label73 = (gcnew System::Windows::Forms::Label());
		this->textBox_unknown_29 = (gcnew System::Windows::Forms::TextBox());
		this->label72 = (gcnew System::Windows::Forms::Label());
		this->checkBox_unknown_28_01 = (gcnew System::Windows::Forms::CheckBox());
		this->label71 = (gcnew System::Windows::Forms::Label());
		this->textBox_required_items_unknown = (gcnew System::Windows::Forms::TextBox());
		this->label70 = (gcnew System::Windows::Forms::Label());
		this->checkBox_unknown_28 = (gcnew System::Windows::Forms::CheckBox());
		this->checkBox_unknown_27 = (gcnew System::Windows::Forms::CheckBox());
		this->label64 = (gcnew System::Windows::Forms::Label());
		this->label62 = (gcnew System::Windows::Forms::Label());
		this->textBox_instant_pay_coins = (gcnew System::Windows::Forms::TextBox());
		this->label65 = (gcnew System::Windows::Forms::Label());
		this->textBox_subQuestFirst = (gcnew System::Windows::Forms::TextBox());
		this->label52 = (gcnew System::Windows::Forms::Label());
		this->textBox_nextQuest = (gcnew System::Windows::Forms::TextBox());
		this->label51 = (gcnew System::Windows::Forms::Label());
		this->textBox_previousQuest = (gcnew System::Windows::Forms::TextBox());
		this->label50 = (gcnew System::Windows::Forms::Label());
		this->textBox_parentQuest = (gcnew System::Windows::Forms::TextBox());
		this->label49 = (gcnew System::Windows::Forms::Label());
		this->groupBox_general = (gcnew System::Windows::Forms::GroupBox());
		this->textBox_unknown_09 = (gcnew System::Windows::Forms::TextBox());
		this->label90 = (gcnew System::Windows::Forms::Label());
		this->textBox_unknown_08 = (gcnew System::Windows::Forms::TextBox());
		this->label89 = (gcnew System::Windows::Forms::Label());
		this->dataGridView_date_fail = (gcnew System::Windows::Forms::DataGridView());
		this->dataGridViewTextBoxColumn32 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->dataGridViewTextBoxColumn33 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->dataGridViewTextBoxColumn34 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->dataGridViewTextBoxColumn35 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->dataGridViewTextBoxColumn36 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->Column1 = (gcnew System::Windows::Forms::DataGridViewComboBoxColumn());
		this->label88 = (gcnew System::Windows::Forms::Label());
		this->label87 = (gcnew System::Windows::Forms::Label());
		this->label86 = (gcnew System::Windows::Forms::Label());
		this->label83 = (gcnew System::Windows::Forms::Label());
		this->label82 = (gcnew System::Windows::Forms::Label());
		this->checkBox_unknown_03 = (gcnew System::Windows::Forms::CheckBox());
		this->checkBox_unknown_02 = (gcnew System::Windows::Forms::CheckBox());
		this->textBox_unknown_06 = (gcnew System::Windows::Forms::TextBox());
		this->label85 = (gcnew System::Windows::Forms::Label());
		this->textBox_unknown_05 = (gcnew System::Windows::Forms::TextBox());
		this->label84 = (gcnew System::Windows::Forms::Label());
		this->textBox_unknown_04 = (gcnew System::Windows::Forms::TextBox());
		this->label31 = (gcnew System::Windows::Forms::Label());
		this->checkBox_has_date_spans = (gcnew System::Windows::Forms::CheckBox());
		this->checkBox_has_date_fail = (gcnew System::Windows::Forms::CheckBox());
		this->textBox_unknown_01 = (gcnew System::Windows::Forms::TextBox());
		this->label81 = (gcnew System::Windows::Forms::Label());
		this->checkBox_unknown_31 = (gcnew System::Windows::Forms::CheckBox());
		this->label130 = (gcnew System::Windows::Forms::Label());
		this->textBox_requiredReputation = (gcnew System::Windows::Forms::TextBox());
		this->label38 = (gcnew System::Windows::Forms::Label());
		this->textBox_unknown_32 = (gcnew System::Windows::Forms::TextBox());
		this->label131 = (gcnew System::Windows::Forms::Label());
		this->checkBox_unknown_33 = (gcnew System::Windows::Forms::CheckBox());
		this->label132 = (gcnew System::Windows::Forms::Label());
		this->label41 = (gcnew System::Windows::Forms::Label());
		this->textBox_required_quests_done_1 = (gcnew System::Windows::Forms::TextBox());
		this->textBox_required_quests_done_2 = (gcnew System::Windows::Forms::TextBox());
		this->textBox_required_quests_done_3 = (gcnew System::Windows::Forms::TextBox());
		this->textBox_required_quests_done_4 = (gcnew System::Windows::Forms::TextBox());
		this->textBox_required_quests_done_5 = (gcnew System::Windows::Forms::TextBox());
		this->menuStrip_mainMenu->SuspendLayout();
		this->contextMenuStrip_date_spans->SuspendLayout();
		this->contextMenuStrip_task->SuspendLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView_date_spans))->BeginInit();
		this->groupBox_required_items->SuspendLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView_requiredItems))->BeginInit();
		this->groupBox_team_members->SuspendLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView_team))->BeginInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView_rewardItems))->BeginInit();
		this->groupBox_given_items->SuspendLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView_givenItems))->BeginInit();
		this->groupBox_reward_groups->SuspendLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown_timeFactor))->BeginInit();
		this->groupBox_reward->SuspendLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown_rewardGroups))->BeginInit();
		this->groupBox_conversation->SuspendLayout();
		this->groupBox_answers->SuspendLayout();
		this->contextMenuStrip_conversation->SuspendLayout();
		this->groupBox_questions->SuspendLayout();
		this->groupBox_dialogs->SuspendLayout();
		this->panel_task->SuspendLayout();
		this->groupBox1->SuspendLayout();
		this->groupBox_prerequisites->SuspendLayout();
		this->groupBox_skills->SuspendLayout();
		this->groupBox_occupations->SuspendLayout();
		this->groupBox_valid_location->SuspendLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView_valid_location_spans))->BeginInit();
		this->contextMenuStrip_valid_location->SuspendLayout();
		this->groupBox_unknown_location->SuspendLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView_unknown_location_spans))->BeginInit();
		this->contextMenuStrip_unknown_location->SuspendLayout();
		this->groupBox_trigger_location->SuspendLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView_trigger_location_spans))->BeginInit();
		this->contextMenuStrip_trigger_location->SuspendLayout();
		this->groupBox_required_to_do->SuspendLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView_chase))->BeginInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView_getItems))->BeginInit();
		this->groupBox_flags->SuspendLayout();
		this->groupBox_requirements->SuspendLayout();
		this->groupBox_general->SuspendLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView_date_fail))->BeginInit();
		this->SuspendLayout();
		// 
		// menuStrip_mainMenu
		// 
		this->menuStrip_mainMenu->BackColor = System::Drawing::SystemColors::Control;
		this->menuStrip_mainMenu->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->toolStripMenuItem1, 
			this->toolStripMenuItem2});
		this->menuStrip_mainMenu->Location = System::Drawing::Point(0, 0);
		this->menuStrip_mainMenu->Name = L"menuStrip_mainMenu";
		this->menuStrip_mainMenu->Padding = System::Windows::Forms::Padding(0, 2, 2, 2);
		this->menuStrip_mainMenu->RenderMode = System::Windows::Forms::ToolStripRenderMode::System;
		this->menuStrip_mainMenu->Size = System::Drawing::Size(912, 24);
		this->menuStrip_mainMenu->TabIndex = 0;
		this->menuStrip_mainMenu->Text = L"menuStrip1";
		// 
		// toolStripMenuItem1
		// 
		this->toolStripMenuItem1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
		this->toolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->loadToolStripMenuItem, 
			this->exportToolStripMenuItem});
		this->toolStripMenuItem1->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
		this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
		this->toolStripMenuItem1->Padding = System::Windows::Forms::Padding(0);
		this->toolStripMenuItem1->Size = System::Drawing::Size(27, 20);
		this->toolStripMenuItem1->Text = L"File";
		this->toolStripMenuItem1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		// 
		// loadToolStripMenuItem
		// 
		this->loadToolStripMenuItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
		this->loadToolStripMenuItem->Name = L"loadToolStripMenuItem";
		this->loadToolStripMenuItem->Size = System::Drawing::Size(109, 22);
		this->loadToolStripMenuItem->Text = L"Load...";
		this->loadToolStripMenuItem->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->loadToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::click_load);
		// 
		// exportToolStripMenuItem
		// 
		this->exportToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->ToolStripMenuItem_v55, 
			this->ToolStripMenuItem_v56, this->ToolStripMenuItem_v93, this->ToolStripMenuItem_v100});
		this->exportToolStripMenuItem->Name = L"exportToolStripMenuItem";
		this->exportToolStripMenuItem->Size = System::Drawing::Size(109, 22);
		this->exportToolStripMenuItem->Text = L"Export";
		// 
		// ToolStripMenuItem_v55
		// 
		this->ToolStripMenuItem_v55->Name = L"ToolStripMenuItem_v55";
		this->ToolStripMenuItem_v55->Size = System::Drawing::Size(195, 22);
		this->ToolStripMenuItem_v55->Text = L"v55 (1.2.6 Server)";
		this->ToolStripMenuItem_v55->Click += gcnew System::EventHandler(this, &MainWindow::click_save);
		// 
		// ToolStripMenuItem_v56
		// 
		this->ToolStripMenuItem_v56->Name = L"ToolStripMenuItem_v56";
		this->ToolStripMenuItem_v56->Size = System::Drawing::Size(195, 22);
		this->ToolStripMenuItem_v56->Text = L"v56 (1.3.6 Client)";
		this->ToolStripMenuItem_v56->Click += gcnew System::EventHandler(this, &MainWindow::click_save);
		// 
		// ToolStripMenuItem_v93
		// 
		this->ToolStripMenuItem_v93->Name = L"ToolStripMenuItem_v93";
		this->ToolStripMenuItem_v93->Size = System::Drawing::Size(195, 22);
		this->ToolStripMenuItem_v93->Text = L"v93 (1.4.4 Client/Server)";
		this->ToolStripMenuItem_v93->Click += gcnew System::EventHandler(this, &MainWindow::click_save);
		// 
		// ToolStripMenuItem_v100
		// 
		this->ToolStripMenuItem_v100->Name = L"ToolStripMenuItem_v100";
		this->ToolStripMenuItem_v100->Size = System::Drawing::Size(195, 22);
		this->ToolStripMenuItem_v100->Text = L"v100 (1.4.5 Client)";
		this->ToolStripMenuItem_v100->Click += gcnew System::EventHandler(this, &MainWindow::click_save);
		// 
		// toolStripMenuItem2
		// 
		this->toolStripMenuItem2->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
		this->toolStripMenuItem2->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->taskSplitToolStripMenuItem, 
			this->creatureBuilderListToolStripMenuItem});
		this->toolStripMenuItem2->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
		this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
		this->toolStripMenuItem2->Padding = System::Windows::Forms::Padding(0);
		this->toolStripMenuItem2->Size = System::Drawing::Size(36, 20);
		this->toolStripMenuItem2->Text = L"Tools";
		this->toolStripMenuItem2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		// 
		// taskSplitToolStripMenuItem
		// 
		this->taskSplitToolStripMenuItem->Name = L"taskSplitToolStripMenuItem";
		this->taskSplitToolStripMenuItem->Size = System::Drawing::Size(183, 22);
		this->taskSplitToolStripMenuItem->Text = L"Task Split...";
		this->taskSplitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::click_split);
		// 
		// creatureBuilderListToolStripMenuItem
		// 
		this->creatureBuilderListToolStripMenuItem->Name = L"creatureBuilderListToolStripMenuItem";
		this->creatureBuilderListToolStripMenuItem->Size = System::Drawing::Size(183, 22);
		this->creatureBuilderListToolStripMenuItem->Text = L"Creature Builder List...";
		this->creatureBuilderListToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::click_creatureBuilder);
		// 
		// contextMenuStrip_date_spans
		// 
		this->contextMenuStrip_date_spans->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->addRowToolStripMenuItem, 
			this->deleteRowToolStripMenuItem});
		this->contextMenuStrip_date_spans->Name = L"contextMenuStrip_dataGrid";
		this->contextMenuStrip_date_spans->RenderMode = System::Windows::Forms::ToolStripRenderMode::System;
		this->contextMenuStrip_date_spans->ShowImageMargin = false;
		this->contextMenuStrip_date_spans->Size = System::Drawing::Size(134, 48);
		// 
		// addRowToolStripMenuItem
		// 
		this->addRowToolStripMenuItem->Name = L"addRowToolStripMenuItem";
		this->addRowToolStripMenuItem->Size = System::Drawing::Size(133, 22);
		this->addRowToolStripMenuItem->Text = L"Add Date Span";
		this->addRowToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::add_date_span);
		// 
		// deleteRowToolStripMenuItem
		// 
		this->deleteRowToolStripMenuItem->Name = L"deleteRowToolStripMenuItem";
		this->deleteRowToolStripMenuItem->Size = System::Drawing::Size(133, 22);
		this->deleteRowToolStripMenuItem->Text = L"Delete Date Span";
		this->deleteRowToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::remove_date_span);
		// 
		// progressBar_progress
		// 
		this->progressBar_progress->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left) 
			| System::Windows::Forms::AnchorStyles::Right));
		this->progressBar_progress->Location = System::Drawing::Point(0, 636);
		this->progressBar_progress->Name = L"progressBar_progress";
		this->progressBar_progress->Size = System::Drawing::Size(912, 16);
		this->progressBar_progress->TabIndex = 7;
		// 
		// textBox_search
		// 
		this->textBox_search->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
		this->textBox_search->Location = System::Drawing::Point(0, 583);
		this->textBox_search->Name = L"textBox_search";
		this->textBox_search->Size = System::Drawing::Size(222, 20);
		this->textBox_search->TabIndex = 2;
		this->textBox_search->Text = L"ID or NAME";
		this->textBox_search->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
		this->textBox_search->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainWindow::keyPress_search);
		// 
		// button_search
		// 
		this->button_search->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
		this->button_search->Location = System::Drawing::Point(143, 609);
		this->button_search->Name = L"button_search";
		this->button_search->Size = System::Drawing::Size(79, 21);
		this->button_search->TabIndex = 4;
		this->button_search->Text = L"Find Next";
		this->button_search->UseVisualStyleBackColor = true;
		this->button_search->Click += gcnew System::EventHandler(this, &MainWindow::click_search);
		// 
		// treeView_tasks
		// 
		this->treeView_tasks->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
			| System::Windows::Forms::AnchorStyles::Left));
		this->treeView_tasks->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)), 
			static_cast<System::Int32>(static_cast<System::Byte>(32)));
		this->treeView_tasks->ContextMenuStrip = this->contextMenuStrip_task;
		this->treeView_tasks->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->treeView_tasks->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
			static_cast<System::Int32>(static_cast<System::Byte>(64)));
		this->treeView_tasks->HideSelection = false;
		this->treeView_tasks->Indent = 16;
		this->treeView_tasks->LineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
			static_cast<System::Int32>(static_cast<System::Byte>(64)));
		this->treeView_tasks->Location = System::Drawing::Point(0, 27);
		this->treeView_tasks->Name = L"treeView_tasks";
		this->treeView_tasks->ShowLines = false;
		this->treeView_tasks->Size = System::Drawing::Size(222, 550);
		this->treeView_tasks->TabIndex = 1;
		this->treeView_tasks->AfterSelect += gcnew System::Windows::Forms::TreeViewEventHandler(this, &MainWindow::select_task);
		// 
		// contextMenuStrip_task
		// 
		this->contextMenuStrip_task->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {this->cloneSelectedToolStripMenuItem, 
			this->deleteSelectedToolStripMenuItem, this->toolStripSeparator1, this->exportSelectedItemToolStripMenuItem, this->replaceSelectedItemToolStripMenuItem});
		this->contextMenuStrip_task->Name = L"contextMenuStrip_task";
		this->contextMenuStrip_task->RenderMode = System::Windows::Forms::ToolStripRenderMode::System;
		this->contextMenuStrip_task->ShowImageMargin = false;
		this->contextMenuStrip_task->Size = System::Drawing::Size(163, 98);
		// 
		// cloneSelectedToolStripMenuItem
		// 
		this->cloneSelectedToolStripMenuItem->Name = L"cloneSelectedToolStripMenuItem";
		this->cloneSelectedToolStripMenuItem->Size = System::Drawing::Size(162, 22);
		this->cloneSelectedToolStripMenuItem->Text = L"Clone Selected";
		this->cloneSelectedToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::click_cloneTask);
		// 
		// deleteSelectedToolStripMenuItem
		// 
		this->deleteSelectedToolStripMenuItem->Name = L"deleteSelectedToolStripMenuItem";
		this->deleteSelectedToolStripMenuItem->Size = System::Drawing::Size(162, 22);
		this->deleteSelectedToolStripMenuItem->Text = L"Delete Selected";
		this->deleteSelectedToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::click_deleteTask);
		// 
		// toolStripSeparator1
		// 
		this->toolStripSeparator1->Name = L"toolStripSeparator1";
		this->toolStripSeparator1->Size = System::Drawing::Size(159, 6);
		// 
		// exportSelectedItemToolStripMenuItem
		// 
		this->exportSelectedItemToolStripMenuItem->Name = L"exportSelectedItemToolStripMenuItem";
		this->exportSelectedItemToolStripMenuItem->Size = System::Drawing::Size(162, 22);
		this->exportSelectedItemToolStripMenuItem->Text = L"Export Selected Task...";
		this->exportSelectedItemToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::click_ExportTask);
		// 
		// replaceSelectedItemToolStripMenuItem
		// 
		this->replaceSelectedItemToolStripMenuItem->Name = L"replaceSelectedItemToolStripMenuItem";
		this->replaceSelectedItemToolStripMenuItem->Size = System::Drawing::Size(162, 22);
		this->replaceSelectedItemToolStripMenuItem->Text = L"Import New Task...";
		this->replaceSelectedItemToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::click_ImportTask);
		// 
		// comboBox_type
		// 
		this->comboBox_type->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
		this->comboBox_type->FormattingEnabled = true;
		this->comboBox_type->Items->AddRange(gcnew cli::array< System::Object^  >(13) {L"[0] Normal", L"[1] Cycle", L"[2] Spiritual Cultivation", 
			L"[3] Hero", L"[4] Challenge", L"[5] Adventure", L"[6] Errand", L"[7] Legendary", L"[8] Battle", L"[9] Public", L"[10] Divine Order\?", 
			L"[11] Guild Base\?", L"[12] \?"});
		this->comboBox_type->Location = System::Drawing::Point(95, 123);
		this->comboBox_type->Name = L"comboBox_type";
		this->comboBox_type->Size = System::Drawing::Size(115, 21);
		this->comboBox_type->TabIndex = 3;
		this->comboBox_type->SelectedIndexChanged += gcnew System::EventHandler(this, &MainWindow::change_type);
		// 
		// label55
		// 
		this->label55->AutoSize = true;
		this->label55->Location = System::Drawing::Point(6, 126);
		this->label55->Name = L"label55";
		this->label55->Size = System::Drawing::Size(34, 13);
		this->label55->TabIndex = 2;
		this->label55->Text = L"Type:";
		// 
		// checkBox_author_mode
		// 
		this->checkBox_author_mode->AutoSize = true;
		this->checkBox_author_mode->Enabled = false;
		this->checkBox_author_mode->Location = System::Drawing::Point(95, 74);
		this->checkBox_author_mode->Name = L"checkBox_author_mode";
		this->checkBox_author_mode->RightToLeft = System::Windows::Forms::RightToLeft::No;
		this->checkBox_author_mode->Size = System::Drawing::Size(15, 14);
		this->checkBox_author_mode->TabIndex = 8;
		this->checkBox_author_mode->UseVisualStyleBackColor = true;
		// 
		// textBox_time_limit
		// 
		this->textBox_time_limit->Location = System::Drawing::Point(95, 150);
		this->textBox_time_limit->Name = L"textBox_time_limit";
		this->textBox_time_limit->Size = System::Drawing::Size(115, 20);
		this->textBox_time_limit->TabIndex = 10;
		this->textBox_time_limit->Leave += gcnew System::EventHandler(this, &MainWindow::change_time_limit);
		// 
		// label32
		// 
		this->label32->AutoSize = true;
		this->label32->Location = System::Drawing::Point(6, 153);
		this->label32->Name = L"label32";
		this->label32->Size = System::Drawing::Size(83, 13);
		this->label32->TabIndex = 9;
		this->label32->Text = L"Time Limit [sec]:";
		// 
		// textBox_author_text
		// 
		this->textBox_author_text->Location = System::Drawing::Point(116, 71);
		this->textBox_author_text->MaxLength = 28;
		this->textBox_author_text->Name = L"textBox_author_text";
		this->textBox_author_text->Size = System::Drawing::Size(400, 20);
		this->textBox_author_text->TabIndex = 7;
		this->textBox_author_text->Leave += gcnew System::EventHandler(this, &MainWindow::change_author_text);
		// 
		// textBox_name
		// 
		this->textBox_name->Location = System::Drawing::Point(95, 45);
		this->textBox_name->MaxLength = 28;
		this->textBox_name->Name = L"textBox_name";
		this->textBox_name->Size = System::Drawing::Size(421, 20);
		this->textBox_name->TabIndex = 5;
		this->textBox_name->Leave += gcnew System::EventHandler(this, &MainWindow::change_name);
		// 
		// label29
		// 
		this->label29->AutoSize = true;
		this->label29->Location = System::Drawing::Point(6, 48);
		this->label29->Name = L"label29";
		this->label29->Size = System::Drawing::Size(38, 13);
		this->label29->TabIndex = 4;
		this->label29->Text = L"Name:";
		// 
		// textBox_id
		// 
		this->textBox_id->Location = System::Drawing::Point(95, 19);
		this->textBox_id->Name = L"textBox_id";
		this->textBox_id->Size = System::Drawing::Size(115, 20);
		this->textBox_id->TabIndex = 1;
		this->textBox_id->Leave += gcnew System::EventHandler(this, &MainWindow::change_id);
		// 
		// label28
		// 
		this->label28->AutoSize = true;
		this->label28->Location = System::Drawing::Point(6, 22);
		this->label28->Name = L"label28";
		this->label28->Size = System::Drawing::Size(21, 13);
		this->label28->TabIndex = 0;
		this->label28->Text = L"ID:";
		// 
		// textBox_unknown_07
		// 
		this->textBox_unknown_07->Location = System::Drawing::Point(95, 449);
		this->textBox_unknown_07->Name = L"textBox_unknown_07";
		this->textBox_unknown_07->Size = System::Drawing::Size(228, 20);
		this->textBox_unknown_07->TabIndex = 25;
		this->textBox_unknown_07->Leave += gcnew System::EventHandler(this, &MainWindow::change_unknown_07);
		// 
		// label76
		// 
		this->label76->AutoSize = true;
		this->label76->Location = System::Drawing::Point(6, 452);
		this->label76->Name = L"label76";
		this->label76->Size = System::Drawing::Size(71, 13);
		this->label76->TabIndex = 24;
		this->label76->Text = L"Unknown 07:";
		// 
		// dataGridView_date_spans
		// 
		this->dataGridView_date_spans->AllowUserToAddRows = false;
		this->dataGridView_date_spans->AllowUserToDeleteRows = false;
		this->dataGridView_date_spans->BackgroundColor = System::Drawing::SystemColors::Window;
		this->dataGridView_date_spans->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
		this->dataGridView_date_spans->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
		this->dataGridView_date_spans->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(13) {this->dataGridViewTextBoxColumn1, 
			this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->Column4, this->Column5, this->Column6, this->Column7, 
			this->Column8, this->Column9, this->Column10, this->Column11, this->Column12, this->Column13});
		this->dataGridView_date_spans->ContextMenuStrip = this->contextMenuStrip_date_spans;
		this->dataGridView_date_spans->Location = System::Drawing::Point(116, 283);
		this->dataGridView_date_spans->MultiSelect = false;
		this->dataGridView_date_spans->Name = L"dataGridView_date_spans";
		this->dataGridView_date_spans->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
		dataGridViewCellStyle87->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
		dataGridViewCellStyle87->BackColor = System::Drawing::SystemColors::Control;
		dataGridViewCellStyle87->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, 
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
		dataGridViewCellStyle87->ForeColor = System::Drawing::SystemColors::WindowText;
		dataGridViewCellStyle87->SelectionBackColor = System::Drawing::SystemColors::Highlight;
		dataGridViewCellStyle87->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
		dataGridViewCellStyle87->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
		this->dataGridView_date_spans->RowHeadersDefaultCellStyle = dataGridViewCellStyle87;
		this->dataGridView_date_spans->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToFirstHeader;
		this->dataGridView_date_spans->RowTemplate->Height = 18;
		this->dataGridView_date_spans->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
		this->dataGridView_date_spans->Size = System::Drawing::Size(470, 82);
		this->dataGridView_date_spans->TabIndex = 0;
		this->dataGridView_date_spans->CellValueChanged += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MainWindow::change_date_span);
		// 
		// dataGridViewTextBoxColumn1
		// 
		this->dataGridViewTextBoxColumn1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
		dataGridViewCellStyle74->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
		this->dataGridViewTextBoxColumn1->DefaultCellStyle = dataGridViewCellStyle74;
		this->dataGridViewTextBoxColumn1->HeaderText = L"Y";
		this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
		this->dataGridViewTextBoxColumn1->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
		this->dataGridViewTextBoxColumn1->Width = 19;
		// 
		// dataGridViewTextBoxColumn2
		// 
		this->dataGridViewTextBoxColumn2->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
		dataGridViewCellStyle75->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
		this->dataGridViewTextBoxColumn2->DefaultCellStyle = dataGridViewCellStyle75;
		this->dataGridViewTextBoxColumn2->HeaderText = L"M";
		this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
		this->dataGridViewTextBoxColumn2->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
		this->dataGridViewTextBoxColumn2->Width = 21;
		// 
		// dataGridViewTextBoxColumn3
		// 
		this->dataGridViewTextBoxColumn3->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
		dataGridViewCellStyle76->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
		this->dataGridViewTextBoxColumn3->DefaultCellStyle = dataGridViewCellStyle76;
		this->dataGridViewTextBoxColumn3->HeaderText = L"D";
		this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
		this->dataGridViewTextBoxColumn3->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
		this->dataGridViewTextBoxColumn3->Width = 20;
		// 
		// Column4
		// 
		this->Column4->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
		dataGridViewCellStyle77->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
		this->Column4->DefaultCellStyle = dataGridViewCellStyle77;
		this->Column4->HeaderText = L"H";
		this->Column4->Name = L"Column4";
		this->Column4->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
		this->Column4->Width = 20;
		// 
		// Column5
		// 
		this->Column5->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
		dataGridViewCellStyle78->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
		this->Column5->DefaultCellStyle = dataGridViewCellStyle78;
		this->Column5->HeaderText = L"M";
		this->Column5->Name = L"Column5";
		this->Column5->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
		this->Column5->Width = 21;
		// 
		// Column6
		// 
		this->Column6->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
		dataGridViewCellStyle79->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
		this->Column6->DefaultCellStyle = dataGridViewCellStyle79;
		this->Column6->HeaderText = L"d";
		this->Column6->Items->AddRange(gcnew cli::array< System::Object^  >(8) {L"ALL", L"Mon", L"Tue", L"Wed", L"Thu", L"Fri", L"Sat", 
			L"Sun"});
		this->Column6->Name = L"Column6";
		this->Column6->Resizable = System::Windows::Forms::DataGridViewTriState::True;
		this->Column6->Width = 18;
		// 
		// Column7
		// 
		this->Column7->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
		dataGridViewCellStyle80->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
		dataGridViewCellStyle80->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
		this->Column7->DefaultCellStyle = dataGridViewCellStyle80;
		this->Column7->HeaderText = L"";
		this->Column7->Name = L"Column7";
		this->Column7->ReadOnly = true;
		this->Column7->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
		// 
		// Column8
		// 
		this->Column8->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
		dataGridViewCellStyle81->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
		this->Column8->DefaultCellStyle = dataGridViewCellStyle81;
		this->Column8->HeaderText = L"Y";
		this->Column8->Name = L"Column8";
		this->Column8->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
		this->Column8->Width = 19;
		// 
		// Column9
		// 
		this->Column9->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
		dataGridViewCellStyle82->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
		this->Column9->DefaultCellStyle = dataGridViewCellStyle82;
		this->Column9->HeaderText = L"M";
		this->Column9->Name = L"Column9";
		this->Column9->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
		this->Column9->Width = 21;
		// 
		// Column10
		// 
		this->Column10->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
		dataGridViewCellStyle83->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
		this->Column10->DefaultCellStyle = dataGridViewCellStyle83;
		this->Column10->HeaderText = L"D";
		this->Column10->Name = L"Column10";
		this->Column10->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
		this->Column10->Width = 20;
		// 
		// Column11
		// 
		this->Column11->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
		dataGridViewCellStyle84->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
		this->Column11->DefaultCellStyle = dataGridViewCellStyle84;
		this->Column11->HeaderText = L"H";
		this->Column11->Name = L"Column11";
		this->Column11->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
		this->Column11->Width = 20;
		// 
		// Column12
		// 
		this->Column12->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
		dataGridViewCellStyle85->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
		this->Column12->DefaultCellStyle = dataGridViewCellStyle85;
		this->Column12->HeaderText = L"M";
		this->Column12->Name = L"Column12";
		this->Column12->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
		this->Column12->Width = 21;
		// 
		// Column13
		// 
		this->Column13->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
		dataGridViewCellStyle86->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
		this->Column13->DefaultCellStyle = dataGridViewCellStyle86;
		this->Column13->HeaderText = L"d";
		this->Column13->Items->AddRange(gcnew cli::array< System::Object^  >(8) {L"ALL", L"Mon", L"Tue", L"Wed", L"Thu", L"Fri", 
			L"Sat", L"Sun"});
		this->Column13->Name = L"Column13";
		this->Column13->Resizable = System::Windows::Forms::DataGridViewTriState::True;
		this->Column13->Width = 18;
		// 
		// groupBox_required_items
		// 
		this->groupBox_required_items->Controls->Add(this->label69);
		this->groupBox_required_items->Controls->Add(this->textBox_requiredCoins);
		this->groupBox_required_items->Controls->Add(this->label39);
		this->groupBox_required_items->Controls->Add(this->textBox_requiredItemsUnknown);
		this->groupBox_required_items->Controls->Add(this->label68);
		this->groupBox_required_items->Controls->Add(this->dataGridView_requiredItems);
		this->groupBox_required_items->Location = System::Drawing::Point(314, 1617);
		this->groupBox_required_items->Name = L"groupBox_required_items";
		this->groupBox_required_items->Size = System::Drawing::Size(306, 210);
		this->groupBox_required_items->TabIndex = 1;
		this->groupBox_required_items->TabStop = false;
		this->groupBox_required_items->Text = L"REQUIRED ITEMS";
		// 
		// label69
		// 
		this->label69->AutoSize = true;
		this->label69->Location = System::Drawing::Point(3, 48);
		this->label69->Name = L"label69";
		this->label69->Size = System::Drawing::Size(103, 13);
		this->label69->TabIndex = 2;
		this->label69->Text = L"REQUIRED ITEMS:";
		// 
		// textBox_requiredCoins
		// 
		this->textBox_requiredCoins->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
		this->textBox_requiredCoins->Location = System::Drawing::Point(202, 19);
		this->textBox_requiredCoins->Name = L"textBox_requiredCoins";
		this->textBox_requiredCoins->Size = System::Drawing::Size(98, 20);
		this->textBox_requiredCoins->TabIndex = 1;
		this->textBox_requiredCoins->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
		this->textBox_requiredCoins->Leave += gcnew System::EventHandler(this, &MainWindow::change_required);
		// 
		// label39
		// 
		this->label39->AutoSize = true;
		this->label39->Location = System::Drawing::Point(3, 22);
		this->label39->Name = L"label39";
		this->label39->Size = System::Drawing::Size(56, 13);
		this->label39->TabIndex = 0;
		this->label39->Text = L"Get Coins:";
		// 
		// textBox_requiredItemsUnknown
		// 
		this->textBox_requiredItemsUnknown->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left) 
			| System::Windows::Forms::AnchorStyles::Right));
		this->textBox_requiredItemsUnknown->Location = System::Drawing::Point(137, 184);
		this->textBox_requiredItemsUnknown->Name = L"textBox_requiredItemsUnknown";
		this->textBox_requiredItemsUnknown->Size = System::Drawing::Size(300, 20);
		this->textBox_requiredItemsUnknown->TabIndex = 5;
		this->textBox_requiredItemsUnknown->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
		this->textBox_requiredItemsUnknown->Leave += gcnew System::EventHandler(this, &MainWindow::change_required);
		// 
		// label68
		// 
		this->label68->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
		this->label68->AutoSize = true;
		this->label68->Location = System::Drawing::Point(3, 187);
		this->label68->Name = L"label68";
		this->label68->Size = System::Drawing::Size(130, 13);
		this->label68->TabIndex = 4;
		this->label68->Text = L"Required Items Unknown:";
		// 
		// dataGridView_requiredItems
		// 
		this->dataGridView_requiredItems->AllowUserToAddRows = false;
		this->dataGridView_requiredItems->AllowUserToDeleteRows = false;
		this->dataGridView_requiredItems->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
			| System::Windows::Forms::AnchorStyles::Left) 
			| System::Windows::Forms::AnchorStyles::Right));
		this->dataGridView_requiredItems->BackgroundColor = System::Drawing::SystemColors::Window;
		this->dataGridView_requiredItems->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
		this->dataGridView_requiredItems->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
		this->dataGridView_requiredItems->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {this->dataGridViewTextBoxColumn4, 
			this->dataGridViewTextBoxColumn5, this->dataGridViewTextBoxColumn6, this->dataGridViewTextBoxColumn7});
		this->dataGridView_requiredItems->ContextMenuStrip = this->contextMenuStrip_date_spans;
		this->dataGridView_requiredItems->Location = System::Drawing::Point(6, 64);
		this->dataGridView_requiredItems->MultiSelect = false;
		this->dataGridView_requiredItems->Name = L"dataGridView_requiredItems";
		this->dataGridView_requiredItems->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
		dataGridViewCellStyle90->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
		dataGridViewCellStyle90->BackColor = System::Drawing::SystemColors::Control;
		dataGridViewCellStyle90->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, 
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
		dataGridViewCellStyle90->ForeColor = System::Drawing::SystemColors::WindowText;
		dataGridViewCellStyle90->SelectionBackColor = System::Drawing::SystemColors::Highlight;
		dataGridViewCellStyle90->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
		dataGridViewCellStyle90->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
		this->dataGridView_requiredItems->RowHeadersDefaultCellStyle = dataGridViewCellStyle90;
		this->dataGridView_requiredItems->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToFirstHeader;
		this->dataGridView_requiredItems->RowTemplate->Height = 18;
		this->dataGridView_requiredItems->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
		this->dataGridView_requiredItems->Size = System::Drawing::Size(300, 114);
		this->dataGridView_requiredItems->TabIndex = 3;
		this->dataGridView_requiredItems->CellValueChanged += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MainWindow::change_requiredItems);
		// 
		// dataGridViewTextBoxColumn4
		// 
		this->dataGridViewTextBoxColumn4->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
		dataGridViewCellStyle14->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
		this->dataGridViewTextBoxColumn4->DefaultCellStyle = dataGridViewCellStyle14;
		this->dataGridViewTextBoxColumn4->HeaderText = L"ID";
		this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
		this->dataGridViewTextBoxColumn4->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
		this->dataGridViewTextBoxColumn4->Width = 23;
		// 
		// dataGridViewTextBoxColumn5
		// 
		this->dataGridViewTextBoxColumn5->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
		this->dataGridViewTextBoxColumn5->HeaderText = L"\?";
		this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
		this->dataGridViewTextBoxColumn5->Resizable = System::Windows::Forms::DataGridViewTriState::True;
		this->dataGridViewTextBoxColumn5->Width = 18;
		// 
		// dataGridViewTextBoxColumn6
		// 
		this->dataGridViewTextBoxColumn6->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
		dataGridViewCellStyle88->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
		this->dataGridViewTextBoxColumn6->DefaultCellStyle = dataGridViewCellStyle88;
		this->dataGridViewTextBoxColumn6->HeaderText = L"#";
		this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
		this->dataGridViewTextBoxColumn6->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
		this->dataGridViewTextBoxColumn6->Width = 19;
		// 
		// dataGridViewTextBoxColumn7
		// 
		this->dataGridViewTextBoxColumn7->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
		dataGridViewCellStyle89->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
		this->dataGridViewTextBoxColumn7->DefaultCellStyle = dataGridViewCellStyle89;
		this->dataGridViewTextBoxColumn7->HeaderText = L"%";
		this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
		this->dataGridViewTextBoxColumn7->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
		// 
		// groupBox_team_members
		// 
		this->groupBox_team_members->Controls->Add(this->textBox_teamMembersUnknown);
		this->groupBox_team_members->Controls->Add(this->label74);
		this->groupBox_team_members->Controls->Add(this->dataGridView_team);
		this->groupBox_team_members->Location = System::Drawing::Point(14, 2051);
		this->groupBox_team_members->Name = L"groupBox_team_members";
		this->groupBox_team_members->Size = System::Drawing::Size(390, 132);
		this->groupBox_team_members->TabIndex = 2;
		this->groupBox_team_members->TabStop = false;
		this->groupBox_team_members->Text = L"TEAM MEMBERS";
		// 
		// textBox_teamMembersUnknown
		// 
		this->textBox_teamMembersUnknown->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left) 
			| System::Windows::Forms::AnchorStyles::Right));
		this->textBox_teamMembersUnknown->Location = System::Drawing::Point(140, 106);
		this->textBox_teamMembersUnknown->Name = L"textBox_teamMembersUnknown";
		this->textBox_teamMembersUnknown->Size = System::Drawing::Size(352, 20);
		this->textBox_teamMembersUnknown->TabIndex = 25;
		this->textBox_teamMembersUnknown->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
		this->textBox_teamMembersUnknown->Leave += gcnew System::EventHandler(this, &MainWindow::change_required);
		// 
		// label74
		// 
		this->label74->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
		this->label74->AutoSize = true;
		this->label74->Location = System::Drawing::Point(3, 109);
		this->label74->Name = L"label74";
		this->label74->Size = System::Drawing::Size(132, 13);
		this->label74->TabIndex = 24;
		this->label74->Text = L"Team Members Unknown:";
		this->label74->Leave += gcnew System::EventHandler(this, &MainWindow::change_required);
		// 
		// dataGridView_team
		// 
		this->dataGridView_team->AllowUserToAddRows = false;
		this->dataGridView_team->AllowUserToDeleteRows = false;
		this->dataGridView_team->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
			| System::Windows::Forms::AnchorStyles::Left) 
			| System::Windows::Forms::AnchorStyles::Right));
		this->dataGridView_team->BackgroundColor = System::Drawing::SystemColors::Window;
		this->dataGridView_team->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
		this->dataGridView_team->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
		this->dataGridView_team->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {this->dataGridViewTextBoxColumn8, 
			this->dataGridViewTextBoxColumn9, this->dataGridViewTextBoxColumn10, this->dataGridViewTextBoxColumn11, this->dataGridViewTextBoxColumn12, 
			this->dataGridViewTextBoxColumn13, this->dataGridViewTextBoxColumn14, this->dataGridViewTextBoxColumn15});
		this->dataGridView_team->ContextMenuStrip = this->contextMenuStrip_date_spans;
		this->dataGridView_team->Location = System::Drawing::Point(6, 19);
		this->dataGridView_team->MultiSelect = false;
		this->dataGridView_team->Name = L"dataGridView_team";
		this->dataGridView_team->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
		dataGridViewCellStyle98->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
		dataGridViewCellStyle98->BackColor = System::Drawing::SystemColors::Control;
		dataGridViewCellStyle98->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, 
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
		dataGridViewCellStyle98->ForeColor = System::Drawing::SystemColors::WindowText;
		dataGridViewCellStyle98->SelectionBackColor = System::Drawing::SystemColors::Highlight;
		dataGridViewCellStyle98->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
		dataGridViewCellStyle98->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
		this->dataGridView_team->RowHeadersDefaultCellStyle = dataGridViewCellStyle98;
		this->dataGridView_team->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToFirstHeader;
		this->dataGridView_team->RowTemplate->Height = 18;
		this->dataGridView_team->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
		this->dataGridView_team->Size = System::Drawing::Size(378, 81);
		this->dataGridView_team->TabIndex = 0;
		this->dataGridView_team->CellValueChanged += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MainWindow::change_team);
		// 
		// dataGridViewTextBoxColumn8
		// 
		this->dataGridViewTextBoxColumn8->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
		dataGridViewCellStyle18->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
		this->dataGridViewTextBoxColumn8->DefaultCellStyle = dataGridViewCellStyle18;
		this->dataGridViewTextBoxColumn8->HeaderText = L"Min. LvL";
		this->dataGridViewTextBoxColumn8->Name = L"dataGridViewTextBoxColumn8";
		this->dataGridViewTextBoxColumn8->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
		this->dataGridViewTextBoxColumn8->Width = 53;
		// 
		// dataGridViewTextBoxColumn9
		// 
		this->dataGridViewTextBoxColumn9->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
		dataGridViewCellStyle91->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
		this->dataGridViewTextBoxColumn9->DefaultCellStyle = dataGridViewCellStyle91;
		this->dataGridViewTextBoxColumn9->HeaderText = L"Max. LvL";
		this->dataGridViewTextBoxColumn9->Name = L"dataGridViewTextBoxColumn9";
		this->dataGridViewTextBoxColumn9->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
		this->dataGridViewTextBoxColumn9->Width = 56;
		// 
		// dataGridViewTextBoxColumn10
		// 
		this->dataGridViewTextBoxColumn10->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
		dataGridViewCellStyle92->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
		this->dataGridViewTextBoxColumn10->DefaultCellStyle = dataGridViewCellStyle92;
		this->dataGridViewTextBoxColumn10->HeaderText = L"\?";
		this->dataGridViewTextBoxColumn10->Name = L"dataGridViewTextBoxColumn10";
		this->dataGridViewTextBoxColumn10->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
		this->dataGridViewTextBoxColumn10->Width = 18;
		// 
		// dataGridViewTextBoxColumn11
		// 
		this->dataGridViewTextBoxColumn11->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
		dataGridViewCellStyle93->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
		this->dataGridViewTextBoxColumn11->DefaultCellStyle = dataGridViewCellStyle93;
		this->dataGridViewTextBoxColumn11->HeaderText = L"\?";
		this->dataGridViewTextBoxColumn11->Name = L"dataGridViewTextBoxColumn11";
		this->dataGridViewTextBoxColumn11->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
		this->dataGridViewTextBoxColumn11->Width = 18;
		// 
		// dataGridViewTextBoxColumn12
		// 
		this->dataGridViewTextBoxColumn12->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
		dataGridViewCellStyle94->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
		this->dataGridViewTextBoxColumn12->DefaultCellStyle = dataGridViewCellStyle94;
		this->dataGridViewTextBoxColumn12->HeaderText = L"\?";
		this->dataGridViewTextBoxColumn12->Name = L"dataGridViewTextBoxColumn12";
		this->dataGridViewTextBoxColumn12->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
		this->dataGridViewTextBoxColumn12->Width = 18;
		// 
		// dataGridViewTextBoxColumn13
		// 
		this->dataGridViewTextBoxColumn13->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
		dataGridViewCellStyle95->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
		this->dataGridViewTextBoxColumn13->DefaultCellStyle = dataGridViewCellStyle95;
		this->dataGridViewTextBoxColumn13->HeaderText = L"Min. #";
		this->dataGridViewTextBoxColumn13->Name = L"dataGridViewTextBoxColumn13";
		this->dataGridViewTextBoxColumn13->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
		this->dataGridViewTextBoxColumn13->Width = 42;
		// 
		// dataGridViewTextBoxColumn14
		// 
		this->dataGridViewTextBoxColumn14->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
		dataGridViewCellStyle96->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
		this->dataGridViewTextBoxColumn14->DefaultCellStyle = dataGridViewCellStyle96;
		this->dataGridViewTextBoxColumn14->HeaderText = L"Max. #";
		this->dataGridViewTextBoxColumn14->Name = L"dataGridViewTextBoxColumn14";
		this->dataGridViewTextBoxColumn14->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
		this->dataGridViewTextBoxColumn14->Width = 45;
		// 
		// dataGridViewTextBoxColumn15
		// 
		this->dataGridViewTextBoxColumn15->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
		dataGridViewCellStyle97->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
		this->dataGridViewTextBoxColumn15->DefaultCellStyle = dataGridViewCellStyle97;
		this->dataGridViewTextBoxColumn15->HeaderText = L"Quest";
		this->dataGridViewTextBoxColumn15->Name = L"dataGridViewTextBoxColumn15";
		this->dataGridViewTextBoxColumn15->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
		// 
		// dataGridView_rewardItems
		// 
		this->dataGridView_rewardItems->AllowUserToAddRows = false;
		this->dataGridView_rewardItems->AllowUserToDeleteRows = false;
		this->dataGridView_rewardItems->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
			| System::Windows::Forms::AnchorStyles::Left) 
			| System::Windows::Forms::AnchorStyles::Right));
		this->dataGridView_rewardItems->BackgroundColor = System::Drawing::SystemColors::Window;
		this->dataGridView_rewardItems->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
		this->dataGridView_rewardItems->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
		this->dataGridView_rewardItems->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {this->Column_rewardGroups, 
			this->dataGridViewTextBoxColumn28, this->dataGridViewTextBoxColumn29, this->dataGridViewTextBoxColumn30, this->dataGridViewTextBoxColumn31});
		this->dataGridView_rewardItems->ContextMenuStrip = this->contextMenuStrip_date_spans;
		this->dataGridView_rewardItems->Location = System::Drawing::Point(86, 451);
		this->dataGridView_rewardItems->MultiSelect = false;
		this->dataGridView_rewardItems->Name = L"dataGridView_rewardItems";
		this->dataGridView_rewardItems->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
		dataGridViewCellStyle102->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
		dataGridViewCellStyle102->BackColor = System::Drawing::SystemColors::Control;
		dataGridViewCellStyle102->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, 
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
		dataGridViewCellStyle102->ForeColor = System::Drawing::SystemColors::WindowText;
		dataGridViewCellStyle102->SelectionBackColor = System::Drawing::SystemColors::Highlight;
		dataGridViewCellStyle102->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
		dataGridViewCellStyle102->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
		this->dataGridView_rewardItems->RowHeadersDefaultCellStyle = dataGridViewCellStyle102;
		this->dataGridView_rewardItems->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToFirstHeader;
		this->dataGridView_rewardItems->RowTemplate->Height = 18;
		this->dataGridView_rewardItems->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
		this->dataGridView_rewardItems->Size = System::Drawing::Size(311, 103);
		this->dataGridView_rewardItems->TabIndex = 38;
		this->dataGridView_rewardItems->CellValueChanged += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MainWindow::change_rewardItems);
		// 
		// Column_rewardGroups
		// 
		this->Column_rewardGroups->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
		dataGridViewCellStyle27->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
		this->Column_rewardGroups->DefaultCellStyle = dataGridViewCellStyle27;
		this->Column_rewardGroups->DisplayStyle = System::Windows::Forms::DataGridViewComboBoxDisplayStyle::ComboBox;
		this->Column_rewardGroups->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->Column_rewardGroups->HeaderText = L"Group";
		this->Column_rewardGroups->Name = L"Column_rewardGroups";
		this->Column_rewardGroups->Width = 41;
		// 
		// dataGridViewTextBoxColumn28
		// 
		this->dataGridViewTextBoxColumn28->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
		dataGridViewCellStyle99->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
		this->dataGridViewTextBoxColumn28->DefaultCellStyle = dataGridViewCellStyle99;
		this->dataGridViewTextBoxColumn28->HeaderText = L"ID";
		this->dataGridViewTextBoxColumn28->Name = L"dataGridViewTextBoxColumn28";
		this->dataGridViewTextBoxColumn28->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
		this->dataGridViewTextBoxColumn28->Width = 23;
		// 
		// dataGridViewTextBoxColumn29
		// 
		this->dataGridViewTextBoxColumn29->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
		this->dataGridViewTextBoxColumn29->HeaderText = L"\?";
		this->dataGridViewTextBoxColumn29->Name = L"dataGridViewTextBoxColumn29";
		this->dataGridViewTextBoxColumn29->Resizable = System::Windows::Forms::DataGridViewTriState::True;
		this->dataGridViewTextBoxColumn29->Width = 18;
		// 
		// dataGridViewTextBoxColumn30
		// 
		this->dataGridViewTextBoxColumn30->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
		dataGridViewCellStyle100->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
		this->dataGridViewTextBoxColumn30->DefaultCellStyle = dataGridViewCellStyle100;
		this->dataGridViewTextBoxColumn30->HeaderText = L"#";
		this->dataGridViewTextBoxColumn30->Name = L"dataGridViewTextBoxColumn30";
		this->dataGridViewTextBoxColumn30->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
		this->dataGridViewTextBoxColumn30->Width = 19;
		// 
		// dataGridViewTextBoxColumn31
		// 
		this->dataGridViewTextBoxColumn31->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
		dataGridViewCellStyle101->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
		this->dataGridViewTextBoxColumn31->DefaultCellStyle = dataGridViewCellStyle101;
		this->dataGridViewTextBoxColumn31->HeaderText = L"%";
		this->dataGridViewTextBoxColumn31->Name = L"dataGridViewTextBoxColumn31";
		this->dataGridViewTextBoxColumn31->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
		// 
		// groupBox_given_items
		// 
		this->groupBox_given_items->Controls->Add(this->textBox_givenItemsUnknown);
		this->groupBox_given_items->Controls->Add(this->label75);
		this->groupBox_given_items->Controls->Add(this->dataGridView_givenItems);
		this->groupBox_given_items->Location = System::Drawing::Point(14, 2588);
		this->groupBox_given_items->Name = L"groupBox_given_items";
		this->groupBox_given_items->Size = System::Drawing::Size(180, 169);
		this->groupBox_given_items->TabIndex = 1;
		this->groupBox_given_items->TabStop = false;
		this->groupBox_given_items->Text = L"GIVEN ITEMS";
		// 
		// textBox_givenItemsUnknown
		// 
		this->textBox_givenItemsUnknown->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left) 
			| System::Windows::Forms::AnchorStyles::Right));
		this->textBox_givenItemsUnknown->Location = System::Drawing::Point(125, 143);
		this->textBox_givenItemsUnknown->Name = L"textBox_givenItemsUnknown";
		this->textBox_givenItemsUnknown->Size = System::Drawing::Size(174, 20);
		this->textBox_givenItemsUnknown->TabIndex = 21;
		this->textBox_givenItemsUnknown->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
		this->textBox_givenItemsUnknown->Leave += gcnew System::EventHandler(this, &MainWindow::change_given);
		// 
		// label75
		// 
		this->label75->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
		this->label75->AutoSize = true;
		this->label75->Location = System::Drawing::Point(4, 146);
		this->label75->Name = L"label75";
		this->label75->Size = System::Drawing::Size(115, 13);
		this->label75->TabIndex = 20;
		this->label75->Text = L"Given Items Unknown:";
		// 
		// dataGridView_givenItems
		// 
		this->dataGridView_givenItems->AllowUserToAddRows = false;
		this->dataGridView_givenItems->AllowUserToDeleteRows = false;
		this->dataGridView_givenItems->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
			| System::Windows::Forms::AnchorStyles::Left) 
			| System::Windows::Forms::AnchorStyles::Right));
		this->dataGridView_givenItems->BackgroundColor = System::Drawing::SystemColors::Window;
		this->dataGridView_givenItems->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
		this->dataGridView_givenItems->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
		this->dataGridView_givenItems->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {this->dataGridViewTextBoxColumn24, 
			this->dataGridViewTextBoxColumn25, this->dataGridViewTextBoxColumn26, this->dataGridViewTextBoxColumn27});
		this->dataGridView_givenItems->ContextMenuStrip = this->contextMenuStrip_date_spans;
		this->dataGridView_givenItems->Location = System::Drawing::Point(6, 19);
		this->dataGridView_givenItems->MultiSelect = false;
		this->dataGridView_givenItems->Name = L"dataGridView_givenItems";
		this->dataGridView_givenItems->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
		dataGridViewCellStyle105->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
		dataGridViewCellStyle105->BackColor = System::Drawing::SystemColors::Control;
		dataGridViewCellStyle105->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, 
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
		dataGridViewCellStyle105->ForeColor = System::Drawing::SystemColors::WindowText;
		dataGridViewCellStyle105->SelectionBackColor = System::Drawing::SystemColors::Highlight;
		dataGridViewCellStyle105->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
		dataGridViewCellStyle105->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
		this->dataGridView_givenItems->RowHeadersDefaultCellStyle = dataGridViewCellStyle105;
		this->dataGridView_givenItems->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToFirstHeader;
		this->dataGridView_givenItems->RowTemplate->Height = 18;
		this->dataGridView_givenItems->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
		this->dataGridView_givenItems->Size = System::Drawing::Size(174, 116);
		this->dataGridView_givenItems->TabIndex = 0;
		this->dataGridView_givenItems->CellValueChanged += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MainWindow::change_givenItems);
		// 
		// dataGridViewTextBoxColumn24
		// 
		this->dataGridViewTextBoxColumn24->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
		dataGridViewCellStyle32->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
		this->dataGridViewTextBoxColumn24->DefaultCellStyle = dataGridViewCellStyle32;
		this->dataGridViewTextBoxColumn24->HeaderText = L"ID";
		this->dataGridViewTextBoxColumn24->Name = L"dataGridViewTextBoxColumn24";
		this->dataGridViewTextBoxColumn24->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
		this->dataGridViewTextBoxColumn24->Width = 23;
		// 
		// dataGridViewTextBoxColumn25
		// 
		this->dataGridViewTextBoxColumn25->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
		this->dataGridViewTextBoxColumn25->HeaderText = L"\?";
		this->dataGridViewTextBoxColumn25->Name = L"dataGridViewTextBoxColumn25";
		this->dataGridViewTextBoxColumn25->Resizable = System::Windows::Forms::DataGridViewTriState::True;
		this->dataGridViewTextBoxColumn25->Width = 18;
		// 
		// dataGridViewTextBoxColumn26
		// 
		this->dataGridViewTextBoxColumn26->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
		dataGridViewCellStyle103->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
		this->dataGridViewTextBoxColumn26->DefaultCellStyle = dataGridViewCellStyle103;
		this->dataGridViewTextBoxColumn26->HeaderText = L"#";
		this->dataGridViewTextBoxColumn26->Name = L"dataGridViewTextBoxColumn26";
		this->dataGridViewTextBoxColumn26->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
		this->dataGridViewTextBoxColumn26->Width = 19;
		// 
		// dataGridViewTextBoxColumn27
		// 
		this->dataGridViewTextBoxColumn27->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
		dataGridViewCellStyle104->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
		this->dataGridViewTextBoxColumn27->DefaultCellStyle = dataGridViewCellStyle104;
		this->dataGridViewTextBoxColumn27->HeaderText = L"%";
		this->dataGridViewTextBoxColumn27->Name = L"dataGridViewTextBoxColumn27";
		this->dataGridViewTextBoxColumn27->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
		// 
		// groupBox_reward_groups
		// 
		this->groupBox_reward_groups->Controls->Add(this->numericUpDown_timeFactor);
		this->groupBox_reward_groups->Controls->Add(this->label3);
		this->groupBox_reward_groups->Controls->Add(this->radioButton_timed);
		this->groupBox_reward_groups->Controls->Add(this->radioButton_failed);
		this->groupBox_reward_groups->Controls->Add(this->radioButton_success);
		this->groupBox_reward_groups->Controls->Add(this->listBox_rewardTimed);
		this->groupBox_reward_groups->Location = System::Drawing::Point(14, 2197);
		this->groupBox_reward_groups->Name = L"groupBox_reward_groups";
		this->groupBox_reward_groups->Size = System::Drawing::Size(165, 383);
		this->groupBox_reward_groups->TabIndex = 0;
		this->groupBox_reward_groups->TabStop = false;
		this->groupBox_reward_groups->Text = L"REWARD GROUPS";
		// 
		// numericUpDown_timeFactor
		// 
		this->numericUpDown_timeFactor->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
		this->numericUpDown_timeFactor->DecimalPlaces = 3;
		this->numericUpDown_timeFactor->Enabled = false;
		this->numericUpDown_timeFactor->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 131072});
		this->numericUpDown_timeFactor->Location = System::Drawing::Point(89, 355);
		this->numericUpDown_timeFactor->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
		this->numericUpDown_timeFactor->Name = L"numericUpDown_timeFactor";
		this->numericUpDown_timeFactor->Size = System::Drawing::Size(70, 20);
		this->numericUpDown_timeFactor->TabIndex = 5;
		this->numericUpDown_timeFactor->ValueChanged += gcnew System::EventHandler(this, &MainWindow::change_timeFactor);
		// 
		// label3
		// 
		this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
		this->label3->AutoSize = true;
		this->label3->Location = System::Drawing::Point(3, 359);
		this->label3->Name = L"label3";
		this->label3->Size = System::Drawing::Size(66, 13);
		this->label3->TabIndex = 4;
		this->label3->Text = L"Time Factor:";
		// 
		// radioButton_timed
		// 
		this->radioButton_timed->AutoSize = true;
		this->radioButton_timed->Location = System::Drawing::Point(6, 64);
		this->radioButton_timed->Name = L"radioButton_timed";
		this->radioButton_timed->Size = System::Drawing::Size(81, 17);
		this->radioButton_timed->TabIndex = 2;
		this->radioButton_timed->Text = L"Time Based";
		this->radioButton_timed->UseVisualStyleBackColor = true;
		this->radioButton_timed->CheckedChanged += gcnew System::EventHandler(this, &MainWindow::select_Reward);
		// 
		// radioButton_failed
		// 
		this->radioButton_failed->AutoSize = true;
		this->radioButton_failed->Location = System::Drawing::Point(6, 41);
		this->radioButton_failed->Name = L"radioButton_failed";
		this->radioButton_failed->Size = System::Drawing::Size(53, 17);
		this->radioButton_failed->TabIndex = 1;
		this->radioButton_failed->Text = L"Failed";
		this->radioButton_failed->UseVisualStyleBackColor = true;
		this->radioButton_failed->CheckedChanged += gcnew System::EventHandler(this, &MainWindow::select_Reward);
		// 
		// radioButton_success
		// 
		this->radioButton_success->AutoSize = true;
		this->radioButton_success->Checked = true;
		this->radioButton_success->Location = System::Drawing::Point(6, 18);
		this->radioButton_success->Name = L"radioButton_success";
		this->radioButton_success->Size = System::Drawing::Size(66, 17);
		this->radioButton_success->TabIndex = 0;
		this->radioButton_success->TabStop = true;
		this->radioButton_success->Text = L"Success";
		this->radioButton_success->UseVisualStyleBackColor = true;
		this->radioButton_success->CheckedChanged += gcnew System::EventHandler(this, &MainWindow::select_Reward);
		// 
		// listBox_rewardTimed
		// 
		this->listBox_rewardTimed->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
			| System::Windows::Forms::AnchorStyles::Left) 
			| System::Windows::Forms::AnchorStyles::Right));
		this->listBox_rewardTimed->ContextMenuStrip = this->contextMenuStrip_date_spans;
		this->listBox_rewardTimed->Enabled = false;
		this->listBox_rewardTimed->FormattingEnabled = true;
		this->listBox_rewardTimed->Location = System::Drawing::Point(6, 87);
		this->listBox_rewardTimed->Name = L"listBox_rewardTimed";
		this->listBox_rewardTimed->Size = System::Drawing::Size(147, 251);
		this->listBox_rewardTimed->TabIndex = 3;
		this->listBox_rewardTimed->SelectedIndexChanged += gcnew System::EventHandler(this, &MainWindow::select_Reward);
		// 
		// groupBox_reward
		// 
		this->groupBox_reward->Controls->Add(this->label63);
		this->groupBox_reward->Controls->Add(this->textBox_rewardAITrigger);
		this->groupBox_reward->Controls->Add(this->textBox_rewardSeperator);
		this->groupBox_reward->Controls->Add(this->label61);
		this->groupBox_reward->Controls->Add(this->textBox_rewardUnknown2);
		this->groupBox_reward->Controls->Add(this->label60);
		this->groupBox_reward->Controls->Add(this->textBox_rewardUnknown1);
		this->groupBox_reward->Controls->Add(this->label59);
		this->groupBox_reward->Controls->Add(this->label57);
		this->groupBox_reward->Controls->Add(this->checkedListBox_rewardGroupFlags);
		this->groupBox_reward->Controls->Add(this->numericUpDown_rewardGroups);
		this->groupBox_reward->Controls->Add(this->label56);
		this->groupBox_reward->Controls->Add(this->label37);
		this->groupBox_reward->Controls->Add(this->textBox_rewardTeleportMap);
		this->groupBox_reward->Controls->Add(this->textBox_rewardTeleportZ);
		this->groupBox_reward->Controls->Add(this->textBox_rewardTeleportX);
		this->groupBox_reward->Controls->Add(this->textBox_rewardTeleportAltitude);
		this->groupBox_reward->Controls->Add(this->label26);
		this->groupBox_reward->Controls->Add(this->textBox_rewardPetbag);
		this->groupBox_reward->Controls->Add(this->label23);
		this->groupBox_reward->Controls->Add(this->textBox_rewardInventory);
		this->groupBox_reward->Controls->Add(this->label24);
		this->groupBox_reward->Controls->Add(this->textBox_rewardStorage);
		this->groupBox_reward->Controls->Add(this->label25);
		this->groupBox_reward->Controls->Add(this->dataGridView_rewardItems);
		this->groupBox_reward->Controls->Add(this->textBox_rewardNewQuest);
		this->groupBox_reward->Controls->Add(this->label22);
		this->groupBox_reward->Controls->Add(this->textBox_rewardVigor);
		this->groupBox_reward->Controls->Add(this->label21);
		this->groupBox_reward->Controls->Add(this->textBox_rewardCulti);
		this->groupBox_reward->Controls->Add(this->label20);
		this->groupBox_reward->Controls->Add(this->textBox_rewardREP);
		this->groupBox_reward->Controls->Add(this->label19);
		this->groupBox_reward->Controls->Add(this->textBox_rewardSP);
		this->groupBox_reward->Controls->Add(this->label18);
		this->groupBox_reward->Controls->Add(this->textBox_rewardEXP);
		this->groupBox_reward->Controls->Add(this->label17);
		this->groupBox_reward->Controls->Add(this->textBox_rewardCoins);
		this->groupBox_reward->Controls->Add(this->label16);
		this->groupBox_reward->Location = System::Drawing::Point(204, 2197);
		this->groupBox_reward->Name = L"groupBox_reward";
		this->groupBox_reward->Size = System::Drawing::Size(317, 560);
		this->groupBox_reward->TabIndex = 2;
		this->groupBox_reward->TabStop = false;
		this->groupBox_reward->Text = L"REWARD";
		// 
		// label63
		// 
		this->label63->AutoSize = true;
		this->label63->Location = System::Drawing::Point(3, 308);
		this->label63->Name = L"label63";
		this->label63->Size = System::Drawing::Size(85, 13);
		this->label63->TabIndex = 22;
		this->label63->Text = L"Creature Builder:";
		// 
		// textBox_rewardAITrigger
		// 
		this->textBox_rewardAITrigger->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
		this->textBox_rewardAITrigger->Location = System::Drawing::Point(118, 305);
		this->textBox_rewardAITrigger->Name = L"textBox_rewardAITrigger";
		this->textBox_rewardAITrigger->Size = System::Drawing::Size(193, 20);
		this->textBox_rewardAITrigger->TabIndex = 23;
		this->textBox_rewardAITrigger->Leave += gcnew System::EventHandler(this, &MainWindow::change_reward);
		// 
		// textBox_rewardSeperator
		// 
		this->textBox_rewardSeperator->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
		this->textBox_rewardSeperator->Location = System::Drawing::Point(118, 357);
		this->textBox_rewardSeperator->Name = L"textBox_rewardSeperator";
		this->textBox_rewardSeperator->Size = System::Drawing::Size(193, 20);
		this->textBox_rewardSeperator->TabIndex = 27;
		this->textBox_rewardSeperator->Leave += gcnew System::EventHandler(this, &MainWindow::change_reward);
		// 
		// label61
		// 
		this->label61->AutoSize = true;
		this->label61->Location = System::Drawing::Point(3, 360);
		this->label61->Name = L"label61";
		this->label61->Size = System::Drawing::Size(80, 13);
		this->label61->TabIndex = 26;
		this->label61->Text = L"UNKNOWN_3:";
		// 
		// textBox_rewardUnknown2
		// 
		this->textBox_rewardUnknown2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
		this->textBox_rewardUnknown2->Location = System::Drawing::Point(118, 331);
		this->textBox_rewardUnknown2->Name = L"textBox_rewardUnknown2";
		this->textBox_rewardUnknown2->Size = System::Drawing::Size(193, 20);
		this->textBox_rewardUnknown2->TabIndex = 25;
		this->textBox_rewardUnknown2->Leave += gcnew System::EventHandler(this, &MainWindow::change_reward);
		// 
		// label60
		// 
		this->label60->AutoSize = true;
		this->label60->Location = System::Drawing::Point(3, 334);
		this->label60->Name = L"label60";
		this->label60->Size = System::Drawing::Size(80, 13);
		this->label60->TabIndex = 24;
		this->label60->Text = L"UNKNOWN_2:";
		// 
		// textBox_rewardUnknown1
		// 
		this->textBox_rewardUnknown1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
		this->textBox_rewardUnknown1->Location = System::Drawing::Point(118, 123);
		this->textBox_rewardUnknown1->Name = L"textBox_rewardUnknown1";
		this->textBox_rewardUnknown1->Size = System::Drawing::Size(193, 20);
		this->textBox_rewardUnknown1->TabIndex = 9;
		this->textBox_rewardUnknown1->Leave += gcnew System::EventHandler(this, &MainWindow::change_reward);
		// 
		// label59
		// 
		this->label59->AutoSize = true;
		this->label59->Location = System::Drawing::Point(3, 126);
		this->label59->Name = L"label59";
		this->label59->Size = System::Drawing::Size(75, 13);
		this->label59->TabIndex = 8;
		this->label59->Text = L"Waypoint (ID):";
		// 
		// label57
		// 
		this->label57->AutoSize = true;
		this->label57->Location = System::Drawing::Point(3, 474);
		this->label57->Name = L"label57";
		this->label57->Size = System::Drawing::Size(67, 13);
		this->label57->TabIndex = 35;
		this->label57->Text = L"Group Flags:";
		// 
		// checkedListBox_rewardGroupFlags
		// 
		this->checkedListBox_rewardGroupFlags->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
			| System::Windows::Forms::AnchorStyles::Left));
		this->checkedListBox_rewardGroupFlags->FormattingEnabled = true;
		this->checkedListBox_rewardGroupFlags->Location = System::Drawing::Point(6, 490);
		this->checkedListBox_rewardGroupFlags->Name = L"checkedListBox_rewardGroupFlags";
		this->checkedListBox_rewardGroupFlags->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
		this->checkedListBox_rewardGroupFlags->Size = System::Drawing::Size(74, 64);
		this->checkedListBox_rewardGroupFlags->TabIndex = 36;
		this->checkedListBox_rewardGroupFlags->ItemCheck += gcnew System::Windows::Forms::ItemCheckEventHandler(this, &MainWindow::change_rewardGroupFlags);
		// 
		// numericUpDown_rewardGroups
		// 
		this->numericUpDown_rewardGroups->Location = System::Drawing::Point(6, 451);
		this->numericUpDown_rewardGroups->Name = L"numericUpDown_rewardGroups";
		this->numericUpDown_rewardGroups->Size = System::Drawing::Size(74, 20);
		this->numericUpDown_rewardGroups->TabIndex = 34;
		this->numericUpDown_rewardGroups->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
		this->numericUpDown_rewardGroups->ValueChanged += gcnew System::EventHandler(this, &MainWindow::change_rewardGroupCount);
		// 
		// label56
		// 
		this->label56->AutoSize = true;
		this->label56->Location = System::Drawing::Point(3, 435);
		this->label56->Name = L"label56";
		this->label56->Size = System::Drawing::Size(67, 13);
		this->label56->TabIndex = 33;
		this->label56->Text = L"Item Groups:";
		// 
		// label37
		// 
		this->label37->AutoSize = true;
		this->label37->Location = System::Drawing::Point(83, 435);
		this->label37->Name = L"label37";
		this->label37->Size = System::Drawing::Size(35, 13);
		this->label37->TabIndex = 37;
		this->label37->Text = L"Items:";
		// 
		// textBox_rewardTeleportMap
		// 
		this->textBox_rewardTeleportMap->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
			| System::Windows::Forms::AnchorStyles::Right));
		this->textBox_rewardTeleportMap->Location = System::Drawing::Point(6, 405);
		this->textBox_rewardTeleportMap->Name = L"textBox_rewardTeleportMap";
		this->textBox_rewardTeleportMap->Size = System::Drawing::Size(311, 20);
		this->textBox_rewardTeleportMap->TabIndex = 29;
		this->textBox_rewardTeleportMap->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
		this->textBox_rewardTeleportMap->Leave += gcnew System::EventHandler(this, &MainWindow::change_reward);
		// 
		// textBox_rewardTeleportZ
		// 
		this->textBox_rewardTeleportZ->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
		this->textBox_rewardTeleportZ->Location = System::Drawing::Point(251, 405);
		this->textBox_rewardTeleportZ->Name = L"textBox_rewardTeleportZ";
		this->textBox_rewardTeleportZ->Size = System::Drawing::Size(60, 20);
		this->textBox_rewardTeleportZ->TabIndex = 32;
		this->textBox_rewardTeleportZ->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
		this->textBox_rewardTeleportZ->Leave += gcnew System::EventHandler(this, &MainWindow::change_reward);
		// 
		// textBox_rewardTeleportX
		// 
		this->textBox_rewardTeleportX->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
		this->textBox_rewardTeleportX->Location = System::Drawing::Point(119, 405);
		this->textBox_rewardTeleportX->Name = L"textBox_rewardTeleportX";
		this->textBox_rewardTeleportX->Size = System::Drawing::Size(60, 20);
		this->textBox_rewardTeleportX->TabIndex = 30;
		this->textBox_rewardTeleportX->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
		this->textBox_rewardTeleportX->Leave += gcnew System::EventHandler(this, &MainWindow::change_reward);
		// 
		// textBox_rewardTeleportAltitude
		// 
		this->textBox_rewardTeleportAltitude->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
		this->textBox_rewardTeleportAltitude->Location = System::Drawing::Point(185, 405);
		this->textBox_rewardTeleportAltitude->Name = L"textBox_rewardTeleportAltitude";
		this->textBox_rewardTeleportAltitude->Size = System::Drawing::Size(60, 20);
		this->textBox_rewardTeleportAltitude->TabIndex = 31;
		this->textBox_rewardTeleportAltitude->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
		this->textBox_rewardTeleportAltitude->Leave += gcnew System::EventHandler(this, &MainWindow::change_reward);
		// 
		// label26
		// 
		this->label26->AutoSize = true;
		this->label26->Location = System::Drawing::Point(3, 389);
		this->label26->Name = L"label26";
		this->label26->Size = System::Drawing::Size(160, 13);
		this->label26->TabIndex = 28;
		this->label26->Text = L"Teleport (Map ID, X, Altitude, Z):";
		// 
		// textBox_rewardPetbag
		// 
		this->textBox_rewardPetbag->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
		this->textBox_rewardPetbag->Location = System::Drawing::Point(118, 253);
		this->textBox_rewardPetbag->Name = L"textBox_rewardPetbag";
		this->textBox_rewardPetbag->Size = System::Drawing::Size(193, 20);
		this->textBox_rewardPetbag->TabIndex = 19;
		this->textBox_rewardPetbag->Leave += gcnew System::EventHandler(this, &MainWindow::change_reward);
		// 
		// label23
		// 
		this->label23->AutoSize = true;
		this->label23->Location = System::Drawing::Point(3, 256);
		this->label23->Name = L"label23";
		this->label23->Size = System::Drawing::Size(70, 13);
		this->label23->TabIndex = 18;
		this->label23->Text = L"Petbag Slots:";
		// 
		// textBox_rewardInventory
		// 
		this->textBox_rewardInventory->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
		this->textBox_rewardInventory->Location = System::Drawing::Point(118, 227);
		this->textBox_rewardInventory->Name = L"textBox_rewardInventory";
		this->textBox_rewardInventory->Size = System::Drawing::Size(193, 20);
		this->textBox_rewardInventory->TabIndex = 17;
		this->textBox_rewardInventory->Leave += gcnew System::EventHandler(this, &MainWindow::change_reward);
		// 
		// label24
		// 
		this->label24->AutoSize = true;
		this->label24->Location = System::Drawing::Point(3, 230);
		this->label24->Name = L"label24";
		this->label24->Size = System::Drawing::Size(80, 13);
		this->label24->TabIndex = 16;
		this->label24->Text = L"Inventory Slots:";
		// 
		// textBox_rewardStorage
		// 
		this->textBox_rewardStorage->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
		this->textBox_rewardStorage->Location = System::Drawing::Point(118, 201);
		this->textBox_rewardStorage->Name = L"textBox_rewardStorage";
		this->textBox_rewardStorage->Size = System::Drawing::Size(193, 20);
		this->textBox_rewardStorage->TabIndex = 15;
		this->textBox_rewardStorage->Leave += gcnew System::EventHandler(this, &MainWindow::change_reward);
		// 
		// label25
		// 
		this->label25->AutoSize = true;
		this->label25->Location = System::Drawing::Point(3, 204);
		this->label25->Name = L"label25";
		this->label25->Size = System::Drawing::Size(73, 13);
		this->label25->TabIndex = 14;
		this->label25->Text = L"Storage Slots:";
		// 
		// textBox_rewardNewQuest
		// 
		this->textBox_rewardNewQuest->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
		this->textBox_rewardNewQuest->Location = System::Drawing::Point(118, 279);
		this->textBox_rewardNewQuest->Name = L"textBox_rewardNewQuest";
		this->textBox_rewardNewQuest->Size = System::Drawing::Size(193, 20);
		this->textBox_rewardNewQuest->TabIndex = 21;
		this->textBox_rewardNewQuest->Leave += gcnew System::EventHandler(this, &MainWindow::change_reward);
		// 
		// label22
		// 
		this->label22->AutoSize = true;
		this->label22->Location = System::Drawing::Point(3, 282);
		this->label22->Name = L"label22";
		this->label22->Size = System::Drawing::Size(109, 13);
		this->label22->TabIndex = 20;
		this->label22->Text = L"New Quest Available:";
		// 
		// textBox_rewardVigor
		// 
		this->textBox_rewardVigor->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
		this->textBox_rewardVigor->Location = System::Drawing::Point(118, 175);
		this->textBox_rewardVigor->Name = L"textBox_rewardVigor";
		this->textBox_rewardVigor->Size = System::Drawing::Size(193, 20);
		this->textBox_rewardVigor->TabIndex = 13;
		this->textBox_rewardVigor->Leave += gcnew System::EventHandler(this, &MainWindow::change_reward);
		// 
		// label21
		// 
		this->label21->AutoSize = true;
		this->label21->Location = System::Drawing::Point(3, 178);
		this->label21->Name = L"label21";
		this->label21->Size = System::Drawing::Size(34, 13);
		this->label21->TabIndex = 12;
		this->label21->Text = L"Vigor:";
		// 
		// textBox_rewardCulti
		// 
		this->textBox_rewardCulti->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
		this->textBox_rewardCulti->Location = System::Drawing::Point(118, 149);
		this->textBox_rewardCulti->Name = L"textBox_rewardCulti";
		this->textBox_rewardCulti->Size = System::Drawing::Size(193, 20);
		this->textBox_rewardCulti->TabIndex = 11;
		this->textBox_rewardCulti->Leave += gcnew System::EventHandler(this, &MainWindow::change_reward);
		// 
		// label20
		// 
		this->label20->AutoSize = true;
		this->label20->Location = System::Drawing::Point(3, 152);
		this->label20->Name = L"label20";
		this->label20->Size = System::Drawing::Size(88, 13);
		this->label20->TabIndex = 10;
		this->label20->Text = L"Cultivation Level:";
		// 
		// textBox_rewardREP
		// 
		this->textBox_rewardREP->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
		this->textBox_rewardREP->Location = System::Drawing::Point(118, 97);
		this->textBox_rewardREP->Name = L"textBox_rewardREP";
		this->textBox_rewardREP->Size = System::Drawing::Size(193, 20);
		this->textBox_rewardREP->TabIndex = 7;
		this->textBox_rewardREP->Leave += gcnew System::EventHandler(this, &MainWindow::change_reward);
		// 
		// label19
		// 
		this->label19->AutoSize = true;
		this->label19->Location = System::Drawing::Point(3, 100);
		this->label19->Name = L"label19";
		this->label19->Size = System::Drawing::Size(62, 13);
		this->label19->TabIndex = 6;
		this->label19->Text = L"Reputation:";
		// 
		// textBox_rewardSP
		// 
		this->textBox_rewardSP->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
		this->textBox_rewardSP->Location = System::Drawing::Point(118, 71);
		this->textBox_rewardSP->Name = L"textBox_rewardSP";
		this->textBox_rewardSP->Size = System::Drawing::Size(193, 20);
		this->textBox_rewardSP->TabIndex = 5;
		this->textBox_rewardSP->Leave += gcnew System::EventHandler(this, &MainWindow::change_reward);
		// 
		// label18
		// 
		this->label18->AutoSize = true;
		this->label18->Location = System::Drawing::Point(3, 74);
		this->label18->Name = L"label18";
		this->label18->Size = System::Drawing::Size(33, 13);
		this->label18->TabIndex = 4;
		this->label18->Text = L"Spirit:";
		// 
		// textBox_rewardEXP
		// 
		this->textBox_rewardEXP->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
		this->textBox_rewardEXP->Location = System::Drawing::Point(118, 45);
		this->textBox_rewardEXP->Name = L"textBox_rewardEXP";
		this->textBox_rewardEXP->Size = System::Drawing::Size(193, 20);
		this->textBox_rewardEXP->TabIndex = 3;
		this->textBox_rewardEXP->Leave += gcnew System::EventHandler(this, &MainWindow::change_reward);
		// 
		// label17
		// 
		this->label17->AutoSize = true;
		this->label17->Location = System::Drawing::Point(3, 48);
		this->label17->Name = L"label17";
		this->label17->Size = System::Drawing::Size(63, 13);
		this->label17->TabIndex = 2;
		this->label17->Text = L"Experience:";
		// 
		// textBox_rewardCoins
		// 
		this->textBox_rewardCoins->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
		this->textBox_rewardCoins->Location = System::Drawing::Point(118, 19);
		this->textBox_rewardCoins->Name = L"textBox_rewardCoins";
		this->textBox_rewardCoins->Size = System::Drawing::Size(193, 20);
		this->textBox_rewardCoins->TabIndex = 1;
		this->textBox_rewardCoins->Leave += gcnew System::EventHandler(this, &MainWindow::change_reward);
		// 
		// label16
		// 
		this->label16->AutoSize = true;
		this->label16->Location = System::Drawing::Point(3, 22);
		this->label16->Name = L"label16";
		this->label16->Size = System::Drawing::Size(36, 13);
		this->label16->TabIndex = 0;
		this->label16->Text = L"Coins:";
		// 
		// groupBox_conversation
		// 
		this->groupBox_conversation->Controls->Add(this->textBox_conversationText);
		this->groupBox_conversation->Controls->Add(this->label42);
		this->groupBox_conversation->Controls->Add(this->label40);
		this->groupBox_conversation->Controls->Add(this->textBox_conversationPrompt);
		this->groupBox_conversation->Location = System::Drawing::Point(14, 2767);
		this->groupBox_conversation->Name = L"groupBox_conversation";
		this->groupBox_conversation->Size = System::Drawing::Size(628, 159);
		this->groupBox_conversation->TabIndex = 0;
		this->groupBox_conversation->TabStop = false;
		this->groupBox_conversation->Text = L"CONVERSATION";
		// 
		// textBox_conversationText
		// 
		this->textBox_conversationText->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
			| System::Windows::Forms::AnchorStyles::Left) 
			| System::Windows::Forms::AnchorStyles::Right));
		this->textBox_conversationText->Location = System::Drawing::Point(278, 35);
		this->textBox_conversationText->Multiline = true;
		this->textBox_conversationText->Name = L"textBox_conversationText";
		this->textBox_conversationText->ScrollBars = System::Windows::Forms::ScrollBars::Both;
		this->textBox_conversationText->Size = System::Drawing::Size(590, 119);
		this->textBox_conversationText->TabIndex = 3;
		this->textBox_conversationText->Leave += gcnew System::EventHandler(this, &MainWindow::change_conversation);
		// 
		// label42
		// 
		this->label42->AutoSize = true;
		this->label42->Location = System::Drawing::Point(275, 19);
		this->label42->Name = L"label42";
		this->label42->Size = System::Drawing::Size(31, 13);
		this->label42->TabIndex = 2;
		this->label42->Text = L"Text:";
		// 
		// label40
		// 
		this->label40->AutoSize = true;
		this->label40->Location = System::Drawing::Point(3, 19);
		this->label40->Name = L"label40";
		this->label40->Size = System::Drawing::Size(43, 13);
		this->label40->TabIndex = 0;
		this->label40->Text = L"Prompt:";
		// 
		// textBox_conversationPrompt
		// 
		this->textBox_conversationPrompt->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
			| System::Windows::Forms::AnchorStyles::Left));
		this->textBox_conversationPrompt->Location = System::Drawing::Point(6, 35);
		this->textBox_conversationPrompt->Multiline = true;
		this->textBox_conversationPrompt->Name = L"textBox_conversationPrompt";
		this->textBox_conversationPrompt->ScrollBars = System::Windows::Forms::ScrollBars::Both;
		this->textBox_conversationPrompt->Size = System::Drawing::Size(266, 119);
		this->textBox_conversationPrompt->TabIndex = 1;
		this->textBox_conversationPrompt->Leave += gcnew System::EventHandler(this, &MainWindow::change_conversation);
		// 
		// groupBox_answers
		// 
		this->groupBox_answers->Controls->Add(this->textBox_answerText);
		this->groupBox_answers->Controls->Add(this->textBox_answerTlink);
		this->groupBox_answers->Controls->Add(this->label46);
		this->groupBox_answers->Controls->Add(this->textBox_answerQlink);
		this->groupBox_answers->Controls->Add(this->label47);
		this->groupBox_answers->Controls->Add(this->listBox_answers);
		this->groupBox_answers->Location = System::Drawing::Point(14, 3195);
		this->groupBox_answers->Name = L"groupBox_answers";
		this->groupBox_answers->Size = System::Drawing::Size(628, 132);
		this->groupBox_answers->TabIndex = 3;
		this->groupBox_answers->TabStop = false;
		this->groupBox_answers->Text = L"ANSWERS";
		// 
		// textBox_answerText
		// 
		this->textBox_answerText->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
			| System::Windows::Forms::AnchorStyles::Left) 
			| System::Windows::Forms::AnchorStyles::Right));
		this->textBox_answerText->Location = System::Drawing::Point(178, 19);
		this->textBox_answerText->MaxLength = 63;
		this->textBox_answerText->Multiline = true;
		this->textBox_answerText->Name = L"textBox_answerText";
		this->textBox_answerText->ScrollBars = System::Windows::Forms::ScrollBars::Both;
		this->textBox_answerText->Size = System::Drawing::Size(590, 107);
		this->textBox_answerText->TabIndex = 5;
		this->textBox_answerText->Leave += gcnew System::EventHandler(this, &MainWindow::change_conversation);
		// 
		// textBox_answerTlink
		// 
		this->textBox_answerTlink->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
		this->textBox_answerTlink->Location = System::Drawing::Point(84, 106);
		this->textBox_answerTlink->Name = L"textBox_answerTlink";
		this->textBox_answerTlink->Size = System::Drawing::Size(88, 20);
		this->textBox_answerTlink->TabIndex = 4;
		this->textBox_answerTlink->Leave += gcnew System::EventHandler(this, &MainWindow::change_conversation);
		// 
		// label46
		// 
		this->label46->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
		this->label46->AutoSize = true;
		this->label46->Location = System::Drawing::Point(3, 109);
		this->label46->Name = L"label46";
		this->label46->Size = System::Drawing::Size(57, 13);
		this->label46->TabIndex = 3;
		this->label46->Text = L"Task Link:";
		// 
		// textBox_answerQlink
		// 
		this->textBox_answerQlink->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
		this->textBox_answerQlink->Location = System::Drawing::Point(84, 80);
		this->textBox_answerQlink->Name = L"textBox_answerQlink";
		this->textBox_answerQlink->Size = System::Drawing::Size(88, 20);
		this->textBox_answerQlink->TabIndex = 2;
		this->textBox_answerQlink->Leave += gcnew System::EventHandler(this, &MainWindow::change_conversation);
		// 
		// label47
		// 
		this->label47->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
		this->label47->AutoSize = true;
		this->label47->Location = System::Drawing::Point(3, 83);
		this->label47->Name = L"label47";
		this->label47->Size = System::Drawing::Size(75, 13);
		this->label47->TabIndex = 1;
		this->label47->Text = L"Question Link:";
		// 
		// listBox_answers
		// 
		this->listBox_answers->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
			| System::Windows::Forms::AnchorStyles::Left));
		this->listBox_answers->ContextMenuStrip = this->contextMenuStrip_conversation;
		this->listBox_answers->FormattingEnabled = true;
		this->listBox_answers->Location = System::Drawing::Point(6, 19);
		this->listBox_answers->Name = L"listBox_answers";
		this->listBox_answers->Size = System::Drawing::Size(166, 56);
		this->listBox_answers->TabIndex = 0;
		this->listBox_answers->SelectedIndexChanged += gcnew System::EventHandler(this, &MainWindow::select_Answer);
		// 
		// contextMenuStrip_conversation
		// 
		this->contextMenuStrip_conversation->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->addToolStripMenuItem, 
			this->removeToolStripMenuItem});
		this->contextMenuStrip_conversation->Name = L"contextMenuStrip_conversation";
		this->contextMenuStrip_conversation->RenderMode = System::Windows::Forms::ToolStripRenderMode::System;
		this->contextMenuStrip_conversation->ShowImageMargin = false;
		this->contextMenuStrip_conversation->Size = System::Drawing::Size(81, 48);
		// 
		// addToolStripMenuItem
		// 
		this->addToolStripMenuItem->Name = L"addToolStripMenuItem";
		this->addToolStripMenuItem->Size = System::Drawing::Size(80, 22);
		this->addToolStripMenuItem->Text = L"Add";
		this->addToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::click_addConversation);
		// 
		// removeToolStripMenuItem
		// 
		this->removeToolStripMenuItem->Name = L"removeToolStripMenuItem";
		this->removeToolStripMenuItem->Size = System::Drawing::Size(80, 22);
		this->removeToolStripMenuItem->Text = L"Delete";
		this->removeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::click_deleteConversation);
		// 
		// groupBox_questions
		// 
		this->groupBox_questions->Controls->Add(this->textBox_questionText);
		this->groupBox_questions->Controls->Add(this->textBox_questionPrevious);
		this->groupBox_questions->Controls->Add(this->label45);
		this->groupBox_questions->Controls->Add(this->textBox_questionID);
		this->groupBox_questions->Controls->Add(this->label44);
		this->groupBox_questions->Controls->Add(this->listBox_questions);
		this->groupBox_questions->Location = System::Drawing::Point(14, 3057);
		this->groupBox_questions->Name = L"groupBox_questions";
		this->groupBox_questions->Size = System::Drawing::Size(628, 132);
		this->groupBox_questions->TabIndex = 2;
		this->groupBox_questions->TabStop = false;
		this->groupBox_questions->Text = L"QUESTIONS";
		// 
		// textBox_questionText
		// 
		this->textBox_questionText->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
			| System::Windows::Forms::AnchorStyles::Left) 
			| System::Windows::Forms::AnchorStyles::Right));
		this->textBox_questionText->Location = System::Drawing::Point(178, 19);
		this->textBox_questionText->Multiline = true;
		this->textBox_questionText->Name = L"textBox_questionText";
		this->textBox_questionText->ScrollBars = System::Windows::Forms::ScrollBars::Both;
		this->textBox_questionText->Size = System::Drawing::Size(590, 107);
		this->textBox_questionText->TabIndex = 5;
		this->textBox_questionText->Leave += gcnew System::EventHandler(this, &MainWindow::change_conversation);
		// 
		// textBox_questionPrevious
		// 
		this->textBox_questionPrevious->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
		this->textBox_questionPrevious->Location = System::Drawing::Point(84, 106);
		this->textBox_questionPrevious->Name = L"textBox_questionPrevious";
		this->textBox_questionPrevious->Size = System::Drawing::Size(88, 20);
		this->textBox_questionPrevious->TabIndex = 4;
		this->textBox_questionPrevious->Leave += gcnew System::EventHandler(this, &MainWindow::change_conversation);
		// 
		// label45
		// 
		this->label45->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
		this->label45->AutoSize = true;
		this->label45->Location = System::Drawing::Point(3, 109);
		this->label45->Name = L"label45";
		this->label45->Size = System::Drawing::Size(51, 13);
		this->label45->TabIndex = 3;
		this->label45->Text = L"Previous:";
		// 
		// textBox_questionID
		// 
		this->textBox_questionID->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
		this->textBox_questionID->Location = System::Drawing::Point(84, 80);
		this->textBox_questionID->Name = L"textBox_questionID";
		this->textBox_questionID->Size = System::Drawing::Size(88, 20);
		this->textBox_questionID->TabIndex = 2;
		this->textBox_questionID->Leave += gcnew System::EventHandler(this, &MainWindow::change_conversation);
		// 
		// label44
		// 
		this->label44->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
		this->label44->AutoSize = true;
		this->label44->Location = System::Drawing::Point(3, 83);
		this->label44->Name = L"label44";
		this->label44->Size = System::Drawing::Size(21, 13);
		this->label44->TabIndex = 1;
		this->label44->Text = L"ID:";
		// 
		// listBox_questions
		// 
		this->listBox_questions->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
			| System::Windows::Forms::AnchorStyles::Left));
		this->listBox_questions->ContextMenuStrip = this->contextMenuStrip_conversation;
		this->listBox_questions->FormattingEnabled = true;
		this->listBox_questions->Location = System::Drawing::Point(6, 19);
		this->listBox_questions->Name = L"listBox_questions";
		this->listBox_questions->Size = System::Drawing::Size(166, 56);
		this->listBox_questions->TabIndex = 0;
		this->listBox_questions->SelectedIndexChanged += gcnew System::EventHandler(this, &MainWindow::select_Question);
		// 
		// groupBox_dialogs
		// 
		this->groupBox_dialogs->Controls->Add(this->textBox_dialogText);
		this->groupBox_dialogs->Controls->Add(this->textBox_dialogUnknown);
		this->groupBox_dialogs->Controls->Add(this->label43);
		this->groupBox_dialogs->Controls->Add(this->listBox_dialogs);
		this->groupBox_dialogs->Location = System::Drawing::Point(14, 2932);
		this->groupBox_dialogs->Name = L"groupBox_dialogs";
		this->groupBox_dialogs->Size = System::Drawing::Size(628, 119);
		this->groupBox_dialogs->TabIndex = 1;
		this->groupBox_dialogs->TabStop = false;
		this->groupBox_dialogs->Text = L"DIALOGS";
		// 
		// textBox_dialogText
		// 
		this->textBox_dialogText->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
			| System::Windows::Forms::AnchorStyles::Left) 
			| System::Windows::Forms::AnchorStyles::Right));
		this->textBox_dialogText->Location = System::Drawing::Point(178, 19);
		this->textBox_dialogText->MaxLength = 63;
		this->textBox_dialogText->Multiline = true;
		this->textBox_dialogText->Name = L"textBox_dialogText";
		this->textBox_dialogText->ScrollBars = System::Windows::Forms::ScrollBars::Both;
		this->textBox_dialogText->Size = System::Drawing::Size(590, 94);
		this->textBox_dialogText->TabIndex = 3;
		this->textBox_dialogText->Leave += gcnew System::EventHandler(this, &MainWindow::change_conversation);
		// 
		// textBox_dialogUnknown
		// 
		this->textBox_dialogUnknown->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
		this->textBox_dialogUnknown->Location = System::Drawing::Point(84, 93);
		this->textBox_dialogUnknown->Name = L"textBox_dialogUnknown";
		this->textBox_dialogUnknown->Size = System::Drawing::Size(88, 20);
		this->textBox_dialogUnknown->TabIndex = 2;
		this->textBox_dialogUnknown->Leave += gcnew System::EventHandler(this, &MainWindow::change_conversation);
		// 
		// label43
		// 
		this->label43->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
		this->label43->AutoSize = true;
		this->label43->Location = System::Drawing::Point(3, 96);
		this->label43->Name = L"label43";
		this->label43->Size = System::Drawing::Size(56, 13);
		this->label43->TabIndex = 1;
		this->label43->Text = L"Unknown:";
		// 
		// listBox_dialogs
		// 
		this->listBox_dialogs->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
			| System::Windows::Forms::AnchorStyles::Left));
		this->listBox_dialogs->FormattingEnabled = true;
		this->listBox_dialogs->Items->AddRange(gcnew cli::array< System::Object^  >(5) {L"[1] Dialog", L"[2] Dialog", L"[3] Dialog", 
			L"[4] Dialog", L"[5] Dialog"});
		this->listBox_dialogs->Location = System::Drawing::Point(6, 19);
		this->listBox_dialogs->Name = L"listBox_dialogs";
		this->listBox_dialogs->Size = System::Drawing::Size(166, 69);
		this->listBox_dialogs->TabIndex = 0;
		this->listBox_dialogs->SelectedIndexChanged += gcnew System::EventHandler(this, &MainWindow::select_Dialog);
		// 
		// toolTip
		// 
		this->toolTip->AutomaticDelay = 0;
		this->toolTip->AutoPopDelay = 10000;
		this->toolTip->InitialDelay = 0;
		this->toolTip->ReshowDelay = 0;
		// 
		// label106
		// 
		this->label106->AutoSize = true;
		this->label106->Location = System::Drawing::Point(6, 19);
		this->label106->Name = L"label106";
		this->label106->Size = System::Drawing::Size(62, 13);
		this->label106->TabIndex = 89;
		this->label106->Text = L"Has Spans:";
		this->toolTip->SetToolTip(this->label106, L"If version < 89 there must be exactly one location span!");
		// 
		// label107
		// 
		this->label107->AutoSize = true;
		this->label107->Location = System::Drawing::Point(95, 19);
		this->label107->Name = L"label107";
		this->label107->Size = System::Drawing::Size(45, 13);
		this->label107->TabIndex = 93;
		this->label107->Text = L"Map ID:";
		this->toolTip->SetToolTip(this->label107, L"If version < 89 there must be exactly one location span!");
		// 
		// label10
		// 
		this->label10->AutoSize = true;
		this->label10->Location = System::Drawing::Point(203, 19);
		this->label10->Name = L"label10";
		this->label10->Size = System::Drawing::Size(65, 13);
		this->label10->TabIndex = 89;
		this->label10->Text = L"Unknown 1:";
		this->toolTip->SetToolTip(this->label10, L"If version < 89 there must be exactly one location span!");
		// 
		// label11
		// 
		this->label11->AutoSize = true;
		this->label11->Location = System::Drawing::Point(95, 19);
		this->label11->Name = L"label11";
		this->label11->Size = System::Drawing::Size(45, 13);
		this->label11->TabIndex = 93;
		this->label11->Text = L"Map ID:";
		this->toolTip->SetToolTip(this->label11, L"If version < 89 there must be exactly one location span!");
		// 
		// label12
		// 
		this->label12->AutoSize = true;
		this->label12->Location = System::Drawing::Point(203, 19);
		this->label12->Name = L"label12";
		this->label12->Size = System::Drawing::Size(65, 13);
		this->label12->TabIndex = 89;
		this->label12->Text = L"Unknown 1:";
		this->toolTip->SetToolTip(this->label12, L"If version < 89 there must be exactly one location span!");
		// 
		// label13
		// 
		this->label13->AutoSize = true;
		this->label13->Location = System::Drawing::Point(95, 19);
		this->label13->Name = L"label13";
		this->label13->Size = System::Drawing::Size(45, 13);
		this->label13->TabIndex = 93;
		this->label13->Text = L"Map ID:";
		this->toolTip->SetToolTip(this->label13, L"If version < 89 there must be exactly one location span!");
		// 
		// label14
		// 
		this->label14->AutoSize = true;
		this->label14->Location = System::Drawing::Point(203, 19);
		this->label14->Name = L"label14";
		this->label14->Size = System::Drawing::Size(65, 13);
		this->label14->TabIndex = 95;
		this->label14->Text = L"Unknown 1:";
		this->toolTip->SetToolTip(this->label14, L"If version < 89 there must be exactly one location span!");
		// 
		// label15
		// 
		this->label15->AutoSize = true;
		this->label15->Location = System::Drawing::Point(6, 19);
		this->label15->Name = L"label15";
		this->label15->Size = System::Drawing::Size(62, 13);
		this->label15->TabIndex = 95;
		this->label15->Text = L"Has Spans:";
		this->toolTip->SetToolTip(this->label15, L"If version < 89 there must be exactly one location span!");
		// 
		// label53
		// 
		this->label53->AutoSize = true;
		this->label53->Location = System::Drawing::Point(6, 19);
		this->label53->Name = L"label53";
		this->label53->Size = System::Drawing::Size(62, 13);
		this->label53->TabIndex = 95;
		this->label53->Text = L"Has Spans:";
		this->toolTip->SetToolTip(this->label53, L"If version < 89 there must be exactly one location span!");
		// 
		// label48
		// 
		this->label48->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
		this->label48->AutoSize = true;
		this->label48->Cursor = System::Windows::Forms::Cursors::Help;
		this->label48->Location = System::Drawing::Point(89, 110);
		this->label48->Name = L"label48";
		this->label48->Size = System::Drawing::Size(104, 13);
		this->label48->TabIndex = 10;
		this->label48->Text = L"Unactivated Quests:";
		this->toolTip->SetToolTip(this->label48, L"The Quest can only be activated if the following Quests are not in your Quest Log" 
			L"");
		// 
		// comboBox_search
		// 
		this->comboBox_search->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
		this->comboBox_search->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
		this->comboBox_search->FormattingEnabled = true;
		this->comboBox_search->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"ID", L"Name", L"Creature Builder ID"});
		this->comboBox_search->Location = System::Drawing::Point(0, 609);
		this->comboBox_search->Name = L"comboBox_search";
		this->comboBox_search->Size = System::Drawing::Size(137, 21);
		this->comboBox_search->TabIndex = 3;
		// 
		// panel_task
		// 
		this->panel_task->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
			| System::Windows::Forms::AnchorStyles::Right));
		this->panel_task->AutoScroll = true;
		this->panel_task->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
		this->panel_task->Controls->Add(this->groupBox1);
		this->panel_task->Controls->Add(this->groupBox_prerequisites);
		this->panel_task->Controls->Add(this->groupBox_skills);
		this->panel_task->Controls->Add(this->groupBox_occupations);
		this->panel_task->Controls->Add(this->groupBox_reach_location);
		this->panel_task->Controls->Add(this->groupBox_valid_location);
		this->panel_task->Controls->Add(this->groupBox_unknown_location);
		this->panel_task->Controls->Add(this->groupBox_trigger_location);
		this->panel_task->Controls->Add(this->groupBox_required_to_do);
		this->panel_task->Controls->Add(this->groupBox_flags);
		this->panel_task->Controls->Add(this->groupBox_answers);
		this->panel_task->Controls->Add(this->groupBox_conversation);
		this->panel_task->Controls->Add(this->groupBox_questions);
		this->panel_task->Controls->Add(this->groupBox_given_items);
		this->panel_task->Controls->Add(this->groupBox_dialogs);
		this->panel_task->Controls->Add(this->groupBox_team_members);
		this->panel_task->Controls->Add(this->groupBox_reward);
		this->panel_task->Controls->Add(this->groupBox_reward_groups);
		this->panel_task->Controls->Add(this->groupBox_required_items);
		this->panel_task->Controls->Add(this->groupBox_requirements);
		this->panel_task->Controls->Add(this->groupBox_general);
		this->panel_task->Location = System::Drawing::Point(228, 27);
		this->panel_task->Name = L"panel_task";
		this->panel_task->Size = System::Drawing::Size(684, 603);
		this->panel_task->TabIndex = 8;
		// 
		// groupBox1
		// 
		this->groupBox1->Controls->Add(this->label35);
		this->groupBox1->Controls->Add(this->label128);
		this->groupBox1->Controls->Add(this->textBox_level_min);
		this->groupBox1->Controls->Add(this->label36);
		this->groupBox1->Controls->Add(this->textBox_unknown_26_01);
		this->groupBox1->Controls->Add(this->textBox_level_max);
		this->groupBox1->Controls->Add(this->checkBox_craft_skill);
		this->groupBox1->Controls->Add(this->label127);
		this->groupBox1->Controls->Add(this->checkBox_unknown_26);
		this->groupBox1->Controls->Add(this->label126);
		this->groupBox1->Controls->Add(this->checkBox_unknown_25);
		this->groupBox1->Controls->Add(this->label125);
		this->groupBox1->Controls->Add(this->checkBox_unknown_24);
		this->groupBox1->Controls->Add(this->label124);
		this->groupBox1->Controls->Add(this->label33);
		this->groupBox1->Controls->Add(this->textBox_quest_npc);
		this->groupBox1->Controls->Add(this->label34);
		this->groupBox1->Controls->Add(this->textBox_reward_npc);
		this->groupBox1->Controls->Add(this->label123);
		this->groupBox1->Controls->Add(this->checkBox_mark_available_point);
		this->groupBox1->Controls->Add(this->label122);
		this->groupBox1->Controls->Add(this->checkBox_mark_available_icon);
		this->groupBox1->Controls->Add(this->textBox_instant_teleport_location_z);
		this->groupBox1->Controls->Add(this->label121);
		this->groupBox1->Controls->Add(this->textBox_instant_teleport_location_alt);
		this->groupBox1->Controls->Add(this->label120);
		this->groupBox1->Controls->Add(this->textBox_instant_teleport_location_x);
		this->groupBox1->Controls->Add(this->label119);
		this->groupBox1->Controls->Add(this->textBox_instant_teleport_location_map_id);
		this->groupBox1->Controls->Add(this->label118);
		this->groupBox1->Controls->Add(this->textBox_unknown_level);
		this->groupBox1->Controls->Add(this->label117);
		this->groupBox1->Controls->Add(this->label108);
		this->groupBox1->Controls->Add(this->checkBox_unknown_23);
		this->groupBox1->Controls->Add(this->checkBox_unknown_17);
		this->groupBox1->Controls->Add(this->label116);
		this->groupBox1->Controls->Add(this->label109);
		this->groupBox1->Controls->Add(this->checkBox_unknown_22);
		this->groupBox1->Controls->Add(this->checkBox_has_instant_teleport);
		this->groupBox1->Controls->Add(this->label115);
		this->groupBox1->Controls->Add(this->label110);
		this->groupBox1->Controls->Add(this->checkBox_unknown_21);
		this->groupBox1->Controls->Add(this->checkBox_unknown_18);
		this->groupBox1->Controls->Add(this->label114);
		this->groupBox1->Controls->Add(this->label111);
		this->groupBox1->Controls->Add(this->textBox_ai_trigger);
		this->groupBox1->Controls->Add(this->checkBox_unknown_19);
		this->groupBox1->Controls->Add(this->label113);
		this->groupBox1->Controls->Add(this->label112);
		this->groupBox1->Controls->Add(this->checkBox_unknown_20);
		this->groupBox1->Location = System::Drawing::Point(5, 1124);
		this->groupBox1->Name = L"groupBox1";
		this->groupBox1->Size = System::Drawing::Size(596, 225);
		this->groupBox1->TabIndex = 119;
		this->groupBox1->TabStop = false;
		this->groupBox1->Text = L"BASIC PROPERTIES I";
		// 
		// label35
		// 
		this->label35->AutoSize = true;
		this->label35->Location = System::Drawing::Point(164, 200);
		this->label35->Name = L"label35";
		this->label35->Size = System::Drawing::Size(59, 13);
		this->label35->TabIndex = 82;
		this->label35->Text = L"Min. Level:";
		// 
		// label128
		// 
		this->label128->AutoSize = true;
		this->label128->Location = System::Drawing::Point(6, 200);
		this->label128->Name = L"label128";
		this->label128->Size = System::Drawing::Size(86, 13);
		this->label128->TabIndex = 145;
		this->label128->Text = L"Unknown 26 01:";
		// 
		// textBox_level_min
		// 
		this->textBox_level_min->Location = System::Drawing::Point(229, 197);
		this->textBox_level_min->Name = L"textBox_level_min";
		this->textBox_level_min->Size = System::Drawing::Size(60, 20);
		this->textBox_level_min->TabIndex = 83;
		this->textBox_level_min->Leave += gcnew System::EventHandler(this, &MainWindow::change_level_min);
		// 
		// label36
		// 
		this->label36->AutoSize = true;
		this->label36->Location = System::Drawing::Point(295, 200);
		this->label36->Name = L"label36";
		this->label36->Size = System::Drawing::Size(62, 13);
		this->label36->TabIndex = 86;
		this->label36->Text = L"Max. Level:";
		// 
		// textBox_unknown_26_01
		// 
		this->textBox_unknown_26_01->Location = System::Drawing::Point(98, 197);
		this->textBox_unknown_26_01->Name = L"textBox_unknown_26_01";
		this->textBox_unknown_26_01->Size = System::Drawing::Size(60, 20);
		this->textBox_unknown_26_01->TabIndex = 146;
		this->textBox_unknown_26_01->Leave += gcnew System::EventHandler(this, &MainWindow::change_unknown_26_01);
		// 
		// textBox_level_max
		// 
		this->textBox_level_max->Location = System::Drawing::Point(363, 197);
		this->textBox_level_max->Name = L"textBox_level_max";
		this->textBox_level_max->Size = System::Drawing::Size(60, 20);
		this->textBox_level_max->TabIndex = 87;
		this->textBox_level_max->Leave += gcnew System::EventHandler(this, &MainWindow::change_level_max);
		// 
		// checkBox_craft_skill
		// 
		this->checkBox_craft_skill->AutoSize = true;
		this->checkBox_craft_skill->Location = System::Drawing::Point(66, 177);
		this->checkBox_craft_skill->Name = L"checkBox_craft_skill";
		this->checkBox_craft_skill->Size = System::Drawing::Size(15, 14);
		this->checkBox_craft_skill->TabIndex = 143;
		this->checkBox_craft_skill->UseVisualStyleBackColor = true;
		this->checkBox_craft_skill->CheckedChanged += gcnew System::EventHandler(this, &MainWindow::change_craft_skill);
		// 
		// label127
		// 
		this->label127->AutoSize = true;
		this->label127->Location = System::Drawing::Point(6, 177);
		this->label127->Name = L"label127";
		this->label127->Size = System::Drawing::Size(54, 13);
		this->label127->TabIndex = 144;
		this->label127->Text = L"Craft Skill:";
		// 
		// checkBox_unknown_26
		// 
		this->checkBox_unknown_26->AutoSize = true;
		this->checkBox_unknown_26->Location = System::Drawing::Point(360, 177);
		this->checkBox_unknown_26->Name = L"checkBox_unknown_26";
		this->checkBox_unknown_26->Size = System::Drawing::Size(15, 14);
		this->checkBox_unknown_26->TabIndex = 141;
		this->checkBox_unknown_26->UseVisualStyleBackColor = true;
		this->checkBox_unknown_26->CheckedChanged += gcnew System::EventHandler(this, &MainWindow::change_unknown_26);
		// 
		// label126
		// 
		this->label126->AutoSize = true;
		this->label126->Location = System::Drawing::Point(283, 177);
		this->label126->Name = L"label126";
		this->label126->Size = System::Drawing::Size(71, 13);
		this->label126->TabIndex = 142;
		this->label126->Text = L"Unknown 26:";
		// 
		// checkBox_unknown_25
		// 
		this->checkBox_unknown_25->AutoSize = true;
		this->checkBox_unknown_25->Location = System::Drawing::Point(262, 177);
		this->checkBox_unknown_25->Name = L"checkBox_unknown_25";
		this->checkBox_unknown_25->Size = System::Drawing::Size(15, 14);
		this->checkBox_unknown_25->TabIndex = 139;
		this->checkBox_unknown_25->UseVisualStyleBackColor = true;
		this->checkBox_unknown_25->CheckedChanged += gcnew System::EventHandler(this, &MainWindow::change_unknown_25);
		// 
		// label125
		// 
		this->label125->AutoSize = true;
		this->label125->Location = System::Drawing::Point(185, 177);
		this->label125->Name = L"label125";
		this->label125->Size = System::Drawing::Size(71, 13);
		this->label125->TabIndex = 140;
		this->label125->Text = L"Unknown 25:";
		// 
		// checkBox_unknown_24
		// 
		this->checkBox_unknown_24->AutoSize = true;
		this->checkBox_unknown_24->Location = System::Drawing::Point(164, 177);
		this->checkBox_unknown_24->Name = L"checkBox_unknown_24";
		this->checkBox_unknown_24->Size = System::Drawing::Size(15, 14);
		this->checkBox_unknown_24->TabIndex = 137;
		this->checkBox_unknown_24->UseVisualStyleBackColor = true;
		this->checkBox_unknown_24->CheckedChanged += gcnew System::EventHandler(this, &MainWindow::change_unknown_24);
		// 
		// label124
		// 
		this->label124->AutoSize = true;
		this->label124->Location = System::Drawing::Point(87, 177);
		this->label124->Name = L"label124";
		this->label124->Size = System::Drawing::Size(71, 13);
		this->label124->TabIndex = 138;
		this->label124->Text = L"Unknown 24:";
		// 
		// label33
		// 
		this->label33->AutoSize = true;
		this->label33->Location = System::Drawing::Point(6, 154);
		this->label33->Name = L"label33";
		this->label33->Size = System::Drawing::Size(63, 13);
		this->label33->TabIndex = 133;
		this->label33->Text = L"Quest NPC:";
		// 
		// textBox_quest_npc
		// 
		this->textBox_quest_npc->Location = System::Drawing::Point(75, 151);
		this->textBox_quest_npc->Name = L"textBox_quest_npc";
		this->textBox_quest_npc->Size = System::Drawing::Size(60, 20);
		this->textBox_quest_npc->TabIndex = 134;
		this->textBox_quest_npc->Leave += gcnew System::EventHandler(this, &MainWindow::change_quest_npc);
		// 
		// label34
		// 
		this->label34->AutoSize = true;
		this->label34->Location = System::Drawing::Point(141, 154);
		this->label34->Name = L"label34";
		this->label34->Size = System::Drawing::Size(72, 13);
		this->label34->TabIndex = 135;
		this->label34->Text = L"Reward NPC:";
		// 
		// textBox_reward_npc
		// 
		this->textBox_reward_npc->Location = System::Drawing::Point(219, 151);
		this->textBox_reward_npc->Name = L"textBox_reward_npc";
		this->textBox_reward_npc->Size = System::Drawing::Size(60, 20);
		this->textBox_reward_npc->TabIndex = 136;
		this->textBox_reward_npc->Leave += gcnew System::EventHandler(this, &MainWindow::change_reward_npc);
		// 
		// label123
		// 
		this->label123->AutoSize = true;
		this->label123->Location = System::Drawing::Point(137, 131);
		this->label123->Name = L"label123";
		this->label123->Size = System::Drawing::Size(107, 13);
		this->label123->TabIndex = 132;
		this->label123->Text = L"Mark Available Point:";
		// 
		// checkBox_mark_available_point
		// 
		this->checkBox_mark_available_point->AutoSize = true;
		this->checkBox_mark_available_point->Location = System::Drawing::Point(250, 131);
		this->checkBox_mark_available_point->Name = L"checkBox_mark_available_point";
		this->checkBox_mark_available_point->Size = System::Drawing::Size(15, 14);
		this->checkBox_mark_available_point->TabIndex = 131;
		this->checkBox_mark_available_point->UseVisualStyleBackColor = true;
		this->checkBox_mark_available_point->CheckedChanged += gcnew System::EventHandler(this, &MainWindow::change_mark_available_point);
		// 
		// label122
		// 
		this->label122->AutoSize = true;
		this->label122->Location = System::Drawing::Point(6, 131);
		this->label122->Name = L"label122";
		this->label122->Size = System::Drawing::Size(104, 13);
		this->label122->TabIndex = 130;
		this->label122->Text = L"Mark Available Icon:";
		// 
		// checkBox_mark_available_icon
		// 
		this->checkBox_mark_available_icon->AutoSize = true;
		this->checkBox_mark_available_icon->Location = System::Drawing::Point(116, 131);
		this->checkBox_mark_available_icon->Name = L"checkBox_mark_available_icon";
		this->checkBox_mark_available_icon->Size = System::Drawing::Size(15, 14);
		this->checkBox_mark_available_icon->TabIndex = 129;
		this->checkBox_mark_available_icon->UseVisualStyleBackColor = true;
		this->checkBox_mark_available_icon->CheckedChanged += gcnew System::EventHandler(this, &MainWindow::change_mark_available_icon);
		// 
		// textBox_instant_teleport_location_z
		// 
		this->textBox_instant_teleport_location_z->Location = System::Drawing::Point(466, 36);
		this->textBox_instant_teleport_location_z->Name = L"textBox_instant_teleport_location_z";
		this->textBox_instant_teleport_location_z->Size = System::Drawing::Size(70, 20);
		this->textBox_instant_teleport_location_z->TabIndex = 128;
		this->textBox_instant_teleport_location_z->Leave += gcnew System::EventHandler(this, &MainWindow::change_instant_teleport_location_z);
		// 
		// label121
		// 
		this->label121->AutoSize = true;
		this->label121->Location = System::Drawing::Point(443, 39);
		this->label121->Name = L"label121";
		this->label121->Size = System::Drawing::Size(17, 13);
		this->label121->TabIndex = 127;
		this->label121->Text = L"Z:";
		// 
		// textBox_instant_teleport_location_alt
		// 
		this->textBox_instant_teleport_location_alt->Location = System::Drawing::Point(367, 36);
		this->textBox_instant_teleport_location_alt->Name = L"textBox_instant_teleport_location_alt";
		this->textBox_instant_teleport_location_alt->Size = System::Drawing::Size(70, 20);
		this->textBox_instant_teleport_location_alt->TabIndex = 126;
		this->textBox_instant_teleport_location_alt->Leave += gcnew System::EventHandler(this, &MainWindow::change_instant_teleport_location_alt);
		// 
		// label120
		// 
		this->label120->AutoSize = true;
		this->label120->Location = System::Drawing::Point(339, 39);
		this->label120->Name = L"label120";
		this->label120->Size = System::Drawing::Size(22, 13);
		this->label120->TabIndex = 125;
		this->label120->Text = L"Alt:";
		// 
		// textBox_instant_teleport_location_x
		// 
		this->textBox_instant_teleport_location_x->Location = System::Drawing::Point(263, 36);
		this->textBox_instant_teleport_location_x->Name = L"textBox_instant_teleport_location_x";
		this->textBox_instant_teleport_location_x->Size = System::Drawing::Size(70, 20);
		this->textBox_instant_teleport_location_x->TabIndex = 124;
		this->textBox_instant_teleport_location_x->Leave += gcnew System::EventHandler(this, &MainWindow::change_instant_teleport_location_x);
		// 
		// label119
		// 
		this->label119->AutoSize = true;
		this->label119->Location = System::Drawing::Point(240, 39);
		this->label119->Name = L"label119";
		this->label119->Size = System::Drawing::Size(17, 13);
		this->label119->TabIndex = 123;
		this->label119->Text = L"X:";
		// 
		// textBox_instant_teleport_location_map_id
		// 
		this->textBox_instant_teleport_location_map_id->Location = System::Drawing::Point(190, 36);
		this->textBox_instant_teleport_location_map_id->Name = L"textBox_instant_teleport_location_map_id";
		this->textBox_instant_teleport_location_map_id->Size = System::Drawing::Size(44, 20);
		this->textBox_instant_teleport_location_map_id->TabIndex = 122;
		this->textBox_instant_teleport_location_map_id->Leave += gcnew System::EventHandler(this, &MainWindow::change_instant_teleport_location_map_id);
		// 
		// label118
		// 
		this->label118->AutoSize = true;
		this->label118->Location = System::Drawing::Point(139, 39);
		this->label118->Name = L"label118";
		this->label118->Size = System::Drawing::Size(45, 13);
		this->label118->TabIndex = 121;
		this->label118->Text = L"Map ID:";
		// 
		// textBox_unknown_level
		// 
		this->textBox_unknown_level->Location = System::Drawing::Point(118, 105);
		this->textBox_unknown_level->Name = L"textBox_unknown_level";
		this->textBox_unknown_level->Size = System::Drawing::Size(44, 20);
		this->textBox_unknown_level->TabIndex = 120;
		this->textBox_unknown_level->Leave += gcnew System::EventHandler(this, &MainWindow::change_unknown_level);
		// 
		// label117
		// 
		this->label117->AutoSize = true;
		this->label117->Location = System::Drawing::Point(6, 108);
		this->label117->Name = L"label117";
		this->label117->Size = System::Drawing::Size(85, 13);
		this->label117->TabIndex = 119;
		this->label117->Text = L"Unknown Level:";
		// 
		// label108
		// 
		this->label108->AutoSize = true;
		this->label108->Location = System::Drawing::Point(6, 19);
		this->label108->Name = L"label108";
		this->label108->Size = System::Drawing::Size(71, 13);
		this->label108->TabIndex = 98;
		this->label108->Text = L"Unknown 17:";
		// 
		// checkBox_unknown_23
		// 
		this->checkBox_unknown_23->AutoSize = true;
		this->checkBox_unknown_23->Location = System::Drawing::Point(573, 85);
		this->checkBox_unknown_23->Name = L"checkBox_unknown_23";
		this->checkBox_unknown_23->Size = System::Drawing::Size(15, 14);
		this->checkBox_unknown_23->TabIndex = 117;
		this->checkBox_unknown_23->UseVisualStyleBackColor = true;
		this->checkBox_unknown_23->CheckedChanged += gcnew System::EventHandler(this, &MainWindow::change_unknown_23);
		// 
		// checkBox_unknown_17
		// 
		this->checkBox_unknown_17->AutoSize = true;
		this->checkBox_unknown_17->Location = System::Drawing::Point(83, 19);
		this->checkBox_unknown_17->Name = L"checkBox_unknown_17";
		this->checkBox_unknown_17->Size = System::Drawing::Size(15, 14);
		this->checkBox_unknown_17->TabIndex = 97;
		this->checkBox_unknown_17->UseVisualStyleBackColor = true;
		this->checkBox_unknown_17->CheckedChanged += gcnew System::EventHandler(this, &MainWindow::change_unknown_17);
		// 
		// label116
		// 
		this->label116->AutoSize = true;
		this->label116->Location = System::Drawing::Point(496, 85);
		this->label116->Name = L"label116";
		this->label116->Size = System::Drawing::Size(71, 13);
		this->label116->TabIndex = 118;
		this->label116->Text = L"Unknown 23:";
		// 
		// label109
		// 
		this->label109->AutoSize = true;
		this->label109->Location = System::Drawing::Point(6, 39);
		this->label109->Name = L"label109";
		this->label109->Size = System::Drawing::Size(106, 13);
		this->label109->TabIndex = 104;
		this->label109->Text = L"Has Instant Teleport:";
		// 
		// checkBox_unknown_22
		// 
		this->checkBox_unknown_22->AutoSize = true;
		this->checkBox_unknown_22->Location = System::Drawing::Point(475, 85);
		this->checkBox_unknown_22->Name = L"checkBox_unknown_22";
		this->checkBox_unknown_22->Size = System::Drawing::Size(15, 14);
		this->checkBox_unknown_22->TabIndex = 115;
		this->checkBox_unknown_22->UseVisualStyleBackColor = true;
		this->checkBox_unknown_22->CheckedChanged += gcnew System::EventHandler(this, &MainWindow::change_unknown_22);
		// 
		// checkBox_has_instant_teleport
		// 
		this->checkBox_has_instant_teleport->AutoSize = true;
		this->checkBox_has_instant_teleport->Location = System::Drawing::Point(118, 39);
		this->checkBox_has_instant_teleport->Name = L"checkBox_has_instant_teleport";
		this->checkBox_has_instant_teleport->Size = System::Drawing::Size(15, 14);
		this->checkBox_has_instant_teleport->TabIndex = 103;
		this->checkBox_has_instant_teleport->UseVisualStyleBackColor = true;
		this->checkBox_has_instant_teleport->CheckedChanged += gcnew System::EventHandler(this, &MainWindow::change_has_instant_teleport);
		// 
		// label115
		// 
		this->label115->AutoSize = true;
		this->label115->Location = System::Drawing::Point(398, 85);
		this->label115->Name = L"label115";
		this->label115->Size = System::Drawing::Size(71, 13);
		this->label115->TabIndex = 116;
		this->label115->Text = L"Unknown 22:";
		// 
		// label110
		// 
		this->label110->AutoSize = true;
		this->label110->Location = System::Drawing::Point(6, 85);
		this->label110->Name = L"label110";
		this->label110->Size = System::Drawing::Size(71, 13);
		this->label110->TabIndex = 106;
		this->label110->Text = L"Unknown 18:";
		// 
		// checkBox_unknown_21
		// 
		this->checkBox_unknown_21->AutoSize = true;
		this->checkBox_unknown_21->Location = System::Drawing::Point(377, 85);
		this->checkBox_unknown_21->Name = L"checkBox_unknown_21";
		this->checkBox_unknown_21->Size = System::Drawing::Size(15, 14);
		this->checkBox_unknown_21->TabIndex = 113;
		this->checkBox_unknown_21->UseVisualStyleBackColor = true;
		this->checkBox_unknown_21->CheckedChanged += gcnew System::EventHandler(this, &MainWindow::change_unknown_21);
		// 
		// checkBox_unknown_18
		// 
		this->checkBox_unknown_18->AutoSize = true;
		this->checkBox_unknown_18->Location = System::Drawing::Point(83, 85);
		this->checkBox_unknown_18->Name = L"checkBox_unknown_18";
		this->checkBox_unknown_18->Size = System::Drawing::Size(15, 14);
		this->checkBox_unknown_18->TabIndex = 105;
		this->checkBox_unknown_18->UseVisualStyleBackColor = true;
		this->checkBox_unknown_18->CheckedChanged += gcnew System::EventHandler(this, &MainWindow::change_unknown_18);
		// 
		// label114
		// 
		this->label114->AutoSize = true;
		this->label114->Location = System::Drawing::Point(300, 85);
		this->label114->Name = L"label114";
		this->label114->Size = System::Drawing::Size(71, 13);
		this->label114->TabIndex = 114;
		this->label114->Text = L"Unknown 21:";
		// 
		// label111
		// 
		this->label111->AutoSize = true;
		this->label111->Location = System::Drawing::Point(104, 85);
		this->label111->Name = L"label111";
		this->label111->Size = System::Drawing::Size(71, 13);
		this->label111->TabIndex = 108;
		this->label111->Text = L"Unknown 19:";
		// 
		// textBox_ai_trigger
		// 
		this->textBox_ai_trigger->Location = System::Drawing::Point(118, 59);
		this->textBox_ai_trigger->Name = L"textBox_ai_trigger";
		this->textBox_ai_trigger->Size = System::Drawing::Size(44, 20);
		this->textBox_ai_trigger->TabIndex = 112;
		this->textBox_ai_trigger->Leave += gcnew System::EventHandler(this, &MainWindow::change_ai_trigger);
		// 
		// checkBox_unknown_19
		// 
		this->checkBox_unknown_19->AutoSize = true;
		this->checkBox_unknown_19->Location = System::Drawing::Point(181, 85);
		this->checkBox_unknown_19->Name = L"checkBox_unknown_19";
		this->checkBox_unknown_19->Size = System::Drawing::Size(15, 14);
		this->checkBox_unknown_19->TabIndex = 107;
		this->checkBox_unknown_19->UseVisualStyleBackColor = true;
		this->checkBox_unknown_19->CheckedChanged += gcnew System::EventHandler(this, &MainWindow::change_unknown_19);
		// 
		// label113
		// 
		this->label113->AutoSize = true;
		this->label113->Location = System::Drawing::Point(6, 62);
		this->label113->Name = L"label113";
		this->label113->Size = System::Drawing::Size(99, 13);
		this->label113->TabIndex = 111;
		this->label113->Text = L"Creature Builder ID:";
		// 
		// label112
		// 
		this->label112->AutoSize = true;
		this->label112->Location = System::Drawing::Point(202, 85);
		this->label112->Name = L"label112";
		this->label112->Size = System::Drawing::Size(71, 13);
		this->label112->TabIndex = 110;
		this->label112->Text = L"Unknown 20:";
		// 
		// checkBox_unknown_20
		// 
		this->checkBox_unknown_20->AutoSize = true;
		this->checkBox_unknown_20->Location = System::Drawing::Point(279, 85);
		this->checkBox_unknown_20->Name = L"checkBox_unknown_20";
		this->checkBox_unknown_20->Size = System::Drawing::Size(15, 14);
		this->checkBox_unknown_20->TabIndex = 109;
		this->checkBox_unknown_20->UseVisualStyleBackColor = true;
		this->checkBox_unknown_20->CheckedChanged += gcnew System::EventHandler(this, &MainWindow::change_unknown_20);
		// 
		// groupBox_prerequisites
		// 
		this->groupBox_prerequisites->Controls->Add(this->comboBox_gender);
		this->groupBox_prerequisites->Controls->Add(this->label58);
		this->groupBox_prerequisites->Controls->Add(this->textBox_unknownLevel);
		this->groupBox_prerequisites->Controls->Add(this->label30);
		this->groupBox_prerequisites->Controls->Add(this->label48);
		this->groupBox_prerequisites->Controls->Add(this->textBox_requiredQuestUndone1);
		this->groupBox_prerequisites->Controls->Add(this->textBox_requiredQuestUndone2);
		this->groupBox_prerequisites->Controls->Add(this->textBox_requiredQuestUndone3);
		this->groupBox_prerequisites->Controls->Add(this->textBox_requiredQuestUndone5);
		this->groupBox_prerequisites->Controls->Add(this->textBox_requiredQuestUndone4);
		this->groupBox_prerequisites->Location = System::Drawing::Point(436, 1970);
		this->groupBox_prerequisites->Name = L"groupBox_prerequisites";
		this->groupBox_prerequisites->Size = System::Drawing::Size(199, 256);
		this->groupBox_prerequisites->TabIndex = 102;
		this->groupBox_prerequisites->TabStop = false;
		this->groupBox_prerequisites->Text = L"PREREQUISITES";
		// 
		// comboBox_gender
		// 
		this->comboBox_gender->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
		this->comboBox_gender->FormattingEnabled = true;
		this->comboBox_gender->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"All", L"Male", L"Female"});
		this->comboBox_gender->Location = System::Drawing::Point(112, 71);
		this->comboBox_gender->Name = L"comboBox_gender";
		this->comboBox_gender->Size = System::Drawing::Size(81, 21);
		this->comboBox_gender->TabIndex = 2;
		// 
		// label58
		// 
		this->label58->AutoSize = true;
		this->label58->Location = System::Drawing::Point(3, 74);
		this->label58->Name = L"label58";
		this->label58->Size = System::Drawing::Size(45, 13);
		this->label58->TabIndex = 16;
		this->label58->Text = L"Gender:";
		// 
		// textBox_unknownLevel
		// 
		this->textBox_unknownLevel->Location = System::Drawing::Point(112, 45);
		this->textBox_unknownLevel->Name = L"textBox_unknownLevel";
		this->textBox_unknownLevel->Size = System::Drawing::Size(81, 20);
		this->textBox_unknownLevel->TabIndex = 3;
		// 
		// label30
		// 
		this->label30->AutoSize = true;
		this->label30->Location = System::Drawing::Point(3, 48);
		this->label30->Name = L"label30";
		this->label30->Size = System::Drawing::Size(104, 13);
		this->label30->TabIndex = 2;
		this->label30->Text = L"UNKNOWN LEVEL:";
		// 
		// textBox_requiredQuestUndone1
		// 
		this->textBox_requiredQuestUndone1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
		this->textBox_requiredQuestUndone1->Location = System::Drawing::Point(112, 126);
		this->textBox_requiredQuestUndone1->Name = L"textBox_requiredQuestUndone1";
		this->textBox_requiredQuestUndone1->Size = System::Drawing::Size(81, 20);
		this->textBox_requiredQuestUndone1->TabIndex = 11;
		// 
		// textBox_requiredQuestUndone2
		// 
		this->textBox_requiredQuestUndone2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
		this->textBox_requiredQuestUndone2->Location = System::Drawing::Point(112, 152);
		this->textBox_requiredQuestUndone2->Name = L"textBox_requiredQuestUndone2";
		this->textBox_requiredQuestUndone2->Size = System::Drawing::Size(81, 20);
		this->textBox_requiredQuestUndone2->TabIndex = 12;
		// 
		// textBox_requiredQuestUndone3
		// 
		this->textBox_requiredQuestUndone3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
		this->textBox_requiredQuestUndone3->Location = System::Drawing::Point(112, 178);
		this->textBox_requiredQuestUndone3->Name = L"textBox_requiredQuestUndone3";
		this->textBox_requiredQuestUndone3->Size = System::Drawing::Size(81, 20);
		this->textBox_requiredQuestUndone3->TabIndex = 13;
		// 
		// textBox_requiredQuestUndone5
		// 
		this->textBox_requiredQuestUndone5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
		this->textBox_requiredQuestUndone5->Location = System::Drawing::Point(112, 230);
		this->textBox_requiredQuestUndone5->Name = L"textBox_requiredQuestUndone5";
		this->textBox_requiredQuestUndone5->Size = System::Drawing::Size(81, 20);
		this->textBox_requiredQuestUndone5->TabIndex = 15;
		// 
		// textBox_requiredQuestUndone4
		// 
		this->textBox_requiredQuestUndone4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
		this->textBox_requiredQuestUndone4->Location = System::Drawing::Point(112, 204);
		this->textBox_requiredQuestUndone4->Name = L"textBox_requiredQuestUndone4";
		this->textBox_requiredQuestUndone4->Size = System::Drawing::Size(81, 20);
		this->textBox_requiredQuestUndone4->TabIndex = 14;
		// 
		// groupBox_skills
		// 
		this->groupBox_skills->Controls->Add(this->textBox_requiredApothecary);
		this->groupBox_skills->Controls->Add(this->label80);
		this->groupBox_skills->Controls->Add(this->textBox_requiredCraftsman);
		this->groupBox_skills->Controls->Add(this->label79);
		this->groupBox_skills->Controls->Add(this->textBox_requiredTailor);
		this->groupBox_skills->Controls->Add(this->label78);
		this->groupBox_skills->Controls->Add(this->textBox_requiredBlacksmith);
		this->groupBox_skills->Controls->Add(this->label77);
		this->groupBox_skills->Location = System::Drawing::Point(444, 1841);
		this->groupBox_skills->Name = L"groupBox_skills";
		this->groupBox_skills->Size = System::Drawing::Size(157, 123);
		this->groupBox_skills->TabIndex = 101;
		this->groupBox_skills->TabStop = false;
		this->groupBox_skills->Text = L"SKILLS";
		// 
		// textBox_requiredApothecary
		// 
		this->textBox_requiredApothecary->Location = System::Drawing::Point(104, 95);
		this->textBox_requiredApothecary->Name = L"textBox_requiredApothecary";
		this->textBox_requiredApothecary->Size = System::Drawing::Size(44, 20);
		this->textBox_requiredApothecary->TabIndex = 7;
		this->textBox_requiredApothecary->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
		// 
		// label80
		// 
		this->label80->AutoSize = true;
		this->label80->Location = System::Drawing::Point(6, 98);
		this->label80->Name = L"label80";
		this->label80->Size = System::Drawing::Size(93, 13);
		this->label80->TabIndex = 6;
		this->label80->Text = L"Apothecary Level:";
		// 
		// textBox_requiredCraftsman
		// 
		this->textBox_requiredCraftsman->Location = System::Drawing::Point(104, 69);
		this->textBox_requiredCraftsman->Name = L"textBox_requiredCraftsman";
		this->textBox_requiredCraftsman->Size = System::Drawing::Size(44, 20);
		this->textBox_requiredCraftsman->TabIndex = 5;
		this->textBox_requiredCraftsman->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
		// 
		// label79
		// 
		this->label79->AutoSize = true;
		this->label79->Location = System::Drawing::Point(6, 72);
		this->label79->Name = L"label79";
		this->label79->Size = System::Drawing::Size(86, 13);
		this->label79->TabIndex = 4;
		this->label79->Text = L"Craftsman Level:";
		// 
		// textBox_requiredTailor
		// 
		this->textBox_requiredTailor->Location = System::Drawing::Point(104, 43);
		this->textBox_requiredTailor->Name = L"textBox_requiredTailor";
		this->textBox_requiredTailor->Size = System::Drawing::Size(44, 20);
		this->textBox_requiredTailor->TabIndex = 3;
		this->textBox_requiredTailor->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
		// 
		// label78
		// 
		this->label78->AutoSize = true;
		this->label78->Location = System::Drawing::Point(6, 46);
		this->label78->Name = L"label78";
		this->label78->Size = System::Drawing::Size(65, 13);
		this->label78->TabIndex = 2;
		this->label78->Text = L"Tailor Level:";
		// 
		// textBox_requiredBlacksmith
		// 
		this->textBox_requiredBlacksmith->Location = System::Drawing::Point(104, 17);
		this->textBox_requiredBlacksmith->Name = L"textBox_requiredBlacksmith";
		this->textBox_requiredBlacksmith->Size = System::Drawing::Size(44, 20);
		this->textBox_requiredBlacksmith->TabIndex = 1;
		this->textBox_requiredBlacksmith->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
		// 
		// label77
		// 
		this->label77->AutoSize = true;
		this->label77->Location = System::Drawing::Point(6, 20);
		this->label77->Name = L"label77";
		this->label77->Size = System::Drawing::Size(90, 13);
		this->label77->TabIndex = 0;
		this->label77->Text = L"Blacksmith Level:";
		// 
		// groupBox_occupations
		// 
		this->groupBox_occupations->Controls->Add(this->checkBox_cleric);
		this->groupBox_occupations->Controls->Add(this->checkBox_archer);
		this->groupBox_occupations->Controls->Add(this->checkBox_genie);
		this->groupBox_occupations->Controls->Add(this->checkBox_barbarian);
		this->groupBox_occupations->Controls->Add(this->checkBox_venomancer);
		this->groupBox_occupations->Controls->Add(this->checkBox_monk);
		this->groupBox_occupations->Controls->Add(this->checkBox_wizzard);
		this->groupBox_occupations->Controls->Add(this->checkBox_blademaster);
		this->groupBox_occupations->Location = System::Drawing::Point(314, 1836);
		this->groupBox_occupations->Name = L"groupBox_occupations";
		this->groupBox_occupations->Size = System::Drawing::Size(116, 200);
		this->groupBox_occupations->TabIndex = 100;
		this->groupBox_occupations->TabStop = false;
		this->groupBox_occupations->Text = L"OCCUPATIONS";
		// 
		// checkBox_cleric
		// 
		this->checkBox_cleric->AutoSize = true;
		this->checkBox_cleric->Location = System::Drawing::Point(6, 180);
		this->checkBox_cleric->Name = L"checkBox_cleric";
		this->checkBox_cleric->Size = System::Drawing::Size(52, 17);
		this->checkBox_cleric->TabIndex = 7;
		this->checkBox_cleric->Text = L"Cleric";
		this->checkBox_cleric->UseVisualStyleBackColor = true;
		// 
		// checkBox_archer
		// 
		this->checkBox_archer->AutoSize = true;
		this->checkBox_archer->Location = System::Drawing::Point(6, 157);
		this->checkBox_archer->Name = L"checkBox_archer";
		this->checkBox_archer->Size = System::Drawing::Size(57, 17);
		this->checkBox_archer->TabIndex = 6;
		this->checkBox_archer->Text = L"Archer";
		this->checkBox_archer->UseVisualStyleBackColor = true;
		// 
		// checkBox_genie
		// 
		this->checkBox_genie->AutoSize = true;
		this->checkBox_genie->Location = System::Drawing::Point(6, 134);
		this->checkBox_genie->Name = L"checkBox_genie";
		this->checkBox_genie->Size = System::Drawing::Size(100, 17);
		this->checkBox_genie->TabIndex = 5;
		this->checkBox_genie->Text = L"Genie (Psychic)";
		this->checkBox_genie->UseVisualStyleBackColor = true;
		// 
		// checkBox_barbarian
		// 
		this->checkBox_barbarian->AutoSize = true;
		this->checkBox_barbarian->Location = System::Drawing::Point(6, 111);
		this->checkBox_barbarian->Name = L"checkBox_barbarian";
		this->checkBox_barbarian->Size = System::Drawing::Size(71, 17);
		this->checkBox_barbarian->TabIndex = 4;
		this->checkBox_barbarian->Text = L"Barbarian";
		this->checkBox_barbarian->UseVisualStyleBackColor = true;
		// 
		// checkBox_venomancer
		// 
		this->checkBox_venomancer->AutoSize = true;
		this->checkBox_venomancer->Location = System::Drawing::Point(6, 88);
		this->checkBox_venomancer->Name = L"checkBox_venomancer";
		this->checkBox_venomancer->Size = System::Drawing::Size(86, 17);
		this->checkBox_venomancer->TabIndex = 3;
		this->checkBox_venomancer->Text = L"Venomancer";
		this->checkBox_venomancer->UseVisualStyleBackColor = true;
		// 
		// checkBox_monk
		// 
		this->checkBox_monk->AutoSize = true;
		this->checkBox_monk->Location = System::Drawing::Point(6, 65);
		this->checkBox_monk->Name = L"checkBox_monk";
		this->checkBox_monk->Size = System::Drawing::Size(103, 17);
		this->checkBox_monk->TabIndex = 2;
		this->checkBox_monk->Text = L"Monk (Assassin)";
		this->checkBox_monk->UseVisualStyleBackColor = true;
		// 
		// checkBox_wizzard
		// 
		this->checkBox_wizzard->AutoSize = true;
		this->checkBox_wizzard->Location = System::Drawing::Point(6, 42);
		this->checkBox_wizzard->Name = L"checkBox_wizzard";
		this->checkBox_wizzard->Size = System::Drawing::Size(64, 17);
		this->checkBox_wizzard->TabIndex = 1;
		this->checkBox_wizzard->Text = L"Wizzard";
		this->checkBox_wizzard->UseVisualStyleBackColor = true;
		// 
		// checkBox_blademaster
		// 
		this->checkBox_blademaster->AutoSize = true;
		this->checkBox_blademaster->Location = System::Drawing::Point(6, 19);
		this->checkBox_blademaster->Name = L"checkBox_blademaster";
		this->checkBox_blademaster->Size = System::Drawing::Size(84, 17);
		this->checkBox_blademaster->TabIndex = 0;
		this->checkBox_blademaster->Text = L"Blademaster";
		this->checkBox_blademaster->UseVisualStyleBackColor = true;
		// 
		// groupBox_reach_location
		// 
		this->groupBox_reach_location->Location = System::Drawing::Point(5, 1082);
		this->groupBox_reach_location->Name = L"groupBox_reach_location";
		this->groupBox_reach_location->Size = System::Drawing::Size(405, 36);
		this->groupBox_reach_location->TabIndex = 99;
		this->groupBox_reach_location->TabStop = false;
		this->groupBox_reach_location->Text = L"REACH LOCATION";
		// 
		// groupBox_valid_location
		// 
		this->groupBox_valid_location->Controls->Add(this->checkBox_valid_locations_has_spans);
		this->groupBox_valid_location->Controls->Add(this->label53);
		this->groupBox_valid_location->Controls->Add(this->textBox_valid_locations_unknown_1);
		this->groupBox_valid_location->Controls->Add(this->dataGridView_valid_location_spans);
		this->groupBox_valid_location->Controls->Add(this->textBox_valid_locations_map_id);
		this->groupBox_valid_location->Controls->Add(this->label12);
		this->groupBox_valid_location->Controls->Add(this->label13);
		this->groupBox_valid_location->Location = System::Drawing::Point(5, 943);
		this->groupBox_valid_location->Name = L"groupBox_valid_location";
		this->groupBox_valid_location->Size = System::Drawing::Size(405, 133);
		this->groupBox_valid_location->TabIndex = 97;
		this->groupBox_valid_location->TabStop = false;
		this->groupBox_valid_location->Text = L"VALID LOCATION";
		// 
		// checkBox_valid_locations_has_spans
		// 
		this->checkBox_valid_locations_has_spans->AutoSize = true;
		this->checkBox_valid_locations_has_spans->Location = System::Drawing::Point(74, 19);
		this->checkBox_valid_locations_has_spans->Name = L"checkBox_valid_locations_has_spans";
		this->checkBox_valid_locations_has_spans->Size = System::Drawing::Size(15, 14);
		this->checkBox_valid_locations_has_spans->TabIndex = 96;
		this->checkBox_valid_locations_has_spans->UseVisualStyleBackColor = true;
		this->checkBox_valid_locations_has_spans->CheckedChanged += gcnew System::EventHandler(this, &MainWindow::change_valid_locations_has_spans);
		// 
		// textBox_valid_locations_unknown_1
		// 
		this->textBox_valid_locations_unknown_1->Location = System::Drawing::Point(274, 16);
		this->textBox_valid_locations_unknown_1->Name = L"textBox_valid_locations_unknown_1";
		this->textBox_valid_locations_unknown_1->Size = System::Drawing::Size(125, 20);
		this->textBox_valid_locations_unknown_1->TabIndex = 94;
		this->textBox_valid_locations_unknown_1->Leave += gcnew System::EventHandler(this, &MainWindow::change_valid_locations_unknown_1);
		// 
		// dataGridView_valid_location_spans
		// 
		this->dataGridView_valid_location_spans->AllowUserToAddRows = false;
		this->dataGridView_valid_location_spans->AllowUserToDeleteRows = false;
		this->dataGridView_valid_location_spans->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
			| System::Windows::Forms::AnchorStyles::Left) 
			| System::Windows::Forms::AnchorStyles::Right));
		this->dataGridView_valid_location_spans->BackgroundColor = System::Drawing::SystemColors::Window;
		this->dataGridView_valid_location_spans->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
		this->dataGridView_valid_location_spans->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
		this->dataGridView_valid_location_spans->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {this->dataGridViewTextBoxColumn49, 
			this->dataGridViewTextBoxColumn50, this->dataGridViewTextBoxColumn51, this->dataGridViewTextBoxColumn52, this->dataGridViewTextBoxColumn53, 
			this->dataGridViewTextBoxColumn54});
		this->dataGridView_valid_location_spans->ContextMenuStrip = this->contextMenuStrip_valid_location;
		this->dataGridView_valid_location_spans->Location = System::Drawing::Point(6, 42);
		this->dataGridView_valid_location_spans->MultiSelect = false;
		this->dataGridView_valid_location_spans->Name = L"dataGridView_valid_location_spans";
		this->dataGridView_valid_location_spans->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
		dataGridViewCellStyle111->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
		dataGridViewCellStyle111->BackColor = System::Drawing::SystemColors::Control;
		dataGridViewCellStyle111->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, 
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
		dataGridViewCellStyle111->ForeColor = System::Drawing::SystemColors::WindowText;
		dataGridViewCellStyle111->SelectionBackColor = System::Drawing::SystemColors::Highlight;
		dataGridViewCellStyle111->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
		dataGridViewCellStyle111->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
		this->dataGridView_valid_location_spans->RowHeadersDefaultCellStyle = dataGridViewCellStyle111;
		this->dataGridView_valid_location_spans->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToFirstHeader;
		this->dataGridView_valid_location_spans->RowTemplate->Height = 18;
		this->dataGridView_valid_location_spans->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
		this->dataGridView_valid_location_spans->Size = System::Drawing::Size(393, 85);
		this->dataGridView_valid_location_spans->TabIndex = 91;
		this->dataGridView_valid_location_spans->CellValueChanged += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MainWindow::change_valid_locations_span);
		// 
		// dataGridViewTextBoxColumn49
		// 
		this->dataGridViewTextBoxColumn49->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
		dataGridViewCellStyle36->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
		this->dataGridViewTextBoxColumn49->DefaultCellStyle = dataGridViewCellStyle36;
		this->dataGridViewTextBoxColumn49->HeaderText = L"North";
		this->dataGridViewTextBoxColumn49->Name = L"dataGridViewTextBoxColumn49";
		this->dataGridViewTextBoxColumn49->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
		// 
		// dataGridViewTextBoxColumn50
		// 
		this->dataGridViewTextBoxColumn50->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
		dataGridViewCellStyle106->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
		this->dataGridViewTextBoxColumn50->DefaultCellStyle = dataGridViewCellStyle106;
		this->dataGridViewTextBoxColumn50->HeaderText = L"South";
		this->dataGridViewTextBoxColumn50->Name = L"dataGridViewTextBoxColumn50";
		this->dataGridViewTextBoxColumn50->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
		// 
		// dataGridViewTextBoxColumn51
		// 
		this->dataGridViewTextBoxColumn51->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
		dataGridViewCellStyle107->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
		this->dataGridViewTextBoxColumn51->DefaultCellStyle = dataGridViewCellStyle107;
		this->dataGridViewTextBoxColumn51->HeaderText = L"Weast";
		this->dataGridViewTextBoxColumn51->Name = L"dataGridViewTextBoxColumn51";
		this->dataGridViewTextBoxColumn51->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
		// 
		// dataGridViewTextBoxColumn52
		// 
		this->dataGridViewTextBoxColumn52->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
		dataGridViewCellStyle108->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
		this->dataGridViewTextBoxColumn52->DefaultCellStyle = dataGridViewCellStyle108;
		this->dataGridViewTextBoxColumn52->HeaderText = L"East";
		this->dataGridViewTextBoxColumn52->Name = L"dataGridViewTextBoxColumn52";
		this->dataGridViewTextBoxColumn52->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
		// 
		// dataGridViewTextBoxColumn53
		// 
		this->dataGridViewTextBoxColumn53->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
		dataGridViewCellStyle109->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
		this->dataGridViewTextBoxColumn53->DefaultCellStyle = dataGridViewCellStyle109;
		this->dataGridViewTextBoxColumn53->HeaderText = L"Low";
		this->dataGridViewTextBoxColumn53->Name = L"dataGridViewTextBoxColumn53";
		this->dataGridViewTextBoxColumn53->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
		// 
		// dataGridViewTextBoxColumn54
		// 
		this->dataGridViewTextBoxColumn54->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
		dataGridViewCellStyle110->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
		this->dataGridViewTextBoxColumn54->DefaultCellStyle = dataGridViewCellStyle110;
		this->dataGridViewTextBoxColumn54->HeaderText = L"High";
		this->dataGridViewTextBoxColumn54->Name = L"dataGridViewTextBoxColumn54";
		this->dataGridViewTextBoxColumn54->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
		// 
		// contextMenuStrip_valid_location
		// 
		this->contextMenuStrip_valid_location->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->toolStripMenuItem5, 
			this->toolStripMenuItem6});
		this->contextMenuStrip_valid_location->Name = L"contextMenuStrip1";
		this->contextMenuStrip_valid_location->Size = System::Drawing::Size(184, 48);
		// 
		// toolStripMenuItem5
		// 
		this->toolStripMenuItem5->Name = L"toolStripMenuItem5";
		this->toolStripMenuItem5->Size = System::Drawing::Size(183, 22);
		this->toolStripMenuItem5->Text = L"Add Location Span";
		this->toolStripMenuItem5->Click += gcnew System::EventHandler(this, &MainWindow::add_valid_locations_span);
		// 
		// toolStripMenuItem6
		// 
		this->toolStripMenuItem6->Name = L"toolStripMenuItem6";
		this->toolStripMenuItem6->Size = System::Drawing::Size(183, 22);
		this->toolStripMenuItem6->Text = L"Remove Location Span";
		this->toolStripMenuItem6->Click += gcnew System::EventHandler(this, &MainWindow::remove_valid_locations_span);
		// 
		// textBox_valid_locations_map_id
		// 
		this->textBox_valid_locations_map_id->Location = System::Drawing::Point(146, 16);
		this->textBox_valid_locations_map_id->Name = L"textBox_valid_locations_map_id";
		this->textBox_valid_locations_map_id->Size = System::Drawing::Size(51, 20);
		this->textBox_valid_locations_map_id->TabIndex = 92;
		this->textBox_valid_locations_map_id->Leave += gcnew System::EventHandler(this, &MainWindow::change_valid_locations_map_id);
		// 
		// groupBox_unknown_location
		// 
		this->groupBox_unknown_location->Controls->Add(this->checkBox_unknown_locations_has_spans);
		this->groupBox_unknown_location->Controls->Add(this->label15);
		this->groupBox_unknown_location->Controls->Add(this->textBox_unknown_locations_unknown_1);
		this->groupBox_unknown_location->Controls->Add(this->dataGridView_unknown_location_spans);
		this->groupBox_unknown_location->Controls->Add(this->textBox_unknown_locations_map_id);
		this->groupBox_unknown_location->Controls->Add(this->label10);
		this->groupBox_unknown_location->Controls->Add(this->label11);
		this->groupBox_unknown_location->Location = System::Drawing::Point(5, 804);
		this->groupBox_unknown_location->Name = L"groupBox_unknown_location";
		this->groupBox_unknown_location->Size = System::Drawing::Size(405, 133);
		this->groupBox_unknown_location->TabIndex = 96;
		this->groupBox_unknown_location->TabStop = false;
		this->groupBox_unknown_location->Text = L"UNKNOWN LOCATION";
		// 
		// checkBox_unknown_locations_has_spans
		// 
		this->checkBox_unknown_locations_has_spans->AutoSize = true;
		this->checkBox_unknown_locations_has_spans->Location = System::Drawing::Point(74, 19);
		this->checkBox_unknown_locations_has_spans->Name = L"checkBox_unknown_locations_has_spans";
		this->checkBox_unknown_locations_has_spans->Size = System::Drawing::Size(15, 14);
		this->checkBox_unknown_locations_has_spans->TabIndex = 96;
		this->checkBox_unknown_locations_has_spans->UseVisualStyleBackColor = true;
		this->checkBox_unknown_locations_has_spans->CheckedChanged += gcnew System::EventHandler(this, &MainWindow::change_unknown_locations_has_spans);
		// 
		// textBox_unknown_locations_unknown_1
		// 
		this->textBox_unknown_locations_unknown_1->Location = System::Drawing::Point(274, 16);
		this->textBox_unknown_locations_unknown_1->Name = L"textBox_unknown_locations_unknown_1";
		this->textBox_unknown_locations_unknown_1->Size = System::Drawing::Size(125, 20);
		this->textBox_unknown_locations_unknown_1->TabIndex = 94;
		this->textBox_unknown_locations_unknown_1->Leave += gcnew System::EventHandler(this, &MainWindow::change_unknown_locations_unknown_1);
		// 
		// dataGridView_unknown_location_spans
		// 
		this->dataGridView_unknown_location_spans->AllowUserToAddRows = false;
		this->dataGridView_unknown_location_spans->AllowUserToDeleteRows = false;
		this->dataGridView_unknown_location_spans->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
			| System::Windows::Forms::AnchorStyles::Left) 
			| System::Windows::Forms::AnchorStyles::Right));
		this->dataGridView_unknown_location_spans->BackgroundColor = System::Drawing::SystemColors::Window;
		this->dataGridView_unknown_location_spans->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
		this->dataGridView_unknown_location_spans->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
		this->dataGridView_unknown_location_spans->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {this->dataGridViewTextBoxColumn43, 
			this->dataGridViewTextBoxColumn44, this->dataGridViewTextBoxColumn45, this->dataGridViewTextBoxColumn46, this->dataGridViewTextBoxColumn47, 
			this->dataGridViewTextBoxColumn48});
		this->dataGridView_unknown_location_spans->ContextMenuStrip = this->contextMenuStrip_unknown_location;
		this->dataGridView_unknown_location_spans->Location = System::Drawing::Point(6, 42);
		this->dataGridView_unknown_location_spans->MultiSelect = false;
		this->dataGridView_unknown_location_spans->Name = L"dataGridView_unknown_location_spans";
		this->dataGridView_unknown_location_spans->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
		dataGridViewCellStyle117->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
		dataGridViewCellStyle117->BackColor = System::Drawing::SystemColors::Control;
		dataGridViewCellStyle117->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, 
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
		dataGridViewCellStyle117->ForeColor = System::Drawing::SystemColors::WindowText;
		dataGridViewCellStyle117->SelectionBackColor = System::Drawing::SystemColors::Highlight;
		dataGridViewCellStyle117->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
		dataGridViewCellStyle117->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
		this->dataGridView_unknown_location_spans->RowHeadersDefaultCellStyle = dataGridViewCellStyle117;
		this->dataGridView_unknown_location_spans->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToFirstHeader;
		this->dataGridView_unknown_location_spans->RowTemplate->Height = 18;
		this->dataGridView_unknown_location_spans->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
		this->dataGridView_unknown_location_spans->Size = System::Drawing::Size(393, 85);
		this->dataGridView_unknown_location_spans->TabIndex = 91;
		this->dataGridView_unknown_location_spans->CellValueChanged += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MainWindow::change_unknown_locations_span);
		// 
		// dataGridViewTextBoxColumn43
		// 
		this->dataGridViewTextBoxColumn43->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
		dataGridViewCellStyle43->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
		this->dataGridViewTextBoxColumn43->DefaultCellStyle = dataGridViewCellStyle43;
		this->dataGridViewTextBoxColumn43->HeaderText = L"North";
		this->dataGridViewTextBoxColumn43->Name = L"dataGridViewTextBoxColumn43";
		this->dataGridViewTextBoxColumn43->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
		// 
		// dataGridViewTextBoxColumn44
		// 
		this->dataGridViewTextBoxColumn44->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
		dataGridViewCellStyle112->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
		this->dataGridViewTextBoxColumn44->DefaultCellStyle = dataGridViewCellStyle112;
		this->dataGridViewTextBoxColumn44->HeaderText = L"South";
		this->dataGridViewTextBoxColumn44->Name = L"dataGridViewTextBoxColumn44";
		this->dataGridViewTextBoxColumn44->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
		// 
		// dataGridViewTextBoxColumn45
		// 
		this->dataGridViewTextBoxColumn45->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
		dataGridViewCellStyle113->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
		this->dataGridViewTextBoxColumn45->DefaultCellStyle = dataGridViewCellStyle113;
		this->dataGridViewTextBoxColumn45->HeaderText = L"Weast";
		this->dataGridViewTextBoxColumn45->Name = L"dataGridViewTextBoxColumn45";
		this->dataGridViewTextBoxColumn45->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
		// 
		// dataGridViewTextBoxColumn46
		// 
		this->dataGridViewTextBoxColumn46->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
		dataGridViewCellStyle114->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
		this->dataGridViewTextBoxColumn46->DefaultCellStyle = dataGridViewCellStyle114;
		this->dataGridViewTextBoxColumn46->HeaderText = L"East";
		this->dataGridViewTextBoxColumn46->Name = L"dataGridViewTextBoxColumn46";
		this->dataGridViewTextBoxColumn46->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
		// 
		// dataGridViewTextBoxColumn47
		// 
		this->dataGridViewTextBoxColumn47->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
		dataGridViewCellStyle115->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
		this->dataGridViewTextBoxColumn47->DefaultCellStyle = dataGridViewCellStyle115;
		this->dataGridViewTextBoxColumn47->HeaderText = L"Low";
		this->dataGridViewTextBoxColumn47->Name = L"dataGridViewTextBoxColumn47";
		this->dataGridViewTextBoxColumn47->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
		// 
		// dataGridViewTextBoxColumn48
		// 
		this->dataGridViewTextBoxColumn48->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
		dataGridViewCellStyle116->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
		this->dataGridViewTextBoxColumn48->DefaultCellStyle = dataGridViewCellStyle116;
		this->dataGridViewTextBoxColumn48->HeaderText = L"High";
		this->dataGridViewTextBoxColumn48->Name = L"dataGridViewTextBoxColumn48";
		this->dataGridViewTextBoxColumn48->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
		// 
		// contextMenuStrip_unknown_location
		// 
		this->contextMenuStrip_unknown_location->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->toolStripMenuItem3, 
			this->toolStripMenuItem4});
		this->contextMenuStrip_unknown_location->Name = L"contextMenuStrip1";
		this->contextMenuStrip_unknown_location->Size = System::Drawing::Size(184, 48);
		// 
		// toolStripMenuItem3
		// 
		this->toolStripMenuItem3->Name = L"toolStripMenuItem3";
		this->toolStripMenuItem3->Size = System::Drawing::Size(183, 22);
		this->toolStripMenuItem3->Text = L"Add Location Span";
		this->toolStripMenuItem3->Click += gcnew System::EventHandler(this, &MainWindow::add_unknown_locations_span);
		// 
		// toolStripMenuItem4
		// 
		this->toolStripMenuItem4->Name = L"toolStripMenuItem4";
		this->toolStripMenuItem4->Size = System::Drawing::Size(183, 22);
		this->toolStripMenuItem4->Text = L"Remove Location Span";
		this->toolStripMenuItem4->Click += gcnew System::EventHandler(this, &MainWindow::remove_unknown_locations_span);
		// 
		// textBox_unknown_locations_map_id
		// 
		this->textBox_unknown_locations_map_id->Location = System::Drawing::Point(146, 16);
		this->textBox_unknown_locations_map_id->Name = L"textBox_unknown_locations_map_id";
		this->textBox_unknown_locations_map_id->Size = System::Drawing::Size(51, 20);
		this->textBox_unknown_locations_map_id->TabIndex = 92;
		this->textBox_unknown_locations_map_id->Leave += gcnew System::EventHandler(this, &MainWindow::change_unknown_locations_map_id);
		// 
		// groupBox_trigger_location
		// 
		this->groupBox_trigger_location->Controls->Add(this->textBox_trigger_locations_unknown_1);
		this->groupBox_trigger_location->Controls->Add(this->label14);
		this->groupBox_trigger_location->Controls->Add(this->dataGridView_trigger_location_spans);
		this->groupBox_trigger_location->Controls->Add(this->checkBox_trigger_locations_has_spans);
		this->groupBox_trigger_location->Controls->Add(this->textBox_trigger_locations_map_id);
		this->groupBox_trigger_location->Controls->Add(this->label106);
		this->groupBox_trigger_location->Controls->Add(this->label107);
		this->groupBox_trigger_location->Location = System::Drawing::Point(5, 665);
		this->groupBox_trigger_location->Name = L"groupBox_trigger_location";
		this->groupBox_trigger_location->Size = System::Drawing::Size(405, 133);
		this->groupBox_trigger_location->TabIndex = 95;
		this->groupBox_trigger_location->TabStop = false;
		this->groupBox_trigger_location->Text = L"TRIGGER LOCATION";
		// 
		// textBox_trigger_locations_unknown_1
		// 
		this->textBox_trigger_locations_unknown_1->Location = System::Drawing::Point(274, 16);
		this->textBox_trigger_locations_unknown_1->Name = L"textBox_trigger_locations_unknown_1";
		this->textBox_trigger_locations_unknown_1->Size = System::Drawing::Size(125, 20);
		this->textBox_trigger_locations_unknown_1->TabIndex = 96;
		this->textBox_trigger_locations_unknown_1->Leave += gcnew System::EventHandler(this, &MainWindow::change_trigger_locations_unknown_1);
		// 
		// dataGridView_trigger_location_spans
		// 
		this->dataGridView_trigger_location_spans->AllowUserToAddRows = false;
		this->dataGridView_trigger_location_spans->AllowUserToDeleteRows = false;
		this->dataGridView_trigger_location_spans->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
			| System::Windows::Forms::AnchorStyles::Left) 
			| System::Windows::Forms::AnchorStyles::Right));
		this->dataGridView_trigger_location_spans->BackgroundColor = System::Drawing::SystemColors::Window;
		this->dataGridView_trigger_location_spans->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
		this->dataGridView_trigger_location_spans->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
		this->dataGridView_trigger_location_spans->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {this->dataGridViewTextBoxColumn37, 
			this->dataGridViewTextBoxColumn38, this->dataGridViewTextBoxColumn39, this->dataGridViewTextBoxColumn40, this->dataGridViewTextBoxColumn41, 
			this->dataGridViewTextBoxColumn42});
		this->dataGridView_trigger_location_spans->ContextMenuStrip = this->contextMenuStrip_trigger_location;
		this->dataGridView_trigger_location_spans->Location = System::Drawing::Point(6, 42);
		this->dataGridView_trigger_location_spans->MultiSelect = false;
		this->dataGridView_trigger_location_spans->Name = L"dataGridView_trigger_location_spans";
		this->dataGridView_trigger_location_spans->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
		dataGridViewCellStyle123->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
		dataGridViewCellStyle123->BackColor = System::Drawing::SystemColors::Control;
		dataGridViewCellStyle123->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, 
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
		dataGridViewCellStyle123->ForeColor = System::Drawing::SystemColors::WindowText;
		dataGridViewCellStyle123->SelectionBackColor = System::Drawing::SystemColors::Highlight;
		dataGridViewCellStyle123->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
		dataGridViewCellStyle123->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
		this->dataGridView_trigger_location_spans->RowHeadersDefaultCellStyle = dataGridViewCellStyle123;
		this->dataGridView_trigger_location_spans->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToFirstHeader;
		this->dataGridView_trigger_location_spans->RowTemplate->Height = 18;
		this->dataGridView_trigger_location_spans->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
		this->dataGridView_trigger_location_spans->Size = System::Drawing::Size(393, 85);
		this->dataGridView_trigger_location_spans->TabIndex = 91;
		this->dataGridView_trigger_location_spans->CellValueChanged += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MainWindow::change_trigger_locations_span);
		// 
		// dataGridViewTextBoxColumn37
		// 
		this->dataGridViewTextBoxColumn37->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
		dataGridViewCellStyle50->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
		this->dataGridViewTextBoxColumn37->DefaultCellStyle = dataGridViewCellStyle50;
		this->dataGridViewTextBoxColumn37->HeaderText = L"North";
		this->dataGridViewTextBoxColumn37->Name = L"dataGridViewTextBoxColumn37";
		this->dataGridViewTextBoxColumn37->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
		// 
		// dataGridViewTextBoxColumn38
		// 
		this->dataGridViewTextBoxColumn38->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
		dataGridViewCellStyle118->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
		this->dataGridViewTextBoxColumn38->DefaultCellStyle = dataGridViewCellStyle118;
		this->dataGridViewTextBoxColumn38->HeaderText = L"South";
		this->dataGridViewTextBoxColumn38->Name = L"dataGridViewTextBoxColumn38";
		this->dataGridViewTextBoxColumn38->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
		// 
		// dataGridViewTextBoxColumn39
		// 
		this->dataGridViewTextBoxColumn39->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
		dataGridViewCellStyle119->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
		this->dataGridViewTextBoxColumn39->DefaultCellStyle = dataGridViewCellStyle119;
		this->dataGridViewTextBoxColumn39->HeaderText = L"Weast";
		this->dataGridViewTextBoxColumn39->Name = L"dataGridViewTextBoxColumn39";
		this->dataGridViewTextBoxColumn39->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
		// 
		// dataGridViewTextBoxColumn40
		// 
		this->dataGridViewTextBoxColumn40->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
		dataGridViewCellStyle120->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
		this->dataGridViewTextBoxColumn40->DefaultCellStyle = dataGridViewCellStyle120;
		this->dataGridViewTextBoxColumn40->HeaderText = L"East";
		this->dataGridViewTextBoxColumn40->Name = L"dataGridViewTextBoxColumn40";
		this->dataGridViewTextBoxColumn40->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
		// 
		// dataGridViewTextBoxColumn41
		// 
		this->dataGridViewTextBoxColumn41->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
		dataGridViewCellStyle121->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
		this->dataGridViewTextBoxColumn41->DefaultCellStyle = dataGridViewCellStyle121;
		this->dataGridViewTextBoxColumn41->HeaderText = L"Low";
		this->dataGridViewTextBoxColumn41->Name = L"dataGridViewTextBoxColumn41";
		this->dataGridViewTextBoxColumn41->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
		// 
		// dataGridViewTextBoxColumn42
		// 
		this->dataGridViewTextBoxColumn42->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
		dataGridViewCellStyle122->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
		this->dataGridViewTextBoxColumn42->DefaultCellStyle = dataGridViewCellStyle122;
		this->dataGridViewTextBoxColumn42->HeaderText = L"High";
		this->dataGridViewTextBoxColumn42->Name = L"dataGridViewTextBoxColumn42";
		this->dataGridViewTextBoxColumn42->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
		// 
		// contextMenuStrip_trigger_location
		// 
		this->contextMenuStrip_trigger_location->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->addToolStripMenuItem1, 
			this->removeToolStripMenuItem1});
		this->contextMenuStrip_trigger_location->Name = L"contextMenuStrip1";
		this->contextMenuStrip_trigger_location->Size = System::Drawing::Size(184, 48);
		// 
		// addToolStripMenuItem1
		// 
		this->addToolStripMenuItem1->Name = L"addToolStripMenuItem1";
		this->addToolStripMenuItem1->Size = System::Drawing::Size(183, 22);
		this->addToolStripMenuItem1->Text = L"Add Location Span";
		this->addToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MainWindow::add_trigger_locations_span);
		// 
		// removeToolStripMenuItem1
		// 
		this->removeToolStripMenuItem1->Name = L"removeToolStripMenuItem1";
		this->removeToolStripMenuItem1->Size = System::Drawing::Size(183, 22);
		this->removeToolStripMenuItem1->Text = L"Remove Location Span";
		this->removeToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MainWindow::remove_trigger_locations_span);
		// 
		// checkBox_trigger_locations_has_spans
		// 
		this->checkBox_trigger_locations_has_spans->AutoSize = true;
		this->checkBox_trigger_locations_has_spans->Location = System::Drawing::Point(74, 19);
		this->checkBox_trigger_locations_has_spans->Name = L"checkBox_trigger_locations_has_spans";
		this->checkBox_trigger_locations_has_spans->Size = System::Drawing::Size(15, 14);
		this->checkBox_trigger_locations_has_spans->TabIndex = 90;
		this->checkBox_trigger_locations_has_spans->UseVisualStyleBackColor = true;
		this->checkBox_trigger_locations_has_spans->CheckedChanged += gcnew System::EventHandler(this, &MainWindow::change_trigger_locations_has_spans);
		// 
		// textBox_trigger_locations_map_id
		// 
		this->textBox_trigger_locations_map_id->Location = System::Drawing::Point(146, 16);
		this->textBox_trigger_locations_map_id->Name = L"textBox_trigger_locations_map_id";
		this->textBox_trigger_locations_map_id->Size = System::Drawing::Size(51, 20);
		this->textBox_trigger_locations_map_id->TabIndex = 92;
		this->textBox_trigger_locations_map_id->Leave += gcnew System::EventHandler(this, &MainWindow::change_trigger_locations_map_id);
		// 
		// groupBox_required_to_do
		// 
		this->groupBox_required_to_do->Controls->Add(this->textBox_getItemsUnknown);
		this->groupBox_required_to_do->Controls->Add(this->label67);
		this->groupBox_required_to_do->Controls->Add(this->textBox_chaseUnknown);
		this->groupBox_required_to_do->Controls->Add(this->label66);
		this->groupBox_required_to_do->Controls->Add(this->textBox_requiredLocationMap);
		this->groupBox_required_to_do->Controls->Add(this->label54);
		this->groupBox_required_to_do->Controls->Add(this->label27);
		this->groupBox_required_to_do->Controls->Add(this->textBox_waitTime);
		this->groupBox_required_to_do->Controls->Add(this->textBox_requiredLocationNorth);
		this->groupBox_required_to_do->Controls->Add(this->label8);
		this->groupBox_required_to_do->Controls->Add(this->textBox_requiredLocationSouth);
		this->groupBox_required_to_do->Controls->Add(this->label9);
		this->groupBox_required_to_do->Controls->Add(this->textBox_requiredLocationTop);
		this->groupBox_required_to_do->Controls->Add(this->label6);
		this->groupBox_required_to_do->Controls->Add(this->textBox_requiredLocationBottom);
		this->groupBox_required_to_do->Controls->Add(this->label7);
		this->groupBox_required_to_do->Controls->Add(this->textBox_requiredLocationWest);
		this->groupBox_required_to_do->Controls->Add(this->label5);
		this->groupBox_required_to_do->Controls->Add(this->textBox_requiredLocationEast);
		this->groupBox_required_to_do->Controls->Add(this->label4);
		this->groupBox_required_to_do->Controls->Add(this->label2);
		this->groupBox_required_to_do->Controls->Add(this->label1);
		this->groupBox_required_to_do->Controls->Add(this->dataGridView_chase);
		this->groupBox_required_to_do->Controls->Add(this->dataGridView_getItems);
		this->groupBox_required_to_do->Location = System::Drawing::Point(11, 1614);
		this->groupBox_required_to_do->Name = L"groupBox_required_to_do";
		this->groupBox_required_to_do->Size = System::Drawing::Size(288, 422);
		this->groupBox_required_to_do->TabIndex = 9;
		this->groupBox_required_to_do->TabStop = false;
		this->groupBox_required_to_do->Text = L"REQUIRED TO DO";
		// 
		// textBox_getItemsUnknown
		// 
		this->textBox_getItemsUnknown->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left) 
			| System::Windows::Forms::AnchorStyles::Right));
		this->textBox_getItemsUnknown->Location = System::Drawing::Point(113, 270);
		this->textBox_getItemsUnknown->Name = L"textBox_getItemsUnknown";
		this->textBox_getItemsUnknown->Size = System::Drawing::Size(169, 20);
		this->textBox_getItemsUnknown->TabIndex = 19;
		this->textBox_getItemsUnknown->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
		// 
		// label67
		// 
		this->label67->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
		this->label67->AutoSize = true;
		this->label67->Location = System::Drawing::Point(3, 273);
		this->label67->Name = L"label67";
		this->label67->Size = System::Drawing::Size(104, 13);
		this->label67->TabIndex = 18;
		this->label67->Text = L"Get Items Unknown:";
		// 
		// textBox_chaseUnknown
		// 
		this->textBox_chaseUnknown->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left) 
			| System::Windows::Forms::AnchorStyles::Right));
		this->textBox_chaseUnknown->Location = System::Drawing::Point(98, 396);
		this->textBox_chaseUnknown->Name = L"textBox_chaseUnknown";
		this->textBox_chaseUnknown->Size = System::Drawing::Size(184, 20);
		this->textBox_chaseUnknown->TabIndex = 23;
		this->textBox_chaseUnknown->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
		// 
		// label66
		// 
		this->label66->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
		this->label66->AutoSize = true;
		this->label66->Location = System::Drawing::Point(3, 399);
		this->label66->Name = L"label66";
		this->label66->Size = System::Drawing::Size(89, 13);
		this->label66->TabIndex = 22;
		this->label66->Text = L"Chase Unknown:";
		// 
		// textBox_requiredLocationMap
		// 
		this->textBox_requiredLocationMap->Location = System::Drawing::Point(222, 19);
		this->textBox_requiredLocationMap->Name = L"textBox_requiredLocationMap";
		this->textBox_requiredLocationMap->Size = System::Drawing::Size(60, 20);
		this->textBox_requiredLocationMap->TabIndex = 1;
		this->textBox_requiredLocationMap->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
		// 
		// label54
		// 
		this->label54->AutoSize = true;
		this->label54->Location = System::Drawing::Point(3, 22);
		this->label54->Name = L"label54";
		this->label54->Size = System::Drawing::Size(80, 13);
		this->label54->TabIndex = 0;
		this->label54->Text = L"Reach Map ID:";
		// 
		// label27
		// 
		this->label27->AutoSize = true;
		this->label27->Location = System::Drawing::Point(3, 133);
		this->label27->Name = L"label27";
		this->label27->Size = System::Drawing::Size(84, 13);
		this->label27->TabIndex = 14;
		this->label27->Text = L"Wait Time [sec]:";
		// 
		// textBox_waitTime
		// 
		this->textBox_waitTime->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
		this->textBox_waitTime->Location = System::Drawing::Point(140, 130);
		this->textBox_waitTime->Name = L"textBox_waitTime";
		this->textBox_waitTime->Size = System::Drawing::Size(142, 20);
		this->textBox_waitTime->TabIndex = 15;
		this->textBox_waitTime->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
		// 
		// textBox_requiredLocationNorth
		// 
		this->textBox_requiredLocationNorth->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
		this->textBox_requiredLocationNorth->Location = System::Drawing::Point(222, 97);
		this->textBox_requiredLocationNorth->Name = L"textBox_requiredLocationNorth";
		this->textBox_requiredLocationNorth->Size = System::Drawing::Size(60, 20);
		this->textBox_requiredLocationNorth->TabIndex = 13;
		this->textBox_requiredLocationNorth->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
		// 
		// label8
		// 
		this->label8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
		this->label8->AutoSize = true;
		this->label8->Location = System::Drawing::Point(206, 100);
		this->label8->Name = L"label8";
		this->label8->Size = System::Drawing::Size(10, 13);
		this->label8->TabIndex = 12;
		this->label8->Text = L"-";
		// 
		// textBox_requiredLocationSouth
		// 
		this->textBox_requiredLocationSouth->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
		this->textBox_requiredLocationSouth->Location = System::Drawing::Point(140, 97);
		this->textBox_requiredLocationSouth->Name = L"textBox_requiredLocationSouth";
		this->textBox_requiredLocationSouth->Size = System::Drawing::Size(60, 20);
		this->textBox_requiredLocationSouth->TabIndex = 11;
		this->textBox_requiredLocationSouth->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
		// 
		// label9
		// 
		this->label9->AutoSize = true;
		this->label9->Location = System::Drawing::Point(3, 100);
		this->label9->Name = L"label9";
		this->label9->Size = System::Drawing::Size(96, 13);
		this->label9->TabIndex = 10;
		this->label9->Text = L"Reach Location Z:";
		// 
		// textBox_requiredLocationTop
		// 
		this->textBox_requiredLocationTop->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
		this->textBox_requiredLocationTop->Location = System::Drawing::Point(222, 71);
		this->textBox_requiredLocationTop->Name = L"textBox_requiredLocationTop";
		this->textBox_requiredLocationTop->Size = System::Drawing::Size(60, 20);
		this->textBox_requiredLocationTop->TabIndex = 9;
		this->textBox_requiredLocationTop->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
		// 
		// label6
		// 
		this->label6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
		this->label6->AutoSize = true;
		this->label6->Location = System::Drawing::Point(206, 74);
		this->label6->Name = L"label6";
		this->label6->Size = System::Drawing::Size(10, 13);
		this->label6->TabIndex = 8;
		this->label6->Text = L"-";
		// 
		// textBox_requiredLocationBottom
		// 
		this->textBox_requiredLocationBottom->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
		this->textBox_requiredLocationBottom->Location = System::Drawing::Point(140, 71);
		this->textBox_requiredLocationBottom->Name = L"textBox_requiredLocationBottom";
		this->textBox_requiredLocationBottom->Size = System::Drawing::Size(60, 20);
		this->textBox_requiredLocationBottom->TabIndex = 7;
		this->textBox_requiredLocationBottom->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
		// 
		// label7
		// 
		this->label7->AutoSize = true;
		this->label7->Location = System::Drawing::Point(3, 74);
		this->label7->Name = L"label7";
		this->label7->Size = System::Drawing::Size(80, 13);
		this->label7->TabIndex = 6;
		this->label7->Text = L"Reach Altitude:";
		// 
		// textBox_requiredLocationWest
		// 
		this->textBox_requiredLocationWest->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
		this->textBox_requiredLocationWest->Location = System::Drawing::Point(222, 45);
		this->textBox_requiredLocationWest->Name = L"textBox_requiredLocationWest";
		this->textBox_requiredLocationWest->Size = System::Drawing::Size(60, 20);
		this->textBox_requiredLocationWest->TabIndex = 5;
		this->textBox_requiredLocationWest->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
		// 
		// label5
		// 
		this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
		this->label5->AutoSize = true;
		this->label5->Location = System::Drawing::Point(206, 48);
		this->label5->Name = L"label5";
		this->label5->Size = System::Drawing::Size(10, 13);
		this->label5->TabIndex = 4;
		this->label5->Text = L"-";
		// 
		// textBox_requiredLocationEast
		// 
		this->textBox_requiredLocationEast->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
		this->textBox_requiredLocationEast->Location = System::Drawing::Point(140, 45);
		this->textBox_requiredLocationEast->Name = L"textBox_requiredLocationEast";
		this->textBox_requiredLocationEast->Size = System::Drawing::Size(60, 20);
		this->textBox_requiredLocationEast->TabIndex = 3;
		this->textBox_requiredLocationEast->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
		// 
		// label4
		// 
		this->label4->AutoSize = true;
		this->label4->Location = System::Drawing::Point(3, 48);
		this->label4->Name = L"label4";
		this->label4->Size = System::Drawing::Size(96, 13);
		this->label4->TabIndex = 2;
		this->label4->Text = L"Reach Location X:";
		// 
		// label2
		// 
		this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
		this->label2->AutoSize = true;
		this->label2->Location = System::Drawing::Point(3, 168);
		this->label2->Name = L"label2";
		this->label2->Size = System::Drawing::Size(68, 13);
		this->label2->TabIndex = 16;
		this->label2->Text = L"GET ITEMS:";
		// 
		// label1
		// 
		this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
		this->label1->AutoSize = true;
		this->label1->Location = System::Drawing::Point(3, 294);
		this->label1->Name = L"label1";
		this->label1->Size = System::Drawing::Size(46, 13);
		this->label1->TabIndex = 20;
		this->label1->Text = L"CHASE:";
		// 
		// dataGridView_chase
		// 
		this->dataGridView_chase->AllowUserToAddRows = false;
		this->dataGridView_chase->AllowUserToDeleteRows = false;
		this->dataGridView_chase->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left) 
			| System::Windows::Forms::AnchorStyles::Right));
		this->dataGridView_chase->BackgroundColor = System::Drawing::SystemColors::Window;
		this->dataGridView_chase->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
		this->dataGridView_chase->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
		this->dataGridView_chase->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {this->dataGridViewTextBoxColumn20, 
			this->dataGridViewTextBoxColumn21, this->dataGridViewTextBoxColumn22, this->dataGridViewTextBoxColumn23, this->Column14, this->Column15, 
			this->Column16});
		this->dataGridView_chase->ContextMenuStrip = this->contextMenuStrip_date_spans;
		this->dataGridView_chase->Location = System::Drawing::Point(6, 310);
		this->dataGridView_chase->MultiSelect = false;
		this->dataGridView_chase->Name = L"dataGridView_chase";
		this->dataGridView_chase->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
		dataGridViewCellStyle127->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
		dataGridViewCellStyle127->BackColor = System::Drawing::SystemColors::Control;
		dataGridViewCellStyle127->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, 
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
		dataGridViewCellStyle127->ForeColor = System::Drawing::SystemColors::WindowText;
		dataGridViewCellStyle127->SelectionBackColor = System::Drawing::SystemColors::Highlight;
		dataGridViewCellStyle127->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
		dataGridViewCellStyle127->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
		this->dataGridView_chase->RowHeadersDefaultCellStyle = dataGridViewCellStyle127;
		this->dataGridView_chase->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToFirstHeader;
		this->dataGridView_chase->RowTemplate->Height = 18;
		this->dataGridView_chase->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
		this->dataGridView_chase->Size = System::Drawing::Size(276, 80);
		this->dataGridView_chase->TabIndex = 21;
		// 
		// dataGridViewTextBoxColumn20
		// 
		this->dataGridViewTextBoxColumn20->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
		dataGridViewCellStyle57->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
		this->dataGridViewTextBoxColumn20->DefaultCellStyle = dataGridViewCellStyle57;
		this->dataGridViewTextBoxColumn20->HeaderText = L"Mob";
		this->dataGridViewTextBoxColumn20->Name = L"dataGridViewTextBoxColumn20";
		this->dataGridViewTextBoxColumn20->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
		this->dataGridViewTextBoxColumn20->Width = 33;
		// 
		// dataGridViewTextBoxColumn21
		// 
		this->dataGridViewTextBoxColumn21->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
		dataGridViewCellStyle124->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
		this->dataGridViewTextBoxColumn21->DefaultCellStyle = dataGridViewCellStyle124;
		this->dataGridViewTextBoxColumn21->HeaderText = L"#";
		this->dataGridViewTextBoxColumn21->Name = L"dataGridViewTextBoxColumn21";
		this->dataGridViewTextBoxColumn21->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
		this->dataGridViewTextBoxColumn21->Width = 19;
		// 
		// dataGridViewTextBoxColumn22
		// 
		this->dataGridViewTextBoxColumn22->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
		dataGridViewCellStyle125->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
		this->dataGridViewTextBoxColumn22->DefaultCellStyle = dataGridViewCellStyle125;
		this->dataGridViewTextBoxColumn22->HeaderText = L"Drop";
		this->dataGridViewTextBoxColumn22->Name = L"dataGridViewTextBoxColumn22";
		this->dataGridViewTextBoxColumn22->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
		this->dataGridViewTextBoxColumn22->Width = 35;
		// 
		// dataGridViewTextBoxColumn23
		// 
		this->dataGridViewTextBoxColumn23->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
		dataGridViewCellStyle126->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
		this->dataGridViewTextBoxColumn23->DefaultCellStyle = dataGridViewCellStyle126;
		this->dataGridViewTextBoxColumn23->HeaderText = L"#";
		this->dataGridViewTextBoxColumn23->Name = L"dataGridViewTextBoxColumn23";
		this->dataGridViewTextBoxColumn23->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
		this->dataGridViewTextBoxColumn23->Width = 19;
		// 
		// Column14
		// 
		this->Column14->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
		this->Column14->HeaderText = L"\?";
		this->Column14->Name = L"Column14";
		this->Column14->Width = 37;
		// 
		// Column15
		// 
		this->Column15->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
		this->Column15->HeaderText = L"%";
		this->Column15->Name = L"Column15";
		this->Column15->Width = 39;
		// 
		// Column16
		// 
		this->Column16->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
		this->Column16->HeaderText = L"\?";
		this->Column16->Name = L"Column16";
		// 
		// dataGridView_getItems
		// 
		this->dataGridView_getItems->AllowUserToAddRows = false;
		this->dataGridView_getItems->AllowUserToDeleteRows = false;
		this->dataGridView_getItems->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left) 
			| System::Windows::Forms::AnchorStyles::Right));
		this->dataGridView_getItems->BackgroundColor = System::Drawing::SystemColors::Window;
		this->dataGridView_getItems->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
		this->dataGridView_getItems->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
		this->dataGridView_getItems->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {this->dataGridViewTextBoxColumn16, 
			this->dataGridViewTextBoxColumn17, this->dataGridViewTextBoxColumn18, this->dataGridViewTextBoxColumn19});
		this->dataGridView_getItems->ContextMenuStrip = this->contextMenuStrip_date_spans;
		this->dataGridView_getItems->Location = System::Drawing::Point(6, 184);
		this->dataGridView_getItems->MultiSelect = false;
		this->dataGridView_getItems->Name = L"dataGridView_getItems";
		this->dataGridView_getItems->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
		dataGridViewCellStyle130->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
		dataGridViewCellStyle130->BackColor = System::Drawing::SystemColors::Control;
		dataGridViewCellStyle130->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, 
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
		dataGridViewCellStyle130->ForeColor = System::Drawing::SystemColors::WindowText;
		dataGridViewCellStyle130->SelectionBackColor = System::Drawing::SystemColors::Highlight;
		dataGridViewCellStyle130->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
		dataGridViewCellStyle130->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
		this->dataGridView_getItems->RowHeadersDefaultCellStyle = dataGridViewCellStyle130;
		this->dataGridView_getItems->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToFirstHeader;
		this->dataGridView_getItems->RowTemplate->Height = 18;
		this->dataGridView_getItems->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
		this->dataGridView_getItems->Size = System::Drawing::Size(276, 80);
		this->dataGridView_getItems->TabIndex = 17;
		// 
		// dataGridViewTextBoxColumn16
		// 
		this->dataGridViewTextBoxColumn16->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
		dataGridViewCellStyle62->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
		this->dataGridViewTextBoxColumn16->DefaultCellStyle = dataGridViewCellStyle62;
		this->dataGridViewTextBoxColumn16->HeaderText = L"ID";
		this->dataGridViewTextBoxColumn16->Name = L"dataGridViewTextBoxColumn16";
		this->dataGridViewTextBoxColumn16->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
		this->dataGridViewTextBoxColumn16->Width = 23;
		// 
		// dataGridViewTextBoxColumn17
		// 
		this->dataGridViewTextBoxColumn17->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
		this->dataGridViewTextBoxColumn17->HeaderText = L"\?";
		this->dataGridViewTextBoxColumn17->Name = L"dataGridViewTextBoxColumn17";
		this->dataGridViewTextBoxColumn17->Resizable = System::Windows::Forms::DataGridViewTriState::True;
		this->dataGridViewTextBoxColumn17->Width = 18;
		// 
		// dataGridViewTextBoxColumn18
		// 
		this->dataGridViewTextBoxColumn18->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
		dataGridViewCellStyle128->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
		this->dataGridViewTextBoxColumn18->DefaultCellStyle = dataGridViewCellStyle128;
		this->dataGridViewTextBoxColumn18->HeaderText = L"#";
		this->dataGridViewTextBoxColumn18->Name = L"dataGridViewTextBoxColumn18";
		this->dataGridViewTextBoxColumn18->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
		this->dataGridViewTextBoxColumn18->Width = 19;
		// 
		// dataGridViewTextBoxColumn19
		// 
		this->dataGridViewTextBoxColumn19->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
		dataGridViewCellStyle129->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
		this->dataGridViewTextBoxColumn19->DefaultCellStyle = dataGridViewCellStyle129;
		this->dataGridViewTextBoxColumn19->HeaderText = L"%";
		this->dataGridViewTextBoxColumn19->Name = L"dataGridViewTextBoxColumn19";
		this->dataGridViewTextBoxColumn19->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
		// 
		// groupBox_flags
		// 
		this->groupBox_flags->Controls->Add(this->label105);
		this->groupBox_flags->Controls->Add(this->checkBox_unknown_14);
		this->groupBox_flags->Controls->Add(this->label104);
		this->groupBox_flags->Controls->Add(this->checkBox_unknown_13);
		this->groupBox_flags->Controls->Add(this->label103);
		this->groupBox_flags->Controls->Add(this->checkBox_unknown_12);
		this->groupBox_flags->Controls->Add(this->label102);
		this->groupBox_flags->Controls->Add(this->checkBox_unknown_11);
		this->groupBox_flags->Controls->Add(this->label101);
		this->groupBox_flags->Controls->Add(this->checkBox_unknown_10);
		this->groupBox_flags->Controls->Add(this->label100);
		this->groupBox_flags->Controls->Add(this->checkBox_on_fail_parent_fail);
		this->groupBox_flags->Controls->Add(this->label99);
		this->groupBox_flags->Controls->Add(this->checkBox_fail_on_death);
		this->groupBox_flags->Controls->Add(this->label98);
		this->groupBox_flags->Controls->Add(this->checkBox_repeatable_after_failure);
		this->groupBox_flags->Controls->Add(this->label97);
		this->groupBox_flags->Controls->Add(this->checkBox_repeatable);
		this->groupBox_flags->Controls->Add(this->label96);
		this->groupBox_flags->Controls->Add(this->checkBox_can_give_up);
		this->groupBox_flags->Controls->Add(this->label95);
		this->groupBox_flags->Controls->Add(this->checkBox_on_success_parent_success);
		this->groupBox_flags->Controls->Add(this->label94);
		this->groupBox_flags->Controls->Add(this->checkBox_on_give_up_parent_fails);
		this->groupBox_flags->Controls->Add(this->label93);
		this->groupBox_flags->Controls->Add(this->checkBox_activate_next_subquest);
		this->groupBox_flags->Controls->Add(this->label92);
		this->groupBox_flags->Controls->Add(this->checkBox_activate_random_subquest);
		this->groupBox_flags->Controls->Add(this->label91);
		this->groupBox_flags->Controls->Add(this->checkBox_activate_first_subquest);
		this->groupBox_flags->Location = System::Drawing::Point(5, 540);
		this->groupBox_flags->Name = L"groupBox_flags";
		this->groupBox_flags->Size = System::Drawing::Size(656, 119);
		this->groupBox_flags->TabIndex = 4;
		this->groupBox_flags->TabStop = false;
		this->groupBox_flags->Text = L"FLAGS";
		// 
		// label105
		// 
		this->label105->AutoSize = true;
		this->label105->Location = System::Drawing::Point(398, 99);
		this->label105->Name = L"label105";
		this->label105->Size = System::Drawing::Size(71, 13);
		this->label105->TabIndex = 91;
		this->label105->Text = L"Unknown 14:";
		// 
		// checkBox_unknown_14
		// 
		this->checkBox_unknown_14->AutoSize = true;
		this->checkBox_unknown_14->Location = System::Drawing::Point(475, 99);
		this->checkBox_unknown_14->Name = L"checkBox_unknown_14";
		this->checkBox_unknown_14->RightToLeft = System::Windows::Forms::RightToLeft::No;
		this->checkBox_unknown_14->Size = System::Drawing::Size(15, 14);
		this->checkBox_unknown_14->TabIndex = 90;
		this->checkBox_unknown_14->UseVisualStyleBackColor = true;
		this->checkBox_unknown_14->CheckedChanged += gcnew System::EventHandler(this, &MainWindow::change_unknown_14);
		// 
		// label104
		// 
		this->label104->AutoSize = true;
		this->label104->Location = System::Drawing::Point(398, 79);
		this->label104->Name = L"label104";
		this->label104->Size = System::Drawing::Size(71, 13);
		this->label104->TabIndex = 89;
		this->label104->Text = L"Unknown 13:";
		// 
		// checkBox_unknown_13
		// 
		this->checkBox_unknown_13->AutoSize = true;
		this->checkBox_unknown_13->Location = System::Drawing::Point(475, 79);
		this->checkBox_unknown_13->Name = L"checkBox_unknown_13";
		this->checkBox_unknown_13->RightToLeft = System::Windows::Forms::RightToLeft::No;
		this->checkBox_unknown_13->Size = System::Drawing::Size(15, 14);
		this->checkBox_unknown_13->TabIndex = 88;
		this->checkBox_unknown_13->UseVisualStyleBackColor = true;
		this->checkBox_unknown_13->CheckedChanged += gcnew System::EventHandler(this, &MainWindow::change_unknown_13);
		// 
		// label103
		// 
		this->label103->AutoSize = true;
		this->label103->Location = System::Drawing::Point(398, 59);
		this->label103->Name = L"label103";
		this->label103->Size = System::Drawing::Size(71, 13);
		this->label103->TabIndex = 87;
		this->label103->Text = L"Unknown 12:";
		// 
		// checkBox_unknown_12
		// 
		this->checkBox_unknown_12->AutoSize = true;
		this->checkBox_unknown_12->Location = System::Drawing::Point(475, 59);
		this->checkBox_unknown_12->Name = L"checkBox_unknown_12";
		this->checkBox_unknown_12->RightToLeft = System::Windows::Forms::RightToLeft::No;
		this->checkBox_unknown_12->Size = System::Drawing::Size(15, 14);
		this->checkBox_unknown_12->TabIndex = 86;
		this->checkBox_unknown_12->UseVisualStyleBackColor = true;
		this->checkBox_unknown_12->CheckedChanged += gcnew System::EventHandler(this, &MainWindow::change_unknown_12);
		// 
		// label102
		// 
		this->label102->AutoSize = true;
		this->label102->Location = System::Drawing::Point(398, 39);
		this->label102->Name = L"label102";
		this->label102->Size = System::Drawing::Size(71, 13);
		this->label102->TabIndex = 85;
		this->label102->Text = L"Unknown 11:";
		// 
		// checkBox_unknown_11
		// 
		this->checkBox_unknown_11->AutoSize = true;
		this->checkBox_unknown_11->Location = System::Drawing::Point(475, 39);
		this->checkBox_unknown_11->Name = L"checkBox_unknown_11";
		this->checkBox_unknown_11->RightToLeft = System::Windows::Forms::RightToLeft::No;
		this->checkBox_unknown_11->Size = System::Drawing::Size(15, 14);
		this->checkBox_unknown_11->TabIndex = 84;
		this->checkBox_unknown_11->UseVisualStyleBackColor = true;
		this->checkBox_unknown_11->CheckedChanged += gcnew System::EventHandler(this, &MainWindow::change_unknown_11);
		// 
		// label101
		// 
		this->label101->AutoSize = true;
		this->label101->Location = System::Drawing::Point(398, 19);
		this->label101->Name = L"label101";
		this->label101->Size = System::Drawing::Size(71, 13);
		this->label101->TabIndex = 83;
		this->label101->Text = L"Unknown 10:";
		// 
		// checkBox_unknown_10
		// 
		this->checkBox_unknown_10->AutoSize = true;
		this->checkBox_unknown_10->Location = System::Drawing::Point(475, 19);
		this->checkBox_unknown_10->Name = L"checkBox_unknown_10";
		this->checkBox_unknown_10->RightToLeft = System::Windows::Forms::RightToLeft::No;
		this->checkBox_unknown_10->Size = System::Drawing::Size(15, 14);
		this->checkBox_unknown_10->TabIndex = 82;
		this->checkBox_unknown_10->UseVisualStyleBackColor = true;
		this->checkBox_unknown_10->CheckedChanged += gcnew System::EventHandler(this, &MainWindow::change_unknown_10);
		// 
		// label100
		// 
		this->label100->AutoSize = true;
		this->label100->Location = System::Drawing::Point(209, 97);
		this->label100->Name = L"label100";
		this->label100->Size = System::Drawing::Size(96, 13);
		this->label100->TabIndex = 81;
		this->label100->Text = L"On Fail Parent Fail:";
		// 
		// checkBox_on_fail_parent_fail
		// 
		this->checkBox_on_fail_parent_fail->AutoSize = true;
		this->checkBox_on_fail_parent_fail->Location = System::Drawing::Point(339, 97);
		this->checkBox_on_fail_parent_fail->Name = L"checkBox_on_fail_parent_fail";
		this->checkBox_on_fail_parent_fail->RightToLeft = System::Windows::Forms::RightToLeft::No;
		this->checkBox_on_fail_parent_fail->Size = System::Drawing::Size(15, 14);
		this->checkBox_on_fail_parent_fail->TabIndex = 80;
		this->checkBox_on_fail_parent_fail->UseVisualStyleBackColor = true;
		this->checkBox_on_fail_parent_fail->CheckedChanged += gcnew System::EventHandler(this, &MainWindow::change_on_fail_parent_fail);
		// 
		// label99
		// 
		this->label99->AutoSize = true;
		this->label99->Location = System::Drawing::Point(209, 77);
		this->label99->Name = L"label99";
		this->label99->Size = System::Drawing::Size(75, 13);
		this->label99->TabIndex = 79;
		this->label99->Text = L"Fail On Death:";
		// 
		// checkBox_fail_on_death
		// 
		this->checkBox_fail_on_death->AutoSize = true;
		this->checkBox_fail_on_death->Location = System::Drawing::Point(339, 77);
		this->checkBox_fail_on_death->Name = L"checkBox_fail_on_death";
		this->checkBox_fail_on_death->RightToLeft = System::Windows::Forms::RightToLeft::No;
		this->checkBox_fail_on_death->Size = System::Drawing::Size(15, 14);
		this->checkBox_fail_on_death->TabIndex = 78;
		this->checkBox_fail_on_death->UseVisualStyleBackColor = true;
		this->checkBox_fail_on_death->CheckedChanged += gcnew System::EventHandler(this, &MainWindow::change_fail_on_death);
		// 
		// label98
		// 
		this->label98->AutoSize = true;
		this->label98->Location = System::Drawing::Point(209, 59);
		this->label98->Name = L"label98";
		this->label98->Size = System::Drawing::Size(124, 13);
		this->label98->TabIndex = 77;
		this->label98->Text = L"Repeatable After Failure:";
		// 
		// checkBox_repeatable_after_failure
		// 
		this->checkBox_repeatable_after_failure->AutoSize = true;
		this->checkBox_repeatable_after_failure->Location = System::Drawing::Point(339, 59);
		this->checkBox_repeatable_after_failure->Name = L"checkBox_repeatable_after_failure";
		this->checkBox_repeatable_after_failure->RightToLeft = System::Windows::Forms::RightToLeft::No;
		this->checkBox_repeatable_after_failure->Size = System::Drawing::Size(15, 14);
		this->checkBox_repeatable_after_failure->TabIndex = 76;
		this->checkBox_repeatable_after_failure->UseVisualStyleBackColor = true;
		this->checkBox_repeatable_after_failure->CheckedChanged += gcnew System::EventHandler(this, &MainWindow::change_repeatable_after_failure);
		// 
		// label97
		// 
		this->label97->AutoSize = true;
		this->label97->Location = System::Drawing::Point(209, 39);
		this->label97->Name = L"label97";
		this->label97->Size = System::Drawing::Size(65, 13);
		this->label97->TabIndex = 75;
		this->label97->Text = L"Repeatable:";
		// 
		// checkBox_repeatable
		// 
		this->checkBox_repeatable->AutoSize = true;
		this->checkBox_repeatable->Location = System::Drawing::Point(339, 39);
		this->checkBox_repeatable->Name = L"checkBox_repeatable";
		this->checkBox_repeatable->RightToLeft = System::Windows::Forms::RightToLeft::No;
		this->checkBox_repeatable->Size = System::Drawing::Size(15, 14);
		this->checkBox_repeatable->TabIndex = 74;
		this->checkBox_repeatable->UseVisualStyleBackColor = true;
		this->checkBox_repeatable->CheckedChanged += gcnew System::EventHandler(this, &MainWindow::change_repeatable);
		// 
		// label96
		// 
		this->label96->AutoSize = true;
		this->label96->Location = System::Drawing::Point(209, 19);
		this->label96->Name = L"label96";
		this->label96->Size = System::Drawing::Size(71, 13);
		this->label96->TabIndex = 73;
		this->label96->Text = L"Can Give Up:";
		// 
		// checkBox_can_give_up
		// 
		this->checkBox_can_give_up->AutoSize = true;
		this->checkBox_can_give_up->Location = System::Drawing::Point(339, 19);
		this->checkBox_can_give_up->Name = L"checkBox_can_give_up";
		this->checkBox_can_give_up->RightToLeft = System::Windows::Forms::RightToLeft::No;
		this->checkBox_can_give_up->Size = System::Drawing::Size(15, 14);
		this->checkBox_can_give_up->TabIndex = 72;
		this->checkBox_can_give_up->UseVisualStyleBackColor = true;
		this->checkBox_can_give_up->CheckedChanged += gcnew System::EventHandler(this, &MainWindow::change_can_give_up);
		// 
		// label95
		// 
		this->label95->AutoSize = true;
		this->label95->Location = System::Drawing::Point(6, 99);
		this->label95->Name = L"label95";
		this->label95->Size = System::Drawing::Size(146, 13);
		this->label95->TabIndex = 71;
		this->label95->Text = L"On Success Parent Success:";
		// 
		// checkBox_on_success_parent_success
		// 
		this->checkBox_on_success_parent_success->AutoSize = true;
		this->checkBox_on_success_parent_success->Location = System::Drawing::Point(159, 99);
		this->checkBox_on_success_parent_success->Name = L"checkBox_on_success_parent_success";
		this->checkBox_on_success_parent_success->RightToLeft = System::Windows::Forms::RightToLeft::No;
		this->checkBox_on_success_parent_success->Size = System::Drawing::Size(15, 14);
		this->checkBox_on_success_parent_success->TabIndex = 70;
		this->checkBox_on_success_parent_success->UseVisualStyleBackColor = true;
		this->checkBox_on_success_parent_success->CheckedChanged += gcnew System::EventHandler(this, &MainWindow::change_on_success_parent_success);
		// 
		// label94
		// 
		this->label94->AutoSize = true;
		this->label94->Location = System::Drawing::Point(6, 79);
		this->label94->Name = L"label94";
		this->label94->Size = System::Drawing::Size(124, 13);
		this->label94->TabIndex = 69;
		this->label94->Text = L"On Give Up Parent Fails:";
		// 
		// checkBox_on_give_up_parent_fails
		// 
		this->checkBox_on_give_up_parent_fails->AutoSize = true;
		this->checkBox_on_give_up_parent_fails->Location = System::Drawing::Point(159, 79);
		this->checkBox_on_give_up_parent_fails->Name = L"checkBox_on_give_up_parent_fails";
		this->checkBox_on_give_up_parent_fails->RightToLeft = System::Windows::Forms::RightToLeft::No;
		this->checkBox_on_give_up_parent_fails->Size = System::Drawing::Size(15, 14);
		this->checkBox_on_give_up_parent_fails->TabIndex = 68;
		this->checkBox_on_give_up_parent_fails->UseVisualStyleBackColor = true;
		this->checkBox_on_give_up_parent_fails->CheckedChanged += gcnew System::EventHandler(this, &MainWindow::change_on_give_up_parent_fails);
		// 
		// label93
		// 
		this->label93->AutoSize = true;
		this->label93->Location = System::Drawing::Point(6, 59);
		this->label93->Name = L"label93";
		this->label93->Size = System::Drawing::Size(122, 13);
		this->label93->TabIndex = 67;
		this->label93->Text = L"Activate Next Subquest:";
		// 
		// checkBox_activate_next_subquest
		// 
		this->checkBox_activate_next_subquest->AutoSize = true;
		this->checkBox_activate_next_subquest->Location = System::Drawing::Point(159, 59);
		this->checkBox_activate_next_subquest->Name = L"checkBox_activate_next_subquest";
		this->checkBox_activate_next_subquest->RightToLeft = System::Windows::Forms::RightToLeft::No;
		this->checkBox_activate_next_subquest->Size = System::Drawing::Size(15, 14);
		this->checkBox_activate_next_subquest->TabIndex = 66;
		this->checkBox_activate_next_subquest->UseVisualStyleBackColor = true;
		this->checkBox_activate_next_subquest->CheckedChanged += gcnew System::EventHandler(this, &MainWindow::change_activate_next_subquest);
		// 
		// label92
		// 
		this->label92->AutoSize = true;
		this->label92->Location = System::Drawing::Point(6, 39);
		this->label92->Name = L"label92";
		this->label92->Size = System::Drawing::Size(140, 13);
		this->label92->TabIndex = 65;
		this->label92->Text = L"Activate Random Subquest:";
		// 
		// checkBox_activate_random_subquest
		// 
		this->checkBox_activate_random_subquest->AutoSize = true;
		this->checkBox_activate_random_subquest->Location = System::Drawing::Point(159, 39);
		this->checkBox_activate_random_subquest->Name = L"checkBox_activate_random_subquest";
		this->checkBox_activate_random_subquest->RightToLeft = System::Windows::Forms::RightToLeft::No;
		this->checkBox_activate_random_subquest->Size = System::Drawing::Size(15, 14);
		this->checkBox_activate_random_subquest->TabIndex = 64;
		this->checkBox_activate_random_subquest->UseVisualStyleBackColor = true;
		this->checkBox_activate_random_subquest->CheckedChanged += gcnew System::EventHandler(this, &MainWindow::change_activate_random_subquest);
		// 
		// label91
		// 
		this->label91->AutoSize = true;
		this->label91->Location = System::Drawing::Point(6, 19);
		this->label91->Name = L"label91";
		this->label91->Size = System::Drawing::Size(119, 13);
		this->label91->TabIndex = 63;
		this->label91->Text = L"Activate First Subquest:";
		// 
		// checkBox_activate_first_subquest
		// 
		this->checkBox_activate_first_subquest->AutoSize = true;
		this->checkBox_activate_first_subquest->Location = System::Drawing::Point(159, 19);
		this->checkBox_activate_first_subquest->Name = L"checkBox_activate_first_subquest";
		this->checkBox_activate_first_subquest->RightToLeft = System::Windows::Forms::RightToLeft::No;
		this->checkBox_activate_first_subquest->Size = System::Drawing::Size(15, 14);
		this->checkBox_activate_first_subquest->TabIndex = 62;
		this->checkBox_activate_first_subquest->UseVisualStyleBackColor = true;
		this->checkBox_activate_first_subquest->CheckedChanged += gcnew System::EventHandler(this, &MainWindow::change_activate_first_subquest);
		// 
		// groupBox_requirements
		// 
		this->groupBox_requirements->Controls->Add(this->label41);
		this->groupBox_requirements->Controls->Add(this->textBox_required_quests_done_1);
		this->groupBox_requirements->Controls->Add(this->textBox_required_quests_done_2);
		this->groupBox_requirements->Controls->Add(this->textBox_required_quests_done_3);
		this->groupBox_requirements->Controls->Add(this->textBox_required_quests_done_4);
		this->groupBox_requirements->Controls->Add(this->textBox_required_quests_done_5);
		this->groupBox_requirements->Controls->Add(this->checkBox_unknown_33);
		this->groupBox_requirements->Controls->Add(this->label132);
		this->groupBox_requirements->Controls->Add(this->textBox_unknown_32);
		this->groupBox_requirements->Controls->Add(this->label131);
		this->groupBox_requirements->Controls->Add(this->textBox_requiredReputation);
		this->groupBox_requirements->Controls->Add(this->label38);
		this->groupBox_requirements->Controls->Add(this->checkBox_unknown_31);
		this->groupBox_requirements->Controls->Add(this->label130);
		this->groupBox_requirements->Controls->Add(this->textBox_given_items_unknown);
		this->groupBox_requirements->Controls->Add(this->label129);
		this->groupBox_requirements->Controls->Add(this->textBox_unknown_30);
		this->groupBox_requirements->Controls->Add(this->label73);
		this->groupBox_requirements->Controls->Add(this->textBox_unknown_29);
		this->groupBox_requirements->Controls->Add(this->label72);
		this->groupBox_requirements->Controls->Add(this->checkBox_unknown_28_01);
		this->groupBox_requirements->Controls->Add(this->label71);
		this->groupBox_requirements->Controls->Add(this->textBox_required_items_unknown);
		this->groupBox_requirements->Controls->Add(this->label70);
		this->groupBox_requirements->Controls->Add(this->checkBox_unknown_28);
		this->groupBox_requirements->Controls->Add(this->checkBox_unknown_27);
		this->groupBox_requirements->Controls->Add(this->label64);
		this->groupBox_requirements->Controls->Add(this->label62);
		this->groupBox_requirements->Controls->Add(this->textBox_instant_pay_coins);
		this->groupBox_requirements->Controls->Add(this->label65);
		this->groupBox_requirements->Controls->Add(this->textBox_subQuestFirst);
		this->groupBox_requirements->Controls->Add(this->label52);
		this->groupBox_requirements->Controls->Add(this->textBox_nextQuest);
		this->groupBox_requirements->Controls->Add(this->label51);
		this->groupBox_requirements->Controls->Add(this->textBox_previousQuest);
		this->groupBox_requirements->Controls->Add(this->label50);
		this->groupBox_requirements->Controls->Add(this->textBox_parentQuest);
		this->groupBox_requirements->Controls->Add(this->label49);
		this->groupBox_requirements->Location = System::Drawing::Point(5, 1355);
		this->groupBox_requirements->Name = L"groupBox_requirements";
		this->groupBox_requirements->Size = System::Drawing::Size(596, 253);
		this->groupBox_requirements->TabIndex = 2;
		this->groupBox_requirements->TabStop = false;
		this->groupBox_requirements->Text = L"REQUIREMENTS";
		// 
		// textBox_given_items_unknown
		// 
		this->textBox_given_items_unknown->Location = System::Drawing::Point(151, 166);
		this->textBox_given_items_unknown->Name = L"textBox_given_items_unknown";
		this->textBox_given_items_unknown->Size = System::Drawing::Size(60, 20);
		this->textBox_given_items_unknown->TabIndex = 155;
		// 
		// label129
		// 
		this->label129->AutoSize = true;
		this->label129->Location = System::Drawing::Point(10, 169);
		this->label129->Name = L"label129";
		this->label129->Size = System::Drawing::Size(115, 13);
		this->label129->TabIndex = 154;
		this->label129->Text = L"Given Items Unknown:";
		// 
		// textBox_unknown_30
		// 
		this->textBox_unknown_30->Location = System::Drawing::Point(151, 140);
		this->textBox_unknown_30->Name = L"textBox_unknown_30";
		this->textBox_unknown_30->Size = System::Drawing::Size(60, 20);
		this->textBox_unknown_30->TabIndex = 153;
		// 
		// label73
		// 
		this->label73->AutoSize = true;
		this->label73->Location = System::Drawing::Point(7, 138);
		this->label73->Name = L"label73";
		this->label73->Size = System::Drawing::Size(71, 13);
		this->label73->TabIndex = 152;
		this->label73->Text = L"Unknown 30:";
		// 
		// textBox_unknown_29
		// 
		this->textBox_unknown_29->Location = System::Drawing::Point(151, 114);
		this->textBox_unknown_29->Name = L"textBox_unknown_29";
		this->textBox_unknown_29->Size = System::Drawing::Size(60, 20);
		this->textBox_unknown_29->TabIndex = 151;
		// 
		// label72
		// 
		this->label72->AutoSize = true;
		this->label72->Location = System::Drawing::Point(10, 114);
		this->label72->Name = L"label72";
		this->label72->Size = System::Drawing::Size(71, 13);
		this->label72->TabIndex = 150;
		this->label72->Text = L"Unknown 29:";
		// 
		// checkBox_unknown_28_01
		// 
		this->checkBox_unknown_28_01->AutoSize = true;
		this->checkBox_unknown_28_01->Location = System::Drawing::Point(102, 92);
		this->checkBox_unknown_28_01->Name = L"checkBox_unknown_28_01";
		this->checkBox_unknown_28_01->Size = System::Drawing::Size(15, 14);
		this->checkBox_unknown_28_01->TabIndex = 149;
		this->checkBox_unknown_28_01->UseVisualStyleBackColor = true;
		// 
		// label71
		// 
		this->label71->AutoSize = true;
		this->label71->Location = System::Drawing::Point(11, 92);
		this->label71->Name = L"label71";
		this->label71->Size = System::Drawing::Size(86, 13);
		this->label71->TabIndex = 148;
		this->label71->Text = L"Unknown 28 01:";
		// 
		// textBox_required_items_unknown
		// 
		this->textBox_required_items_unknown->Location = System::Drawing::Point(144, 44);
		this->textBox_required_items_unknown->Name = L"textBox_required_items_unknown";
		this->textBox_required_items_unknown->Size = System::Drawing::Size(60, 20);
		this->textBox_required_items_unknown->TabIndex = 147;
		// 
		// label70
		// 
		this->label70->AutoSize = true;
		this->label70->Location = System::Drawing::Point(3, 44);
		this->label70->Name = L"label70";
		this->label70->Size = System::Drawing::Size(130, 13);
		this->label70->TabIndex = 146;
		this->label70->Text = L"Required Items Unknown:";
		// 
		// checkBox_unknown_28
		// 
		this->checkBox_unknown_28->AutoSize = true;
		this->checkBox_unknown_28->Location = System::Drawing::Point(96, 69);
		this->checkBox_unknown_28->Name = L"checkBox_unknown_28";
		this->checkBox_unknown_28->Size = System::Drawing::Size(15, 14);
		this->checkBox_unknown_28->TabIndex = 145;
		this->checkBox_unknown_28->UseVisualStyleBackColor = true;
		// 
		// checkBox_unknown_27
		// 
		this->checkBox_unknown_27->AutoSize = true;
		this->checkBox_unknown_27->Location = System::Drawing::Point(93, 18);
		this->checkBox_unknown_27->Name = L"checkBox_unknown_27";
		this->checkBox_unknown_27->Size = System::Drawing::Size(15, 14);
		this->checkBox_unknown_27->TabIndex = 144;
		this->checkBox_unknown_27->UseVisualStyleBackColor = true;
		// 
		// label64
		// 
		this->label64->AutoSize = true;
		this->label64->Location = System::Drawing::Point(5, 69);
		this->label64->Name = L"label64";
		this->label64->Size = System::Drawing::Size(71, 13);
		this->label64->TabIndex = 70;
		this->label64->Text = L"Unknown 28:";
		// 
		// label62
		// 
		this->label62->AutoSize = true;
		this->label62->Location = System::Drawing::Point(10, 19);
		this->label62->Name = L"label62";
		this->label62->Size = System::Drawing::Size(71, 13);
		this->label62->TabIndex = 69;
		this->label62->Text = L"Unknown 27:";
		// 
		// textBox_instant_pay_coins
		// 
		this->textBox_instant_pay_coins->Location = System::Drawing::Point(151, 192);
		this->textBox_instant_pay_coins->Name = L"textBox_instant_pay_coins";
		this->textBox_instant_pay_coins->Size = System::Drawing::Size(60, 20);
		this->textBox_instant_pay_coins->TabIndex = 68;
		// 
		// label65
		// 
		this->label65->AutoSize = true;
		this->label65->Location = System::Drawing::Point(11, 195);
		this->label65->Name = L"label65";
		this->label65->Size = System::Drawing::Size(92, 13);
		this->label65->TabIndex = 67;
		this->label65->Text = L"Instant Pay Coins:";
		// 
		// textBox_subQuestFirst
		// 
		this->textBox_subQuestFirst->Location = System::Drawing::Point(524, 45);
		this->textBox_subQuestFirst->Name = L"textBox_subQuestFirst";
		this->textBox_subQuestFirst->Size = System::Drawing::Size(60, 20);
		this->textBox_subQuestFirst->TabIndex = 64;
		// 
		// label52
		// 
		this->label52->AutoSize = true;
		this->label52->Location = System::Drawing::Point(435, 48);
		this->label52->Name = L"label52";
		this->label52->Size = System::Drawing::Size(85, 13);
		this->label52->TabIndex = 63;
		this->label52->Text = L"SubQuest (First):";
		// 
		// textBox_nextQuest
		// 
		this->textBox_nextQuest->Location = System::Drawing::Point(526, 97);
		this->textBox_nextQuest->Name = L"textBox_nextQuest";
		this->textBox_nextQuest->Size = System::Drawing::Size(60, 20);
		this->textBox_nextQuest->TabIndex = 66;
		// 
		// label51
		// 
		this->label51->AutoSize = true;
		this->label51->Location = System::Drawing::Point(437, 100);
		this->label51->Name = L"label51";
		this->label51->Size = System::Drawing::Size(63, 13);
		this->label51->TabIndex = 65;
		this->label51->Text = L"Next Quest:";
		// 
		// textBox_previousQuest
		// 
		this->textBox_previousQuest->Location = System::Drawing::Point(526, 71);
		this->textBox_previousQuest->Name = L"textBox_previousQuest";
		this->textBox_previousQuest->Size = System::Drawing::Size(60, 20);
		this->textBox_previousQuest->TabIndex = 62;
		// 
		// label50
		// 
		this->label50->AutoSize = true;
		this->label50->Location = System::Drawing::Point(436, 74);
		this->label50->Name = L"label50";
		this->label50->Size = System::Drawing::Size(82, 13);
		this->label50->TabIndex = 61;
		this->label50->Text = L"Previous Quest:";
		// 
		// textBox_parentQuest
		// 
		this->textBox_parentQuest->Location = System::Drawing::Point(523, 19);
		this->textBox_parentQuest->Name = L"textBox_parentQuest";
		this->textBox_parentQuest->Size = System::Drawing::Size(60, 20);
		this->textBox_parentQuest->TabIndex = 60;
		// 
		// label49
		// 
		this->label49->AutoSize = true;
		this->label49->Location = System::Drawing::Point(435, 22);
		this->label49->Name = L"label49";
		this->label49->Size = System::Drawing::Size(72, 13);
		this->label49->TabIndex = 59;
		this->label49->Text = L"Parent Quest:";
		// 
		// groupBox_general
		// 
		this->groupBox_general->Controls->Add(this->textBox_unknown_09);
		this->groupBox_general->Controls->Add(this->label90);
		this->groupBox_general->Controls->Add(this->textBox_unknown_08);
		this->groupBox_general->Controls->Add(this->label89);
		this->groupBox_general->Controls->Add(this->dataGridView_date_fail);
		this->groupBox_general->Controls->Add(this->label88);
		this->groupBox_general->Controls->Add(this->label87);
		this->groupBox_general->Controls->Add(this->label86);
		this->groupBox_general->Controls->Add(this->label83);
		this->groupBox_general->Controls->Add(this->label82);
		this->groupBox_general->Controls->Add(this->checkBox_unknown_03);
		this->groupBox_general->Controls->Add(this->checkBox_unknown_02);
		this->groupBox_general->Controls->Add(this->textBox_unknown_06);
		this->groupBox_general->Controls->Add(this->label85);
		this->groupBox_general->Controls->Add(this->textBox_unknown_07);
		this->groupBox_general->Controls->Add(this->textBox_unknown_05);
		this->groupBox_general->Controls->Add(this->label76);
		this->groupBox_general->Controls->Add(this->label84);
		this->groupBox_general->Controls->Add(this->textBox_unknown_04);
		this->groupBox_general->Controls->Add(this->label31);
		this->groupBox_general->Controls->Add(this->checkBox_has_date_spans);
		this->groupBox_general->Controls->Add(this->dataGridView_date_spans);
		this->groupBox_general->Controls->Add(this->checkBox_has_date_fail);
		this->groupBox_general->Controls->Add(this->textBox_unknown_01);
		this->groupBox_general->Controls->Add(this->label81);
		this->groupBox_general->Controls->Add(this->label28);
		this->groupBox_general->Controls->Add(this->textBox_id);
		this->groupBox_general->Controls->Add(this->label55);
		this->groupBox_general->Controls->Add(this->comboBox_type);
		this->groupBox_general->Controls->Add(this->label29);
		this->groupBox_general->Controls->Add(this->textBox_name);
		this->groupBox_general->Controls->Add(this->textBox_author_text);
		this->groupBox_general->Controls->Add(this->checkBox_author_mode);
		this->groupBox_general->Controls->Add(this->label32);
		this->groupBox_general->Controls->Add(this->textBox_time_limit);
		this->groupBox_general->Location = System::Drawing::Point(5, 3);
		this->groupBox_general->Name = L"groupBox_general";
		this->groupBox_general->Size = System::Drawing::Size(656, 531);
		this->groupBox_general->TabIndex = 0;
		this->groupBox_general->TabStop = false;
		this->groupBox_general->Text = L"GENERAL";
		// 
		// textBox_unknown_09
		// 
		this->textBox_unknown_09->Location = System::Drawing::Point(95, 501);
		this->textBox_unknown_09->Name = L"textBox_unknown_09";
		this->textBox_unknown_09->Size = System::Drawing::Size(228, 20);
		this->textBox_unknown_09->TabIndex = 70;
		this->textBox_unknown_09->Leave += gcnew System::EventHandler(this, &MainWindow::change_unknown_09);
		// 
		// label90
		// 
		this->label90->AutoSize = true;
		this->label90->ForeColor = System::Drawing::Color::Gray;
		this->label90->Location = System::Drawing::Point(6, 504);
		this->label90->Name = L"label90";
		this->label90->Size = System::Drawing::Size(71, 13);
		this->label90->TabIndex = 69;
		this->label90->Text = L"Unknown 09:";
		// 
		// textBox_unknown_08
		// 
		this->textBox_unknown_08->Location = System::Drawing::Point(95, 475);
		this->textBox_unknown_08->Name = L"textBox_unknown_08";
		this->textBox_unknown_08->Size = System::Drawing::Size(228, 20);
		this->textBox_unknown_08->TabIndex = 68;
		this->textBox_unknown_08->Leave += gcnew System::EventHandler(this, &MainWindow::change_unknown_08);
		// 
		// label89
		// 
		this->label89->AutoSize = true;
		this->label89->Location = System::Drawing::Point(6, 478);
		this->label89->Name = L"label89";
		this->label89->Size = System::Drawing::Size(71, 13);
		this->label89->TabIndex = 67;
		this->label89->Text = L"Unknown 08:";
		// 
		// dataGridView_date_fail
		// 
		this->dataGridView_date_fail->AllowUserToAddRows = false;
		this->dataGridView_date_fail->AllowUserToDeleteRows = false;
		this->dataGridView_date_fail->BackgroundColor = System::Drawing::SystemColors::Control;
		this->dataGridView_date_fail->BorderStyle = System::Windows::Forms::BorderStyle::None;
		this->dataGridView_date_fail->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
		this->dataGridView_date_fail->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
		this->dataGridView_date_fail->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {this->dataGridViewTextBoxColumn32, 
			this->dataGridViewTextBoxColumn33, this->dataGridViewTextBoxColumn34, this->dataGridViewTextBoxColumn35, this->dataGridViewTextBoxColumn36, 
			this->Column1});
		this->dataGridView_date_fail->Location = System::Drawing::Point(116, 205);
		this->dataGridView_date_fail->MultiSelect = false;
		this->dataGridView_date_fail->Name = L"dataGridView_date_fail";
		this->dataGridView_date_fail->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
		dataGridViewCellStyle136->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
		dataGridViewCellStyle136->BackColor = System::Drawing::SystemColors::Control;
		dataGridViewCellStyle136->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, 
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
		dataGridViewCellStyle136->ForeColor = System::Drawing::SystemColors::WindowText;
		dataGridViewCellStyle136->SelectionBackColor = System::Drawing::SystemColors::Highlight;
		dataGridViewCellStyle136->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
		dataGridViewCellStyle136->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
		this->dataGridView_date_fail->RowHeadersDefaultCellStyle = dataGridViewCellStyle136;
		this->dataGridView_date_fail->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToFirstHeader;
		this->dataGridView_date_fail->RowTemplate->Height = 18;
		this->dataGridView_date_fail->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
		this->dataGridView_date_fail->Size = System::Drawing::Size(207, 43);
		this->dataGridView_date_fail->TabIndex = 66;
		this->dataGridView_date_fail->CellValueChanged += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MainWindow::change_date_fail);
		// 
		// dataGridViewTextBoxColumn32
		// 
		this->dataGridViewTextBoxColumn32->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
		dataGridViewCellStyle66->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
		this->dataGridViewTextBoxColumn32->DefaultCellStyle = dataGridViewCellStyle66;
		this->dataGridViewTextBoxColumn32->HeaderText = L"Y";
		this->dataGridViewTextBoxColumn32->Name = L"dataGridViewTextBoxColumn32";
		this->dataGridViewTextBoxColumn32->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
		// 
		// dataGridViewTextBoxColumn33
		// 
		dataGridViewCellStyle131->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
		this->dataGridViewTextBoxColumn33->DefaultCellStyle = dataGridViewCellStyle131;
		this->dataGridViewTextBoxColumn33->HeaderText = L"M";
		this->dataGridViewTextBoxColumn33->Name = L"dataGridViewTextBoxColumn33";
		this->dataGridViewTextBoxColumn33->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
		this->dataGridViewTextBoxColumn33->Width = 21;
		// 
		// dataGridViewTextBoxColumn34
		// 
		dataGridViewCellStyle132->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
		this->dataGridViewTextBoxColumn34->DefaultCellStyle = dataGridViewCellStyle132;
		this->dataGridViewTextBoxColumn34->HeaderText = L"D";
		this->dataGridViewTextBoxColumn34->Name = L"dataGridViewTextBoxColumn34";
		this->dataGridViewTextBoxColumn34->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
		this->dataGridViewTextBoxColumn34->Width = 20;
		// 
		// dataGridViewTextBoxColumn35
		// 
		dataGridViewCellStyle133->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
		this->dataGridViewTextBoxColumn35->DefaultCellStyle = dataGridViewCellStyle133;
		this->dataGridViewTextBoxColumn35->HeaderText = L"H";
		this->dataGridViewTextBoxColumn35->Name = L"dataGridViewTextBoxColumn35";
		this->dataGridViewTextBoxColumn35->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
		this->dataGridViewTextBoxColumn35->Width = 20;
		// 
		// dataGridViewTextBoxColumn36
		// 
		dataGridViewCellStyle134->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
		this->dataGridViewTextBoxColumn36->DefaultCellStyle = dataGridViewCellStyle134;
		this->dataGridViewTextBoxColumn36->HeaderText = L"M";
		this->dataGridViewTextBoxColumn36->Name = L"dataGridViewTextBoxColumn36";
		this->dataGridViewTextBoxColumn36->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
		this->dataGridViewTextBoxColumn36->Width = 21;
		// 
		// Column1
		// 
		this->Column1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
		dataGridViewCellStyle135->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
		this->Column1->DefaultCellStyle = dataGridViewCellStyle135;
		this->Column1->HeaderText = L"d";
		this->Column1->Items->AddRange(gcnew cli::array< System::Object^  >(8) {L"ALL", L"Mon", L"Tue", L"Wed", L"Thu", L"Fri", L"Sat", 
			L"Sun"});
		this->Column1->Name = L"Column1";
		this->Column1->Resizable = System::Windows::Forms::DataGridViewTriState::True;
		this->Column1->Width = 18;
		// 
		// label88
		// 
		this->label88->AutoSize = true;
		this->label88->Location = System::Drawing::Point(6, 283);
		this->label88->Name = L"label88";
		this->label88->Size = System::Drawing::Size(59, 13);
		this->label88->TabIndex = 65;
		this->label88->Text = L"Date Valid:";
		// 
		// label87
		// 
		this->label87->AutoSize = true;
		this->label87->ForeColor = System::Drawing::Color::Gray;
		this->label87->Location = System::Drawing::Point(6, 257);
		this->label87->Name = L"label87";
		this->label87->Size = System::Drawing::Size(74, 13);
		this->label87->TabIndex = 64;
		this->label87->Text = L"Unknown_03:";
		// 
		// label86
		// 
		this->label86->AutoSize = true;
		this->label86->ForeColor = System::Drawing::Color::Gray;
		this->label86->Location = System::Drawing::Point(6, 205);
		this->label86->Name = L"label86";
		this->label86->Size = System::Drawing::Size(52, 13);
		this->label86->TabIndex = 63;
		this->label86->Text = L"Date Fail:";
		// 
		// label83
		// 
		this->label83->AutoSize = true;
		this->label83->ForeColor = System::Drawing::Color::Gray;
		this->label83->Location = System::Drawing::Point(6, 179);
		this->label83->Name = L"label83";
		this->label83->Size = System::Drawing::Size(74, 13);
		this->label83->TabIndex = 62;
		this->label83->Text = L"Unknown_02:";
		// 
		// label82
		// 
		this->label82->AutoSize = true;
		this->label82->Location = System::Drawing::Point(6, 74);
		this->label82->Name = L"label82";
		this->label82->Size = System::Drawing::Size(65, 13);
		this->label82->TabIndex = 61;
		this->label82->Text = L"Author Text:";
		// 
		// checkBox_unknown_03
		// 
		this->checkBox_unknown_03->AutoSize = true;
		this->checkBox_unknown_03->ForeColor = System::Drawing::Color::Gray;
		this->checkBox_unknown_03->Location = System::Drawing::Point(95, 257);
		this->checkBox_unknown_03->Name = L"checkBox_unknown_03";
		this->checkBox_unknown_03->Size = System::Drawing::Size(15, 14);
		this->checkBox_unknown_03->TabIndex = 60;
		this->checkBox_unknown_03->UseVisualStyleBackColor = true;
		this->checkBox_unknown_03->CheckedChanged += gcnew System::EventHandler(this, &MainWindow::change_unknown_03);
		// 
		// checkBox_unknown_02
		// 
		this->checkBox_unknown_02->AutoSize = true;
		this->checkBox_unknown_02->ForeColor = System::Drawing::Color::Gray;
		this->checkBox_unknown_02->Location = System::Drawing::Point(95, 179);
		this->checkBox_unknown_02->Name = L"checkBox_unknown_02";
		this->checkBox_unknown_02->Size = System::Drawing::Size(15, 14);
		this->checkBox_unknown_02->TabIndex = 59;
		this->checkBox_unknown_02->UseVisualStyleBackColor = true;
		this->checkBox_unknown_02->CheckedChanged += gcnew System::EventHandler(this, &MainWindow::change_unknown_02);
		// 
		// textBox_unknown_06
		// 
		this->textBox_unknown_06->Location = System::Drawing::Point(95, 423);
		this->textBox_unknown_06->Name = L"textBox_unknown_06";
		this->textBox_unknown_06->Size = System::Drawing::Size(228, 20);
		this->textBox_unknown_06->TabIndex = 58;
		this->textBox_unknown_06->Leave += gcnew System::EventHandler(this, &MainWindow::change_unknown_06);
		// 
		// label85
		// 
		this->label85->AutoSize = true;
		this->label85->ForeColor = System::Drawing::Color::Gray;
		this->label85->Location = System::Drawing::Point(6, 426);
		this->label85->Name = L"label85";
		this->label85->Size = System::Drawing::Size(74, 13);
		this->label85->TabIndex = 57;
		this->label85->Text = L"Unknown_06:";
		// 
		// textBox_unknown_05
		// 
		this->textBox_unknown_05->Location = System::Drawing::Point(95, 397);
		this->textBox_unknown_05->Name = L"textBox_unknown_05";
		this->textBox_unknown_05->Size = System::Drawing::Size(228, 20);
		this->textBox_unknown_05->TabIndex = 56;
		this->textBox_unknown_05->Leave += gcnew System::EventHandler(this, &MainWindow::change_unknown_05);
		// 
		// label84
		// 
		this->label84->AutoSize = true;
		this->label84->Location = System::Drawing::Point(6, 400);
		this->label84->Name = L"label84";
		this->label84->Size = System::Drawing::Size(74, 13);
		this->label84->TabIndex = 55;
		this->label84->Text = L"Unknown_05:";
		// 
		// textBox_unknown_04
		// 
		this->textBox_unknown_04->Location = System::Drawing::Point(95, 371);
		this->textBox_unknown_04->Name = L"textBox_unknown_04";
		this->textBox_unknown_04->Size = System::Drawing::Size(228, 20);
		this->textBox_unknown_04->TabIndex = 54;
		this->textBox_unknown_04->Leave += gcnew System::EventHandler(this, &MainWindow::change_unknown_04);
		// 
		// label31
		// 
		this->label31->AutoSize = true;
		this->label31->Location = System::Drawing::Point(6, 374);
		this->label31->Name = L"label31";
		this->label31->Size = System::Drawing::Size(74, 13);
		this->label31->TabIndex = 53;
		this->label31->Text = L"Unknown_04:";
		// 
		// checkBox_has_date_spans
		// 
		this->checkBox_has_date_spans->AutoSize = true;
		this->checkBox_has_date_spans->Location = System::Drawing::Point(95, 283);
		this->checkBox_has_date_spans->Name = L"checkBox_has_date_spans";
		this->checkBox_has_date_spans->Size = System::Drawing::Size(15, 14);
		this->checkBox_has_date_spans->TabIndex = 48;
		this->checkBox_has_date_spans->UseVisualStyleBackColor = true;
		this->checkBox_has_date_spans->CheckedChanged += gcnew System::EventHandler(this, &MainWindow::change_has_date_spans);
		// 
		// checkBox_has_date_fail
		// 
		this->checkBox_has_date_fail->AutoSize = true;
		this->checkBox_has_date_fail->ForeColor = System::Drawing::Color::Gray;
		this->checkBox_has_date_fail->Location = System::Drawing::Point(95, 205);
		this->checkBox_has_date_fail->Name = L"checkBox_has_date_fail";
		this->checkBox_has_date_fail->Size = System::Drawing::Size(15, 14);
		this->checkBox_has_date_fail->TabIndex = 47;
		this->checkBox_has_date_fail->UseVisualStyleBackColor = true;
		this->checkBox_has_date_fail->CheckedChanged += gcnew System::EventHandler(this, &MainWindow::change_has_date_fail);
		// 
		// textBox_unknown_01
		// 
		this->textBox_unknown_01->Location = System::Drawing::Point(95, 97);
		this->textBox_unknown_01->Name = L"textBox_unknown_01";
		this->textBox_unknown_01->Size = System::Drawing::Size(115, 20);
		this->textBox_unknown_01->TabIndex = 41;
		this->textBox_unknown_01->Leave += gcnew System::EventHandler(this, &MainWindow::change_unknown_01);
		// 
		// label81
		// 
		this->label81->AutoSize = true;
		this->label81->Location = System::Drawing::Point(6, 100);
		this->label81->Name = L"label81";
		this->label81->Size = System::Drawing::Size(74, 13);
		this->label81->TabIndex = 40;
		this->label81->Text = L"Unknown_01:";
		// 
		// checkBox_unknown_31
		// 
		this->checkBox_unknown_31->AutoSize = true;
		this->checkBox_unknown_31->Location = System::Drawing::Point(146, 218);
		this->checkBox_unknown_31->Name = L"checkBox_unknown_31";
		this->checkBox_unknown_31->Size = System::Drawing::Size(15, 14);
		this->checkBox_unknown_31->TabIndex = 157;
		this->checkBox_unknown_31->UseVisualStyleBackColor = true;
		// 
		// label130
		// 
		this->label130->AutoSize = true;
		this->label130->Location = System::Drawing::Point(55, 218);
		this->label130->Name = L"label130";
		this->label130->Size = System::Drawing::Size(71, 13);
		this->label130->TabIndex = 156;
		this->label130->Text = L"Unknown 31:";
		// 
		// textBox_requiredReputation
		// 
		this->textBox_requiredReputation->Location = System::Drawing::Point(312, 16);
		this->textBox_requiredReputation->Name = L"textBox_requiredReputation";
		this->textBox_requiredReputation->Size = System::Drawing::Size(81, 20);
		this->textBox_requiredReputation->TabIndex = 159;
		// 
		// label38
		// 
		this->label38->AutoSize = true;
		this->label38->Location = System::Drawing::Point(241, 19);
		this->label38->Name = L"label38";
		this->label38->Size = System::Drawing::Size(62, 13);
		this->label38->TabIndex = 158;
		this->label38->Text = L"Reputation:";
		// 
		// textBox_unknown_32
		// 
		this->textBox_unknown_32->Location = System::Drawing::Point(333, 45);
		this->textBox_unknown_32->Name = L"textBox_unknown_32";
		this->textBox_unknown_32->Size = System::Drawing::Size(60, 20);
		this->textBox_unknown_32->TabIndex = 161;
		// 
		// label131
		// 
		this->label131->AutoSize = true;
		this->label131->Location = System::Drawing::Point(241, 51);
		this->label131->Name = L"label131";
		this->label131->Size = System::Drawing::Size(71, 13);
		this->label131->TabIndex = 160;
		this->label131->Text = L"Unknown 32:";
		// 
		// checkBox_unknown_33
		// 
		this->checkBox_unknown_33->AutoSize = true;
		this->checkBox_unknown_33->Location = System::Drawing::Point(333, 71);
		this->checkBox_unknown_33->Name = L"checkBox_unknown_33";
		this->checkBox_unknown_33->Size = System::Drawing::Size(15, 14);
		this->checkBox_unknown_33->TabIndex = 163;
		this->checkBox_unknown_33->UseVisualStyleBackColor = true;
		// 
		// label132
		// 
		this->label132->AutoSize = true;
		this->label132->Location = System::Drawing::Point(242, 71);
		this->label132->Name = L"label132";
		this->label132->Size = System::Drawing::Size(71, 13);
		this->label132->TabIndex = 162;
		this->label132->Text = L"Unknown 33:";
		// 
		// label41
		// 
		this->label41->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
		this->label41->AutoSize = true;
		this->label41->Cursor = System::Windows::Forms::Cursors::Help;
		this->label41->Location = System::Drawing::Point(238, 96);
		this->label41->Name = L"label41";
		this->label41->Size = System::Drawing::Size(85, 13);
		this->label41->TabIndex = 164;
		this->label41->Text = L"Finished Quests:";
		this->toolTip->SetToolTip(this->label41, L"The Quest can only be activated if the following quests are completed");
		// 
		// textBox_required_quests_done_1
		// 
		this->textBox_required_quests_done_1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
		this->textBox_required_quests_done_1->Location = System::Drawing::Point(333, 89);
		this->textBox_required_quests_done_1->Name = L"textBox_required_quests_done_1";
		this->textBox_required_quests_done_1->Size = System::Drawing::Size(81, 20);
		this->textBox_required_quests_done_1->TabIndex = 165;
		// 
		// textBox_required_quests_done_2
		// 
		this->textBox_required_quests_done_2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
		this->textBox_required_quests_done_2->Location = System::Drawing::Point(333, 115);
		this->textBox_required_quests_done_2->Name = L"textBox_required_quests_done_2";
		this->textBox_required_quests_done_2->Size = System::Drawing::Size(81, 20);
		this->textBox_required_quests_done_2->TabIndex = 166;
		// 
		// textBox_required_quests_done_3
		// 
		this->textBox_required_quests_done_3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
		this->textBox_required_quests_done_3->Location = System::Drawing::Point(333, 141);
		this->textBox_required_quests_done_3->Name = L"textBox_required_quests_done_3";
		this->textBox_required_quests_done_3->Size = System::Drawing::Size(81, 20);
		this->textBox_required_quests_done_3->TabIndex = 167;
		// 
		// textBox_required_quests_done_4
		// 
		this->textBox_required_quests_done_4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
		this->textBox_required_quests_done_4->Location = System::Drawing::Point(333, 167);
		this->textBox_required_quests_done_4->Name = L"textBox_required_quests_done_4";
		this->textBox_required_quests_done_4->Size = System::Drawing::Size(81, 20);
		this->textBox_required_quests_done_4->TabIndex = 168;
		// 
		// textBox_required_quests_done_5
		// 
		this->textBox_required_quests_done_5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
		this->textBox_required_quests_done_5->Location = System::Drawing::Point(333, 193);
		this->textBox_required_quests_done_5->Name = L"textBox_required_quests_done_5";
		this->textBox_required_quests_done_5->Size = System::Drawing::Size(81, 20);
		this->textBox_required_quests_done_5->TabIndex = 169;
		// 
		// MainWindow
		// 
		this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		this->ClientSize = System::Drawing::Size(912, 653);
		this->Controls->Add(this->comboBox_search);
		this->Controls->Add(this->treeView_tasks);
		this->Controls->Add(this->button_search);
		this->Controls->Add(this->panel_task);
		this->Controls->Add(this->progressBar_progress);
		this->Controls->Add(this->menuStrip_mainMenu);
		this->Controls->Add(this->textBox_search);
		this->MinimumSize = System::Drawing::Size(920, 680);
		this->Name = L"MainWindow";
		this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
		this->Text = L" sTASKedit";
		this->menuStrip_mainMenu->ResumeLayout(false);
		this->menuStrip_mainMenu->PerformLayout();
		this->contextMenuStrip_date_spans->ResumeLayout(false);
		this->contextMenuStrip_task->ResumeLayout(false);
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView_date_spans))->EndInit();
		this->groupBox_required_items->ResumeLayout(false);
		this->groupBox_required_items->PerformLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView_requiredItems))->EndInit();
		this->groupBox_team_members->ResumeLayout(false);
		this->groupBox_team_members->PerformLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView_team))->EndInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView_rewardItems))->EndInit();
		this->groupBox_given_items->ResumeLayout(false);
		this->groupBox_given_items->PerformLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView_givenItems))->EndInit();
		this->groupBox_reward_groups->ResumeLayout(false);
		this->groupBox_reward_groups->PerformLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown_timeFactor))->EndInit();
		this->groupBox_reward->ResumeLayout(false);
		this->groupBox_reward->PerformLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown_rewardGroups))->EndInit();
		this->groupBox_conversation->ResumeLayout(false);
		this->groupBox_conversation->PerformLayout();
		this->groupBox_answers->ResumeLayout(false);
		this->groupBox_answers->PerformLayout();
		this->contextMenuStrip_conversation->ResumeLayout(false);
		this->groupBox_questions->ResumeLayout(false);
		this->groupBox_questions->PerformLayout();
		this->groupBox_dialogs->ResumeLayout(false);
		this->groupBox_dialogs->PerformLayout();
		this->panel_task->ResumeLayout(false);
		this->groupBox1->ResumeLayout(false);
		this->groupBox1->PerformLayout();
		this->groupBox_prerequisites->ResumeLayout(false);
		this->groupBox_prerequisites->PerformLayout();
		this->groupBox_skills->ResumeLayout(false);
		this->groupBox_skills->PerformLayout();
		this->groupBox_occupations->ResumeLayout(false);
		this->groupBox_occupations->PerformLayout();
		this->groupBox_valid_location->ResumeLayout(false);
		this->groupBox_valid_location->PerformLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView_valid_location_spans))->EndInit();
		this->contextMenuStrip_valid_location->ResumeLayout(false);
		this->groupBox_unknown_location->ResumeLayout(false);
		this->groupBox_unknown_location->PerformLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView_unknown_location_spans))->EndInit();
		this->contextMenuStrip_unknown_location->ResumeLayout(false);
		this->groupBox_trigger_location->ResumeLayout(false);
		this->groupBox_trigger_location->PerformLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView_trigger_location_spans))->EndInit();
		this->contextMenuStrip_trigger_location->ResumeLayout(false);
		this->groupBox_required_to_do->ResumeLayout(false);
		this->groupBox_required_to_do->PerformLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView_chase))->EndInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView_getItems))->EndInit();
		this->groupBox_flags->ResumeLayout(false);
		this->groupBox_flags->PerformLayout();
		this->groupBox_requirements->ResumeLayout(false);
		this->groupBox_requirements->PerformLayout();
		this->groupBox_general->ResumeLayout(false);
		this->groupBox_general->PerformLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView_date_fail))->EndInit();
		this->ResumeLayout(false);
		this->PerformLayout();

	}

#pragma endregion

	private: System::Void click_load(System::Object^  sender, System::EventArgs^  e)
	{
		OpenFileDialog^ load = gcnew OpenFileDialog();
		load->Filter = "Tasks File (*.data)|*.data|All Files (*.*)|*.*";
		if(load->ShowDialog() == Windows::Forms::DialogResult::OK && File::Exists(load->FileName))
		{
			try
			{
				Cursor = Windows::Forms::Cursors::WaitCursor;
				progressBar_progress->Style = ProgressBarStyle::Marquee;

				treeView_tasks->Nodes->Clear();
				treeView_tasks->BeginUpdate();

				FileStream^ fr = File::OpenRead(load->FileName);
				BinaryReader^ br = gcnew BinaryReader(fr);

				int stamp = br->ReadInt32();
				int version = br->ReadInt32();

				if(version != 55 && version != 56 && version != 89 && version != 90 && version != 92 && version != 93 && version != 100)
				{
					br->Close();
					fr->Close();
					treeView_tasks->EndUpdate();
					progressBar_progress->Style = ProgressBarStyle::Continuous;
					Cursor = Windows::Forms::Cursors::Default;
					MessageBox::Show("Version Unsupported");
					return;
				}

				int count = br->ReadInt32();

				array<int>^ ItemStreamPositions = gcnew array<int>(count);

				for(int i=0; i<count; i++)
				{
					ItemStreamPositions[i] = br->ReadInt32();
				}

				Tasks = gcnew array<Task^>(count);

				Application::DoEvents();

				for(int i=0; i<count; i++)
				{
					Application::DoEvents();

					Tasks[i] = gcnew Task(version, br, ItemStreamPositions[i], treeView_tasks->Nodes);
				}

				br->Close();
				fr->Close();

				treeView_tasks->EndUpdate();
				treeView_tasks->SelectedNode = treeView_tasks->Nodes[0];

				this->Text = " sTASKedit (" + load->FileName + ")";

				progressBar_progress->Style = ProgressBarStyle::Continuous;
				Cursor = Windows::Forms::Cursors::Default;

				MessageBox::Show("Version: " + version.ToString() + "\n\nIt is not recommend exporting to a higher version!\nExporting to a higher version will fill new fields with default values which may corrupt the file.", "Loading Complete");
			}
			catch(Exception^ e)
			{
				treeView_tasks->EndUpdate();
				progressBar_progress->Style = ProgressBarStyle::Continuous;
				Cursor = Windows::Forms::Cursors::Default;
				MessageBox::Show("IMPORT ERROR!\n\n" + e->Message);
			}
		}
	}

	private: System::Void click_save(System::Object^  sender, System::EventArgs^  e)
	{
		// Leave Focus to ensure all changes are saved...
		menuStrip_mainMenu->Focus();

		SaveFileDialog^ save = gcnew SaveFileDialog();
		save->Filter = "Tasks File (*.data)|*.data|All Files (*.*)|*.*";
		if(save->ShowDialog() == Windows::Forms::DialogResult::OK && save->FileName != "")
		{
			try
			{
				Cursor = Windows::Forms::Cursors::WaitCursor;
				progressBar_progress->Style = ProgressBarStyle::Marquee;

				int stamp = 0;
				int version = 0;
				if((ToolStripMenuItem^)sender == ToolStripMenuItem_v55){stamp = -1819966623; version = 55;}
				if((ToolStripMenuItem^)sender == ToolStripMenuItem_v56){stamp = -1819966623; version = 56;}
				if((ToolStripMenuItem^)sender == ToolStripMenuItem_v93){stamp = -1819966623; version = 93;}
				if((ToolStripMenuItem^)sender == ToolStripMenuItem_v100){stamp = -1819966623; version = 100;}

				FileStream^ fs = gcnew FileStream(save->FileName, FileMode::Create, FileAccess::Write);
				BinaryWriter^ bw = gcnew BinaryWriter(fs);

				bw->Write(stamp);
				bw->Write(version);
				bw->Write(Tasks->Length);

				array<int>^ ItemStreamPositions = gcnew array<int>(Tasks->Length);

				// write placeholder
				bw->Write(gcnew array<unsigned char>(4*Tasks->Length));

				for(int i=0; i<Tasks->Length; i++)
				{
					Application::DoEvents();
					ItemStreamPositions[i] = (int)bw->BaseStream->Position;
					Tasks[i]->Save(version, bw);
				}

				// insert into placeholder
				bw->BaseStream->Position = 12;
				for(int i=0; i<ItemStreamPositions->Length; i++)
				{
					bw->Write(ItemStreamPositions[i]);
				}

				bw->Close();
				fs->Close();

				progressBar_progress->Style = ProgressBarStyle::Continuous;
				Cursor = Windows::Forms::Cursors::Default;
			}
			catch(Exception^ e)
			{
				progressBar_progress->Style = ProgressBarStyle::Continuous;
				Cursor = Windows::Forms::Cursors::Default;
				MessageBox::Show("EXPORT ERROR!\n\n" + e->Message);
			}
		}
	}

	private: System::Void select_task(System::Object^  sender, System::Windows::Forms::TreeViewEventArgs^  e)
	{
		ArrayList^ task_index_path = gcnew ArrayList();
		TreeNode^ node = ((TreeView^)sender)->SelectedNode;
		while(node->Parent != nullptr)
		{
			task_index_path->Add(node->Index);
			node = node->Parent;
		}

		SelectedTask = Tasks[node->Index];
		
		for(int i=task_index_path->Count-1; i>=0; i--)
		{
			SelectedTask = SelectedTask->sub_quests[(int)task_index_path[i]];
		}

		// general
		textBox_id->Text = SelectedTask->ID.ToString();
		textBox_name->Text = SelectedTask->Name;
		checkBox_author_mode->Checked = SelectedTask->author_mode;
		textBox_author_text->Text = SelectedTask->AuthorText;
		textBox_unknown_01->Text = ByteArray_to_HexString(SelectedTask->UNKNOWN_01);
		comboBox_type->SelectedIndex = SelectedTask->type;
		textBox_time_limit->Text = SelectedTask->time_limit.ToString();
		checkBox_unknown_02->Checked = SelectedTask->UNKNOWN_02;
		checkBox_has_date_fail->Checked = SelectedTask->has_date_fail;
		dataGridView_date_fail->Rows->Clear();
		for(int r=0; r<1; r++)
		{
			try
			{
				dataGridView_date_fail->Rows->Add(gcnew array<String^>
				{
					SelectedTask->date_fail->year.ToString(),
					SelectedTask->date_fail->month.ToString(),
					SelectedTask->date_fail->day.ToString(),
					SelectedTask->date_fail->hour.ToString(),
					SelectedTask->date_fail->minute.ToString(),
					Column1->Items[SelectedTask->date_fail->weekday]->ToString()
				}
				);
			}
			catch(...)
			{
				MessageBox::Show("ERROR Loading Date Fail!");
			}
		}
		checkBox_unknown_03->Checked = SelectedTask->UNKNOWN_03;
		checkBox_has_date_spans->Checked = SelectedTask->has_date_spans;
		dataGridView_date_spans->Rows->Clear();
		for(int r=0; r<SelectedTask->date_spans->Length; r++)
		{
			try
			{
				dataGridView_date_spans->Rows->Add(gcnew array<String^>
				{
					SelectedTask->date_spans[r]->from->year.ToString(),
					SelectedTask->date_spans[r]->from->month.ToString(),
					SelectedTask->date_spans[r]->from->day.ToString(),
					SelectedTask->date_spans[r]->from->hour.ToString(),
					SelectedTask->date_spans[r]->from->minute.ToString(),
					Column6->Items[SelectedTask->date_spans[r]->from->weekday]->ToString(),
					"to",
					SelectedTask->date_spans[r]->to->year.ToString(),
					SelectedTask->date_spans[r]->to->month.ToString(),
					SelectedTask->date_spans[r]->to->day.ToString(),
					SelectedTask->date_spans[r]->to->hour.ToString(),
					SelectedTask->date_spans[r]->to->minute.ToString(),
					Column13->Items[SelectedTask->date_spans[r]->to->weekday]->ToString()
				}
				);
			}
			catch(...)
			{
				MessageBox::Show("ERROR Loading Date Span!");
			}
		}
		textBox_unknown_04->Text = ByteArray_to_HexString(SelectedTask->UNKNOWN_04);
		textBox_unknown_05->Text = ByteArray_to_HexString(SelectedTask->UNKNOWN_05);
		textBox_unknown_06->Text = ByteArray_to_HexString(SelectedTask->UNKNOWN_06);
		textBox_unknown_07->Text = ByteArray_to_HexString(SelectedTask->UNKNOWN_07);
		textBox_unknown_08->Text = SelectedTask->UNKNOWN_08.ToString();
		textBox_unknown_09->Text = SelectedTask->UNKNOWN_09.ToString();
		// flags
		checkBox_activate_first_subquest->Checked = SelectedTask->activate_first_subquest;
		checkBox_activate_random_subquest->Checked = SelectedTask->activate_random_subquest;
		checkBox_activate_next_subquest->Checked = SelectedTask->activate_next_subquest;
		checkBox_on_give_up_parent_fails->Checked = SelectedTask->on_give_up_parent_fails;
		checkBox_on_success_parent_success->Checked = SelectedTask->on_success_parent_success;
		checkBox_can_give_up->Checked = SelectedTask->can_give_up;
		checkBox_repeatable->Checked = SelectedTask->repeatable;
		checkBox_repeatable_after_failure->Checked = SelectedTask->repeatable_after_failure;
		checkBox_fail_on_death->Checked = SelectedTask->fail_on_death;
		checkBox_on_fail_parent_fail->Checked = SelectedTask->on_fail_parent_fail;
		checkBox_unknown_10->Checked = SelectedTask->UNKNOWN_10;
		checkBox_unknown_11->Checked = SelectedTask->UNKNOWN_11;
		checkBox_unknown_12->Checked = SelectedTask->UNKNOWN_12;
		checkBox_unknown_13->Checked = SelectedTask->UNKNOWN_13;
		checkBox_unknown_14->Checked = SelectedTask->UNKNOWN_14;
		// trigger locations
		checkBox_trigger_locations_has_spans->Checked = SelectedTask->trigger_locations->has_location;
		textBox_trigger_locations_map_id->Text = SelectedTask->trigger_locations->map_id.ToString();
		textBox_trigger_locations_unknown_1->Text = ByteArray_to_HexString(SelectedTask->trigger_locations->unknown_1);
		dataGridView_trigger_location_spans->Rows->Clear();
		for(int r=0; r<SelectedTask->trigger_locations->spans->Length; r++)
		{
			try
			{
				dataGridView_trigger_location_spans->Rows->Add(gcnew array<String^>
				{
					SelectedTask->trigger_locations->spans[r]->north.ToString("F3"),
					SelectedTask->trigger_locations->spans[r]->south.ToString("F3"),
					SelectedTask->trigger_locations->spans[r]->west.ToString("F3"),
					SelectedTask->trigger_locations->spans[r]->east.ToString("F3"),
					SelectedTask->trigger_locations->spans[r]->bottom.ToString("F3"),
					SelectedTask->trigger_locations->spans[r]->top.ToString("F3")
				}
				);
			}
			catch(...)
			{
				MessageBox::Show("ERROR Loading Location Span!");
			}
		}
		// unknown locations
		checkBox_unknown_locations_has_spans->Checked = SelectedTask->unknown_locations->has_location;
		textBox_unknown_locations_map_id->Text = SelectedTask->unknown_locations->map_id.ToString();
		textBox_unknown_locations_unknown_1->Text = ByteArray_to_HexString(SelectedTask->unknown_locations->unknown_1);
		dataGridView_unknown_location_spans->Rows->Clear();
		for(int r=0; r<SelectedTask->unknown_locations->spans->Length; r++)
		{
			try
			{
				dataGridView_unknown_location_spans->Rows->Add(gcnew array<String^>
				{
					SelectedTask->unknown_locations->spans[r]->north.ToString("F3"),
					SelectedTask->unknown_locations->spans[r]->south.ToString("F3"),
					SelectedTask->unknown_locations->spans[r]->west.ToString("F3"),
					SelectedTask->unknown_locations->spans[r]->east.ToString("F3"),
					SelectedTask->unknown_locations->spans[r]->bottom.ToString("F3"),
					SelectedTask->unknown_locations->spans[r]->top.ToString("F3")
				}
				);
			}
			catch(...)
			{
				MessageBox::Show("ERROR Loading Location Span!");
			}
		}
		// valid locations
		checkBox_valid_locations_has_spans->Checked = SelectedTask->valid_locations->has_location;
		textBox_valid_locations_map_id->Text = SelectedTask->valid_locations->map_id.ToString();
		textBox_valid_locations_unknown_1->Text = ByteArray_to_HexString(SelectedTask->valid_locations->unknown_1);
		dataGridView_valid_location_spans->Rows->Clear();
		for(int r=0; r<SelectedTask->valid_locations->spans->Length; r++)
		{
			try
			{
				dataGridView_valid_location_spans->Rows->Add(gcnew array<String^>
				{
					SelectedTask->valid_locations->spans[r]->north.ToString("F3"),
					SelectedTask->valid_locations->spans[r]->south.ToString("F3"),
					SelectedTask->valid_locations->spans[r]->west.ToString("F3"),
					SelectedTask->valid_locations->spans[r]->east.ToString("F3"),
					SelectedTask->valid_locations->spans[r]->bottom.ToString("F3"),
					SelectedTask->valid_locations->spans[r]->top.ToString("F3")
				}
				);
			}
			catch(...)
			{
				MessageBox::Show("ERROR Loading Location Span!");
			}
		}
		// basic I
		checkBox_unknown_17->Checked = SelectedTask->UNKNOWN_17;
		checkBox_has_instant_teleport->Checked = SelectedTask->has_instant_teleport;
		textBox_instant_teleport_location_map_id->Text = SelectedTask->instant_teleport_location->map_id.ToString();
		textBox_instant_teleport_location_x->Text = SelectedTask->instant_teleport_location->x.ToString("F3");
		textBox_instant_teleport_location_alt->Text = SelectedTask->instant_teleport_location->altitude.ToString("F3");
		textBox_instant_teleport_location_z->Text = SelectedTask->instant_teleport_location->z.ToString("F3");
		textBox_ai_trigger->Text = SelectedTask->ai_trigger.ToString();
		checkBox_unknown_18->Checked = SelectedTask->UNKNOWN_18;
		checkBox_unknown_19->Checked = SelectedTask->UNKNOWN_19;
		checkBox_unknown_20->Checked = SelectedTask->UNKNOWN_20;
		checkBox_unknown_21->Checked = SelectedTask->UNKNOWN_21;
		checkBox_unknown_22->Checked = SelectedTask->UNKNOWN_22;
		checkBox_unknown_23->Checked = SelectedTask->UNKNOWN_23;
		textBox_unknown_level->Text = SelectedTask->UNKNOWN_LEVEL.ToString();
		checkBox_mark_available_icon->Checked = SelectedTask->mark_available_icon;
		checkBox_mark_available_point->Checked = SelectedTask->mark_available_point;
		textBox_quest_npc->Text = SelectedTask->quest_npc.ToString();
		textBox_reward_npc->Text = SelectedTask->reward_npc.ToString();
		checkBox_craft_skill->Checked = SelectedTask->craft_skill;
		checkBox_unknown_24->Checked = SelectedTask->UNKNOWN_24;
		checkBox_unknown_25->Checked = SelectedTask->UNKNOWN_25;
		checkBox_unknown_26->Checked = SelectedTask->UNKNOWN_26;
		textBox_unknown_26_01->Text = ByteArray_to_HexString(SelectedTask->UNKNOWN_26_01);
		textBox_level_min->Text = SelectedTask->level_min.ToString();
		textBox_level_max->Text = SelectedTask->level_max.ToString();

		//#####################################################################################
		//#####################################################################################
		//#####################################################################################

//		textBox_unknownLevel->Text = SelectedTask->UNKNOWN_LEVEL.ToString();
//		textBox_questNPC->Text = SelectedTask->quest_npc.ToString();
//		textBox_rewardNPC->Text = SelectedTask->reward_npc.ToString();
//		textBox_minLevel->Text = SelectedTask->level_min.ToString();
//		textBox_maxLevel->Text = SelectedTask->level_max.ToString();
		textBox_requiredReputation->Text = SelectedTask->required_reputation.ToString();
		comboBox_gender->SelectedIndex = SelectedTask->required_gender;

//		textBox_instantPayCoins->Text = SelectedTask->instant_pay_coins.ToString();
//		textBox_instantTeleportMap->Text = SelectedTask->instant_teleport_location->map_id.ToString();
//		textBox_instantTeleportX->Text = SelectedTask->instant_teleport_location->x.ToString("F3");
//		textBox_instantTeleportAltitude->Text = SelectedTask->instant_teleport_location->altitude.ToString("F3");
//		textBox_instantTeleportZ->Text = SelectedTask->instant_teleport_location->z.ToString("F3");

//		textBox_aiTrigger->Text = SelectedTask->ai_trigger.ToString();

//		textBox_requiredQuestDone1->Text = SelectedTask->required_quests_done[0].ToString();
//		textBox_requiredQuestDone2->Text = SelectedTask->required_quests_done[1].ToString();
//		textBox_requiredQuestDone3->Text = SelectedTask->required_quests_done[2].ToString();
//		textBox_requiredQuestDone4->Text = SelectedTask->required_quests_done[3].ToString();
//		textBox_requiredQuestDone5->Text = SelectedTask->required_quests_done[4].ToString();

		checkBox_blademaster->Checked = false;
		checkBox_wizzard->Checked = false;
		checkBox_monk->Checked = false;
		checkBox_venomancer->Checked = false;
		checkBox_barbarian->Checked = false;
		checkBox_genie->Checked = false;
		checkBox_archer->Checked = false;
		checkBox_cleric->Checked = false;

		if(Array::IndexOf(SelectedTask->required_occupations, 0) < SelectedTask->required_occupations_count && Array::IndexOf(SelectedTask->required_occupations, 0) > -1){ checkBox_blademaster->Checked = true; }
		if(Array::IndexOf(SelectedTask->required_occupations, 1) < SelectedTask->required_occupations_count && Array::IndexOf(SelectedTask->required_occupations, 1) > -1){ checkBox_wizzard->Checked = true; }
		if(Array::IndexOf(SelectedTask->required_occupations, 2) < SelectedTask->required_occupations_count && Array::IndexOf(SelectedTask->required_occupations, 2) > -1){ checkBox_monk->Checked = true; }
		if(Array::IndexOf(SelectedTask->required_occupations, 3) < SelectedTask->required_occupations_count && Array::IndexOf(SelectedTask->required_occupations, 3) > -1){ checkBox_venomancer->Checked = true; }
		if(Array::IndexOf(SelectedTask->required_occupations, 4) < SelectedTask->required_occupations_count && Array::IndexOf(SelectedTask->required_occupations, 4) > -1){ checkBox_barbarian->Checked = true; }
		if(Array::IndexOf(SelectedTask->required_occupations, 5) < SelectedTask->required_occupations_count && Array::IndexOf(SelectedTask->required_occupations, 5) > -1){ checkBox_genie->Checked = true; }
		if(Array::IndexOf(SelectedTask->required_occupations, 6) < SelectedTask->required_occupations_count && Array::IndexOf(SelectedTask->required_occupations, 6) > -1){ checkBox_archer->Checked = true; }
		if(Array::IndexOf(SelectedTask->required_occupations, 7) < SelectedTask->required_occupations_count && Array::IndexOf(SelectedTask->required_occupations, 7) > -1){ checkBox_cleric->Checked = true; }

		textBox_requiredQuestUndone1->Text = SelectedTask->required_quests_undone[0].ToString();
		textBox_requiredQuestUndone2->Text = SelectedTask->required_quests_undone[1].ToString();
		textBox_requiredQuestUndone3->Text = SelectedTask->required_quests_undone[2].ToString();
		textBox_requiredQuestUndone4->Text = SelectedTask->required_quests_undone[3].ToString();
		textBox_requiredQuestUndone5->Text = SelectedTask->required_quests_undone[4].ToString();

		textBox_requiredBlacksmith->Text = SelectedTask->required_blacksmith_level.ToString();
		textBox_requiredTailor->Text = SelectedTask->required_tailor_level.ToString();
		textBox_requiredCraftsman->Text = SelectedTask->required_craftsman_level.ToString();
		textBox_requiredApothecary->Text = SelectedTask->required_apothecary_level.ToString();

		textBox_parentQuest->Text = SelectedTask->parent_quest.ToString();
		textBox_previousQuest->Text = SelectedTask->previous_quest.ToString();
		textBox_nextQuest->Text = SelectedTask->next_quest.ToString();
		textBox_subQuestFirst->Text = SelectedTask->sub_quest_first.ToString();
/*
		textBox_triggerLocationMap->Text = SelectedTask->quest_trigger_location->map_id.ToString();
		textBox_triggerLocationEast->Text = SelectedTask->quest_trigger_location->east.ToString("F1");
		textBox_triggerLocationWest->Text = SelectedTask->quest_trigger_location->west.ToString("F1");
		textBox_triggerLocationBottom->Text = SelectedTask->quest_trigger_location->bottom.ToString("F1");
		textBox_triggerLocationTop->Text = SelectedTask->quest_trigger_location->top.ToString("F1");
		textBox_triggerLocationSouth->Text = SelectedTask->quest_trigger_location->south.ToString("F1");
		textBox_triggerLocationNorth->Text = SelectedTask->quest_trigger_location->north.ToString("F1");

		textBox_requiredLocationMap->Text = SelectedTask->required_reach_location->map_id.ToString();
		textBox_requiredLocationEast->Text = SelectedTask->required_reach_location->east.ToString("F1");
		textBox_requiredLocationWest->Text = SelectedTask->required_reach_location->west.ToString("F1");
		textBox_requiredLocationBottom->Text = SelectedTask->required_reach_location->bottom.ToString("F1");
		textBox_requiredLocationTop->Text = SelectedTask->required_reach_location->top.ToString("F1");
		textBox_requiredLocationSouth->Text = SelectedTask->required_reach_location->south.ToString("F1");
		textBox_requiredLocationNorth->Text = SelectedTask->required_reach_location->north.ToString("F1");
		textBox_waitTime->Text = SelectedTask->required_wait_time.ToString();
		textBox_getItemsUnknown->Text = ByteArray_to_HexString(SelectedTask->required_get_items_unknown);
		textBox_chaseUnknown->Text = ByteArray_to_HexString(SelectedTask->required_chases_unknown);
		textBox_requiredCoins->Text = SelectedTask->required_coins.ToString();
		textBox_requiredItemsUnknown->Text = ByteArray_to_HexString(SelectedTask->required_items_unknown);
		textBox_teamMembersUnknown->Text = ByteArray_to_HexString(SelectedTask->required_team_member_groups_unknown);
*/
		textBox_givenItemsUnknown->Text = ByteArray_to_HexString(SelectedTask->given_items_unknown);


// ################# REQUIRED ITEMS #############################

		dataGridView_requiredItems->Rows->Clear();
		for(int r=0; r<SelectedTask->required_items->Length; r++)
		{
			dataGridView_requiredItems->Rows->Add(gcnew array<String^>
			{
				SelectedTask->required_items[r]->id.ToString(),
				SelectedTask->required_items[r]->unknown.ToString(),
				SelectedTask->required_items[r]->amount.ToString(),
				SelectedTask->required_items[r]->probability.ToString("F4")
			}
			);
			//dataGridView_requiredItems->Rows[r]->HeaderCell->Value = r.ToString();
		}

// ################# TEAM MEMBERS #############################

		dataGridView_team->Rows->Clear();
		for(int r=0; r<SelectedTask->required_team_member_groups->Length; r++)
		{
			dataGridView_team->Rows->Add(gcnew array<String^>
			{
				SelectedTask->required_team_member_groups[r]->level_min.ToString(),
				SelectedTask->required_team_member_groups[r]->level_max.ToString(),
				SelectedTask->required_team_member_groups[r]->unknown_1.ToString(),
				SelectedTask->required_team_member_groups[r]->unknown_2.ToString(),
				SelectedTask->required_team_member_groups[r]->unknown_3.ToString(),
				SelectedTask->required_team_member_groups[r]->amount_min.ToString(),
				SelectedTask->required_team_member_groups[r]->amount_max.ToString(),
				SelectedTask->required_team_member_groups[r]->quest.ToString()
			}
			);
			//dataGridView_team->Rows[r]->HeaderCell->Value = r.ToString();
		}

// ################# GET ITEMS #############################

		dataGridView_getItems->Rows->Clear();
		for(int r=0; r<SelectedTask->required_get_items->Length; r++)
		{
			dataGridView_getItems->Rows->Add(gcnew array<String^>
			{
				SelectedTask->required_get_items[r]->id.ToString(),
				SelectedTask->required_get_items[r]->unknown.ToString(),
				SelectedTask->required_get_items[r]->amount.ToString(),
				SelectedTask->required_get_items[r]->probability.ToString("F4")
			}
			);
			//dataGridView_getItems->Rows[r]->HeaderCell->Value = r.ToString();
		}

// ################# CHASE #############################

		dataGridView_chase->Rows->Clear();
		for(int r=0; r<SelectedTask->required_chases->Length; r++)
		{
			dataGridView_chase->Rows->Add(gcnew array<String^>
			{
				SelectedTask->required_chases[r]->id_monster.ToString(),
				SelectedTask->required_chases[r]->amount_monster.ToString(),
				SelectedTask->required_chases[r]->id_drop.ToString(),
				SelectedTask->required_chases[r]->amount_drop.ToString(),
				SelectedTask->required_chases[r]->unknown_1.ToString(),
				SelectedTask->required_chases[r]->probability.ToString("F4"),
				SelectedTask->required_chases[r]->unknown_2.ToString()
			}
			);
			//dataGridView_chase->Rows[r]->HeaderCell->Value = r.ToString();
		}

// ################# GIVEN ITEMS #############################

		dataGridView_givenItems->Rows->Clear();
		for(int r=0; r<SelectedTask->given_items->Length; r++)
		{
			dataGridView_givenItems->Rows->Add(gcnew array<String^>
			{
				SelectedTask->given_items[r]->id.ToString(),
				SelectedTask->given_items[r]->unknown.ToString(),
				SelectedTask->given_items[r]->amount.ToString(),
				SelectedTask->given_items[r]->probability.ToString("F4")
			}
			);
			//dataGridView_givenItems->Rows[r]->HeaderCell->Value = r.ToString();
		}

// ################# REWARDS #############################

		listBox_rewardTimed->Items->Clear();
		for(int i=0; i<SelectedTask->rewards_timed->Length; i++)
		{
			listBox_rewardTimed->Items->Add("Success Time [sec]: " + (SelectedTask->time_limit*SelectedTask->rewards_timed_factors[i]));
		}
		select_Reward(nullptr, nullptr);

// ################# CONVERSATION #############################

		textBox_conversationPrompt->Text = SelectedTask->conversation->PromptText;
		textBox_conversationText->Text = SelectedTask->conversation->GeneralText;

		textBox_answerText->Clear();
		textBox_answerQlink->Clear();
		textBox_answerTlink->Clear();
		listBox_answers->Items->Clear();

		textBox_questionText->Clear();
		textBox_questionID->Clear();
		textBox_questionPrevious->Clear();
		listBox_questions->Items->Clear();

		textBox_dialogText->Clear();
		textBox_dialogUnknown->Clear();
		listBox_dialogs->SelectedIndex = -1;
	}

	private: System::Void click_cloneTask(System::Object^  sender, System::EventArgs^  e)
	{
		if(treeView_tasks->SelectedNode)
		{
			try
			{
				ArrayList^ task_index_path = gcnew ArrayList();
				TreeNode^ node = ((TreeView^)contextMenuStrip_task->SourceControl)->SelectedNode;

				while(node->Parent != nullptr)
				{
					task_index_path->Add(node->Index);
					node = node->Parent;
				}

				if(task_index_path->Count == 0)
				{
					array<Task^>^ temp = gcnew array<Task^>(Tasks->Length+1);
					temp[0] = Tasks[node->Index]->Clone();
					Array::Copy(Tasks, 0, temp, 1, Tasks->Length);
					Tasks = temp;

					treeView_tasks->Nodes->Insert(0, (TreeNode^)treeView_tasks->SelectedNode->Clone());
					treeView_tasks->SelectedNode = treeView_tasks->Nodes[0];
				}
				else
				{
					Task^ parent = Tasks[node->Index];
		
					for(int i=task_index_path->Count-1; i>0; i--)
					{
						parent = parent->sub_quests[(int)task_index_path[i]];
					}

					parent->sub_quest_count++;
					array<Task^>^ temp = gcnew array<Task^>(parent->sub_quests->Length+1);
					Array::Copy(parent->sub_quests, 0, temp, 0, parent->sub_quests->Length);
					temp[temp->Length-1] = parent->sub_quests[(int)task_index_path[0]]->Clone();
					parent->sub_quests = temp;

// Update all links (parent, subquest, next, previous) for all affected quests...
					MessageBox::Show("NOTE:\nPlease check association like \"Next Quest\" and \"Previous Quest\" of all affected quests!");

					treeView_tasks->SelectedNode->Parent->Nodes->Add((TreeNode^)treeView_tasks->SelectedNode->Clone());
				}							
			}
			catch(Exception^ e)
			{
				MessageBox::Show("ERROR\n" + e->Message);
			}
		}
	}
	private: System::Void click_deleteTask(System::Object^  sender, System::EventArgs^  e)
	{
		if(treeView_tasks->SelectedNode)
		{
			try
			{
				ArrayList^ task_index_path = gcnew ArrayList();
				TreeNode^ node = ((TreeView^)contextMenuStrip_task->SourceControl)->SelectedNode;

				while(node->Parent != nullptr)
				{
					task_index_path->Add(node->Index);
					node = node->Parent;
				}

				if(task_index_path->Count == 0)
				{
					array<Task^>^ temp = gcnew array<Task^>(Tasks->Length-1);
					Array::Copy(Tasks, 0, temp, 0, node->Index);
					Array::Copy(Tasks, node->Index+1, temp, node->Index, Tasks->Length-1 - node->Index);
					Tasks = temp;
				}
				else
				{
					Task^ parent = Tasks[node->Index];
		
					for(int i=task_index_path->Count-1; i>0; i--)
					{
						parent = parent->sub_quests[(int)task_index_path[i]];
					}

					parent->sub_quest_count--;
					array<Task^>^ temp = gcnew array<Task^>(parent->sub_quests->Length-1);
					Array::Copy(parent->sub_quests, 0, temp, 0, (int)task_index_path[0]);
					Array::Copy(parent->sub_quests, (int)task_index_path[0]+1, temp, (int)task_index_path[0], parent->sub_quests->Length-1 - (int)task_index_path[0]);
					parent->sub_quests = temp;

// Update all links (parent, subquest, next, previous) for all affected quests...
					MessageBox::Show("NOTE:\nPlease check association like \"Next Quest\" and \"Previous Quest\" of all affected quests!");
				}				

				// Remove node from treeview
				treeView_tasks->SelectedNode->Remove();
			}
			catch(Exception^ e)
			{
				MessageBox::Show("ERROR\n" + e->Message);
			}
		}
		// after deletion: select task above or below if possible...
	}

	private: System::Void click_ExportTask(System::Object^  sender, System::EventArgs^  e)
	{
		/*
		SaveFileDialog^ qSave = gcnew SaveFileDialog();
		qSave->Filter = "RAW Binary File (*.data)|*.data|All Files (*.*)|*.*";
		if(qSave->ShowDialog() == Windows::Forms::DialogResult::OK && qSave->FileName != "")
		{
			try
			{
				Cursor = Windows::Forms::Cursors::AppStarting;
				
				int version = 56;
				FileStream^ fs = gcnew FileStream(qSave->FileName, FileMode::Create, FileAccess::Write);
				BinaryWriter^ bw = gcnew BinaryWriter(fs);
				SelectedTask->Save(version, bw);
				bw->Close();
				fs->Close();

				Cursor = Windows::Forms::Cursors::Default;
			}
			catch(...)
			{
				MessageBox::Show("EXPORT ERROR!\nExporting item to binary file failed!");
				Cursor = Windows::Forms::Cursors::Default;
			}
		}
		*/
	}
	private: System::Void click_ImportTask(System::Object^  sender, System::EventArgs^  e)
	{
		/*
		OpenFileDialog^ qLoad = gcnew OpenFileDialog();
		qLoad->Filter = "RAW Binary File (*.data)|*.data|All Files (*.*)|*.*";
		if(qLoad->ShowDialog() == Windows::Forms::DialogResult::OK && File::Exists(qLoad->FileName))
		{
			try
			{
				Cursor = Windows::Forms::Cursors::AppStarting;

				int version = 56;
				FileStream^ fr = File::OpenRead(qLoad->FileName);
				BinaryReader^ br = gcnew BinaryReader(fr);
				array<Task^>^ temp = gcnew array<Task^>(Tasks->Length+1);
				temp[temp->Length-1] = gcnew Task(version, br, 0, treeView_tasks->Nodes);
				Array::Copy(Tasks, 0, temp, 0, Tasks->Length);
				Tasks = temp;
				br->Close();
				fr->Close();

				treeView_tasks->SelectedNode = treeView_tasks->Nodes[treeView_tasks->Nodes->Count-1];

				Cursor = Windows::Forms::Cursors::Default;
			}
			catch(...)
			{
				MessageBox::Show("IMPORT ERROR!\nCheck if the item version matches tasks.data version 1.3.6!");
				Cursor = Windows::Forms::Cursors::Default;
			}
		}
		*/
	}
	private: System::Void keyPress_search(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
	{
		if(e->KeyChar == (wchar_t)Keys::Enter)
		{
			click_search(nullptr, nullptr);
		}
	}
	private: System::Void click_search(System::Object^  sender, System::EventArgs^  e)
	{
		if(treeView_tasks->Nodes->Count>0)
		{
			array<int>^ indices = next_treeNode();

			// while there is a next task
			while(indices->Length > 0)
			{
				// search success
				if(search(indices))
				{
					return;
				}
				indices = next_task(indices);
			}

			MessageBox::Show("Search reached end of List without result");
		}
	}

	// return an array of indices for the next node after the selected in the tree view
	private: array<int>^ next_treeNode()
	{
		array<int>^ indices = gcnew array<int>{0};

		if(treeView_tasks->SelectedNode->Index > -1)
		{
			indices = gcnew array<int>(treeView_tasks->SelectedNode->Level+1);
			bool foundNext = false;
			TreeNode^ node = treeView_tasks->SelectedNode;

			// search through parents
			for(int i=indices->Length-1; i>-1; i--)
			{
				indices[i] = node->Index;

				if(node == treeView_tasks->SelectedNode && treeView_tasks->SelectedNode->Nodes->Count > 0)
				{
					foundNext = true;
				}
				if(!foundNext)
				{
					if(node->NextNode)
					{
						indices[i]++;
						foundNext = true;
					}
					else
					{
						Array::Resize(indices, indices->Length-1);
					}
				}

				node = node->Parent;
			}

			node = treeView_tasks->SelectedNode;

			// search through children
			while(node->Nodes->Count > 0)
			{
				Array::Resize(indices, indices->Length+1);
				indices[indices->Length-1] = 0;
				node = node->Nodes[0];
			}
		}

		return indices;
	}

	// returns the task depending on the array of indices to the current path
	private: Task^ current_task(array<int>^ currentIndices)
	{
		if(currentIndices->Length > 0)
		{
			// get the task from indices path
			Task^ t = Tasks[currentIndices[0]];
			for(int i=1; i<currentIndices->Length; i++)
			{
				t = t->sub_quests[currentIndices[i]];
			}
			return t;
		}
		return nullptr;
	}
	// return an array of indices for the next task depending on the array of indices to the current path
	private: array<int>^ next_task(array<int>^ currentIndices)
	{
		if(currentIndices->Length > 0)
		{
			array<int>^ indices = gcnew array<int>(currentIndices->Length);

			// get the task from indices path
			Task^ t = current_task(currentIndices);

			currentIndices->CopyTo(indices, 0);

			// select the next subtask, if available
			if(t->sub_quest_count > 0)
			{
				Array::Resize(indices, indices->Length+1);
				indices[indices->Length-1] = 0;
				return indices;
			}

			// search through parents
			for(int i=indices->Length-1; i>0; i--)
			{
				// check if the current task has a successor
				if(current_task(indices)->next_quest != 0)
				{
					indices[i]++;
					return indices;
				}
				else
				{
					Array::Resize(indices, indices->Length-1);
				}
			}

			// we end up in root task tree
			// at this point indices should have a length of exactly 1
			// we return incremented indices[0] if possible
			if(indices[0] < Tasks->Length-1)
			{
				indices[0]++;
				return indices;
			}
		}

		return gcnew array<int>(0);
	}

	// return the path of indices to the child task that contains the pattern
	private: bool search(array<int>^ indices)
	{
		if(indices->Length > 0)
		{
			// get the task from indices path
			Task^ t = current_task(indices);
			if(!t)
			{
				return false;
			}
			// check search options for this path
			if(comboBox_search->SelectedItem == "ID" && t->ID.ToString() == textBox_search->Text)
			{
				select_treeNode(indices);
				return true;
			}
			if(comboBox_search->SelectedItem == "Name" && t->Name->Contains(textBox_search->Text))
			{
				select_treeNode(indices);
				return true;
			}
			if( (comboBox_search->SelectedItem == "Creature Builder ID") && ((t->ai_trigger.ToString() == textBox_search->Text) || (t->reward_success->aiTrigger.ToString() == textBox_search->Text) || (t->reward_failed->aiTrigger.ToString() == textBox_search->Text)) )
			{
				select_treeNode(indices);
				return true;
			}
		}

		return false; // no entry found
	}

	// select the treenode that corresponds to array of indices
	private: System::Void select_treeNode(array<int>^ indices)
	{
		if(indices->Length > 0)
		{
			TreeNode^ node = treeView_tasks->Nodes[indices[0]];
			for(int i=1; i<indices->Length; i++)
			{
				node = node->Nodes[indices[i]];
			}
			treeView_tasks->SelectedNode = node;
		}
	}

	private: System::Void click_split(System::Object^  sender, System::EventArgs^  e)
	{
		OpenFileDialog^ load = gcnew OpenFileDialog();
		load->Filter = "Tasks File (*.data)|*.data|All Files (*.*)|*.*";
		if(load->ShowDialog() == Windows::Forms::DialogResult::OK && File::Exists(load->FileName))
		{
			FolderBrowserDialog^ save = gcnew FolderBrowserDialog();

			if(save->ShowDialog() == Windows::Forms::DialogResult::OK && Directory::Exists(save->SelectedPath))
			{
				try
				{
					Cursor = Windows::Forms::Cursors::WaitCursor;
					progressBar_progress->Style = ProgressBarStyle::Marquee;

					int count;
					int value;

					FileStream^ fr = File::OpenRead(load->FileName);
					BinaryReader^ br = gcnew BinaryReader(fr);

					value = br->ReadInt32();
					value = br->ReadInt32()-1;
					count = br->ReadInt32();

					array<int>^ ItemStreamPositions = gcnew array<int>(count);

					for(int i=0; i<count; i++)
					{
						ItemStreamPositions[i] = br->ReadInt32();
					}

					for(int i=0; i<count; i++)
					{
						br->BaseStream->Position = ItemStreamPositions[i];
						int id = br->ReadInt32();

						br->BaseStream->Position = ItemStreamPositions[i];

						FileStream^ fw = gcnew FileStream(save->SelectedPath + "\\" + id + ".data", FileMode::Create, FileAccess::Write);
						//FileStream^ fw = gcnew FileStream(save->SelectedPath + "\\cn.client.tasks." + i, FileMode::Create, FileAccess::Write);
						BinaryWriter^ bw = gcnew BinaryWriter(fw);

						int bytes = (int)(br->BaseStream->Length-1 - ItemStreamPositions[i]);
						if(i<count-1)
						{
							bytes = ItemStreamPositions[i+1] - ItemStreamPositions[i];
						}

						bw->Write(br->ReadBytes(bytes));

						bw->Close();
						fw->Close();
					}

					br->Close();
					fr->Close();

					progressBar_progress->Style = ProgressBarStyle::Continuous;
					Cursor = Windows::Forms::Cursors::Default;
				}
				catch(...)
				{
					progressBar_progress->Style = ProgressBarStyle::Continuous;
					Cursor = Windows::Forms::Cursors::Default;
					MessageBox::Show("EXPORT ERROR!\nNo information available");
				}
			}
		}
	}



//##########################################################################
//##########################################################################
//##########################################################################



	private: System::Void select_Dialog(System::Object^  sender, System::EventArgs^  e)
	{
		int d = listBox_dialogs->SelectedIndex;

		if(SelectedTask && d>-1)
		{
			textBox_dialogUnknown->Text = SelectedTask->conversation->dialogs[d]->unknown.ToString();
			textBox_dialogText->Text = SelectedTask->conversation->dialogs[d]->DialogText;
			textBox_questionText->Clear();
			textBox_questionID->Clear();
			textBox_questionPrevious->Clear();
			listBox_questions->Items->Clear();
			for(int q=0; q<SelectedTask->conversation->dialogs[d]->question_count; q++)
			{
				listBox_questions->Items->Add("[" + SelectedTask->conversation->dialogs[d]->questions[q]->question_id + "] Question");
			}
			textBox_answerText->Clear();
			listBox_answers->Items->Clear();
		}
	}

	private: System::Void select_Question(System::Object^  sender, System::EventArgs^  e)
	{
		int d = listBox_dialogs->SelectedIndex;
		int q = listBox_questions->SelectedIndex;

		if(SelectedTask && d>-1 && q>-1)
		{
			textBox_questionText->Text = SelectedTask->conversation->dialogs[d]->questions[q]->QuestionText;
			textBox_questionID->Text = SelectedTask->conversation->dialogs[d]->questions[q]->question_id.ToString();
			textBox_questionPrevious->Text = SelectedTask->conversation->dialogs[d]->questions[q]->previous_question.ToString();
			textBox_answerText->Clear();
			textBox_answerQlink->Clear();
			textBox_answerTlink->Clear();
			listBox_answers->Items->Clear();
			for(int a=0; a<SelectedTask->conversation->dialogs[d]->questions[q]->answer_count; a++)
			{
				listBox_answers->Items->Add("[" + (a+1) + "] Answer");
			}
		}
	}
	private: System::Void select_Answer(System::Object^  sender, System::EventArgs^  e)
	{
		int d = listBox_dialogs->SelectedIndex;
		int q = listBox_questions->SelectedIndex;
		int a = listBox_answers->SelectedIndex;

		if(SelectedTask && d>-1 && q>-1 && a>-1)
		{
			textBox_answerText->Text = SelectedTask->conversation->dialogs[d]->questions[q]->answers[a]->AnswerText;
			textBox_answerQlink->Text = SelectedTask->conversation->dialogs[d]->questions[q]->answers[a]->question_link.ToString();
			textBox_answerTlink->Text = SelectedTask->conversation->dialogs[d]->questions[q]->answers[a]->task_link.ToString();
		}
	}

	private: System::Void select_Reward(System::Object^  sender, System::EventArgs^  e)
	{
		/*
		if(SelectedTask)
		{
			Reward^ reward;

			if(radioButton_success->Checked)
			{
				listBox_rewardTimed->Enabled = false;
				numericUpDown_timeFactor->Enabled = false;
				reward = SelectedTask->reward_success;
			}
			if(radioButton_failed->Checked)
			{
				listBox_rewardTimed->Enabled = false;
				numericUpDown_timeFactor->Enabled = false;
				reward = SelectedTask->reward_failed;
			}
			if(radioButton_timed->Checked)
			{
				listBox_rewardTimed->Enabled = true;
				numericUpDown_timeFactor->Enabled = true;
				if(listBox_rewardTimed->SelectedIndex>-1)
				{
					reward = SelectedTask->rewards_timed[listBox_rewardTimed->SelectedIndex];
					numericUpDown_timeFactor->Value = Convert::ToDecimal(SelectedTask->rewards_timed_factors[listBox_rewardTimed->SelectedIndex]);
				}
			}

			if(reward)
			{
				textBox_rewardCoins->Text = reward->coins.ToString();
				textBox_rewardEXP->Text = reward->experience.ToString();
				textBox_rewardSP->Text = reward->spirit.ToString();
				textBox_rewardREP->Text = reward->reputation.ToString();
				textBox_rewardCulti->Text = reward->cultivation.ToString();
				textBox_rewardUnknown1->Text = reward->UNKNOWN_1.ToString();
				textBox_rewardVigor->Text = reward->vigor.ToString();
				textBox_rewardStorage->Text = reward->storage_slots.ToString();
				textBox_rewardInventory->Text = reward->inventory_slots.ToString();
				textBox_rewardPetbag->Text = reward->petbag_slots.ToString();
				textBox_rewardNewQuest->Text = reward->new_quest.ToString();
				textBox_rewardTeleportMap->Text = reward->teleport->map_id.ToString();
				textBox_rewardTeleportX->Text = reward->teleport->x.ToString("F1");
				textBox_rewardTeleportAltitude->Text = reward->teleport->altitude.ToString("F1");
				textBox_rewardTeleportZ->Text = reward->teleport->z.ToString("F1");
				textBox_rewardAITrigger->Text = reward->aiTrigger.ToString();
//				textBox_rewardUnknown2->Text = ByteArray_to_HexString(reward->UNKNOWN_2);
				textBox_rewardSeperator->Text = ByteArray_to_HexString(reward->SEPERATOR);
				numericUpDown_rewardGroups->Value = Convert::ToDecimal(reward->item_groups_count);

				checkedListBox_rewardGroupFlags->Items->Clear();
				dataGridView_rewardItems->Rows->Clear();
				Column_rewardGroups->Items->Clear();
				for(int g=0; g<reward->item_groups->Length; g++)
				{
					Column_rewardGroups->Items->Add(g.ToString());
					checkedListBox_rewardGroupFlags->Items->Add("Group " + g.ToString(), reward->item_groups[g]->unknown);
					for(int r=0; r<reward->item_groups[g]->items->Length; r++)
					{
						dataGridView_rewardItems->Rows->Add(gcnew array<String^>
						{
							g.ToString(),
							reward->item_groups[g]->items[r]->id.ToString(),
							reward->item_groups[g]->items[r]->unknown.ToString(),
							reward->item_groups[g]->items[r]->amount.ToString(),
							reward->item_groups[g]->items[r]->probability.ToString("F4")
						}
						);
						//dataGridView_rewardItems->Rows[r]->HeaderCell->Value = r.ToString();
					}
				}
			}
			else
			{
				textBox_rewardCoins->Clear();
				textBox_rewardEXP->Clear();
				textBox_rewardSP->Clear();
				textBox_rewardREP->Clear();
				textBox_rewardCulti->Clear();
				textBox_rewardUnknown1->Clear();
				textBox_rewardVigor->Clear();
				textBox_rewardStorage->Clear();
				textBox_rewardInventory->Clear();
				textBox_rewardPetbag->Clear();
				textBox_rewardNewQuest->Clear();
				textBox_rewardTeleportMap->Clear();
				textBox_rewardTeleportX->Clear();
				textBox_rewardTeleportAltitude->Clear();
				textBox_rewardTeleportZ->Clear();
				textBox_rewardAITrigger->Clear();
				textBox_rewardUnknown2->Clear();
				textBox_rewardSeperator->Clear();
				dataGridView_rewardItems->Rows->Clear();
			}
		}
		*/
	}
	private: System::Void change_triggerLocation(System::Object^  sender, System::EventArgs^  e)
	{
	/*
		if(SelectedTask)
		{
			try
			{
				if((TextBox^)sender == textBox_triggerLocationMap)
				{
					SelectedTask->quest_trigger_location->map_id = Convert::ToInt32(textBox_triggerLocationMap->Text);
				}
				if((TextBox^)sender == textBox_triggerLocationNorth)
				{
					SelectedTask->quest_trigger_location->north = Convert::ToSingle(textBox_triggerLocationNorth->Text->Replace(",", "."));
				}
				if((TextBox^)sender == textBox_triggerLocationSouth)
				{
					SelectedTask->quest_trigger_location->south = Convert::ToSingle(textBox_triggerLocationSouth->Text->Replace(",", "."));
				}
				if((TextBox^)sender == textBox_triggerLocationWest)
				{
					SelectedTask->quest_trigger_location->west = Convert::ToSingle(textBox_triggerLocationWest->Text->Replace(",", "."));
				}
				if((TextBox^)sender == textBox_triggerLocationEast)
				{
					SelectedTask->quest_trigger_location->east = Convert::ToSingle(textBox_triggerLocationEast->Text->Replace(",", "."));
				}
				if((TextBox^)sender == textBox_triggerLocationTop)
				{
					SelectedTask->quest_trigger_location->top = Convert::ToSingle(textBox_triggerLocationTop->Text->Replace(",", "."));
				}
				if((TextBox^)sender == textBox_triggerLocationBottom)
				{
					SelectedTask->quest_trigger_location->bottom = Convert::ToSingle(textBox_triggerLocationBottom->Text->Replace(",", "."));
				}
			}
			catch(...)
			{
				MessageBox::Show("FORMAT ERROR\nInput value must be in the correct format!");
			}
		}
	*/
	}

	private: System::Void change_required(System::Object^  sender, System::EventArgs^  e)
	{
		/*
		if(SelectedTask)
		{
			try
			{
				if((TextBox^)sender == textBox_requiredLocationMap)
				{
					SelectedTask->required_reach_location->map_id = Convert::ToInt32(textBox_requiredLocationMap->Text);
				}
				if((TextBox^)sender == textBox_requiredLocationNorth)
				{
					SelectedTask->required_reach_location->north = Convert::ToSingle(textBox_requiredLocationNorth->Text->Replace(",", "."));
				}
				if((TextBox^)sender == textBox_requiredLocationSouth)
				{
					SelectedTask->required_reach_location->south = Convert::ToSingle(textBox_requiredLocationSouth->Text->Replace(",", "."));
				}
				if((TextBox^)sender == textBox_requiredLocationWest)
				{
					SelectedTask->required_reach_location->west = Convert::ToSingle(textBox_requiredLocationWest->Text->Replace(",", "."));
				}
				if((TextBox^)sender == textBox_requiredLocationEast)
				{
					SelectedTask->required_reach_location->east = Convert::ToSingle(textBox_requiredLocationEast->Text->Replace(",", "."));
				}
				if((TextBox^)sender == textBox_requiredLocationTop)
				{
					SelectedTask->required_reach_location->top = Convert::ToSingle(textBox_requiredLocationTop->Text->Replace(",", "."));
				}
				if((TextBox^)sender == textBox_requiredLocationBottom)
				{
					SelectedTask->required_reach_location->bottom = Convert::ToSingle(textBox_requiredLocationBottom->Text->Replace(",", "."));
				}
				if((TextBox^)sender == textBox_requiredCoins)
				{
					SelectedTask->required_coins = Convert::ToInt32(textBox_requiredCoins->Text);
				}
				if((TextBox^)sender == textBox_getItemsUnknown)
				{
					SelectedTask->required_get_items_unknown = HexString_to_ByteArray(textBox_getItemsUnknown->Text);
				}
				if((TextBox^)sender == textBox_chaseUnknown)
				{
					SelectedTask->required_chases_unknown = HexString_to_ByteArray(textBox_chaseUnknown->Text);
				}
				if((TextBox^)sender == textBox_requiredItemsUnknown)
				{
					SelectedTask->required_items_unknown = HexString_to_ByteArray(textBox_requiredItemsUnknown->Text);
				}
				if((TextBox^)sender == textBox_teamMembersUnknown)
				{
//					SelectedTask->required_team_member_groups_unknown = HexString_to_ByteArray(textBox_teamMembersUnknown->Text);
				}
			}
			catch(...)
			{
				MessageBox::Show("FORMAT ERROR\nInput value must be in the correct format!");
			}
		}
		*/
	}
	private: System::Void change_waitTime(System::Object^  sender, System::EventArgs^  e)
	{
		/*
		if(SelectedTask)
		{
			try
			{
				SelectedTask->required_wait_time = Convert::ToInt32(textBox_waitTime->Text);
			}
			catch(...)
			{
				MessageBox::Show("FORMAT ERROR\nInput value must be in the correct format!");
			}
		}
		*/
	}

	private: System::Void change_general(System::Object^  sender, System::EventArgs^  e)
	{
		/*
		try
		{
			if(SelectedTask)
			{
				if((Control^)sender == textBox_time_limit)
				{
					SelectedTask->time_limit = Convert::ToInt32(textBox_time_limit->Text);
					// Recalculate time for time based rewards...
					for(int i=0; i<listBox_rewardTimed->Items->Count; i++)
					{
						listBox_rewardTimed->Items[i] = "Success Time [sec]: " + (SelectedTask->time_limit*SelectedTask->rewards_timed_factors[i]);;
					}
				}
				if((Control^)sender == textBox_questNPC)
				{
					SelectedTask->quest_npc = Convert::ToInt32(textBox_questNPC->Text);
				}
				if((Control^)sender == textBox_rewardNPC)
				{
					SelectedTask->reward_npc = Convert::ToInt32(textBox_rewardNPC->Text);
				}
				if((Control^)sender == textBox_minLevel)
				{
					SelectedTask->level_min = Convert::ToInt32(textBox_minLevel->Text);
				}
				if((Control^)sender == textBox_maxLevel)
				{
					SelectedTask->level_max = Convert::ToInt32(textBox_maxLevel->Text);
				}
				if((Control^)sender == textBox_parentQuest)
				{
					SelectedTask->parent_quest = Convert::ToInt32(textBox_parentQuest->Text);
				}
				if((Control^)sender == textBox_subQuestFirst)
				{
					SelectedTask->sub_quest_first = Convert::ToInt32(textBox_subQuestFirst->Text);
				}
				if((Control^)sender == textBox_previousQuest)
				{
					SelectedTask->previous_quest = Convert::ToInt32(textBox_previousQuest->Text);
				}
				if((Control^)sender == textBox_nextQuest)
				{
					SelectedTask->next_quest = Convert::ToInt32(textBox_nextQuest->Text);
				}
				if((Control^)sender == textBox_instantPayCoins)
				{
					SelectedTask->instant_pay_coins = Convert::ToInt32(textBox_instantPayCoins->Text);
				}
				if((Control^)sender == textBox_instantTeleportMap)
				{
					SelectedTask->instant_teleport_location->map_id = Convert::ToInt32(textBox_instantTeleportMap->Text);
				}
				if((Control^)sender == textBox_instantTeleportX)
				{
					SelectedTask->instant_teleport_location->x = Convert::ToSingle(textBox_instantTeleportX->Text);
				}
				if((Control^)sender == textBox_instantTeleportAltitude)
				{
					SelectedTask->instant_teleport_location->altitude = Convert::ToSingle(textBox_instantTeleportAltitude->Text);
				}
				if((Control^)sender == textBox_instantTeleportZ)
				{
					SelectedTask->instant_teleport_location->z = Convert::ToSingle(textBox_instantTeleportZ->Text);
				}
				if((Control^)sender == textBox_aiTrigger)
				{
					SelectedTask->ai_trigger = Convert::ToInt32(textBox_aiTrigger->Text);
				}
				if((Control^)sender == textBox_unknown_07)
				{
//					SelectedTask->UNKNOWN_007 = HexString_to_ByteArray(textBox_unknown_07->Text);
				}
			}
		}
		catch(...)
		{
			MessageBox::Show("FORMAT ERROR\nInput value must be in the correct format!");
		}
		*/
	}

	private: System::Void change_questsDone(System::Object^  sender, System::EventArgs^  e)
	{
		/*
		if(SelectedTask)
		{
			try
			{
				SelectedTask->required_quests_done = gcnew array<int>(5);
				SelectedTask->required_quests_done_count = 0;

				if(Convert::ToInt32(textBox_requiredQuestDone1->Text) > 0)
				{
					SelectedTask->required_quests_done[SelectedTask->required_quests_done_count] = Convert::ToInt32(textBox_requiredQuestDone1->Text);
					SelectedTask->required_quests_done_count++;
				}
				if(Convert::ToInt32(textBox_requiredQuestDone2->Text) > 0)
				{
					SelectedTask->required_quests_done[SelectedTask->required_quests_done_count] = Convert::ToInt32(textBox_requiredQuestDone2->Text);
					SelectedTask->required_quests_done_count++;
				}
				if(Convert::ToInt32(textBox_requiredQuestDone3->Text) > 0)
				{
					SelectedTask->required_quests_done[SelectedTask->required_quests_done_count] = Convert::ToInt32(textBox_requiredQuestDone3->Text);
					SelectedTask->required_quests_done_count++;
				}
				if(Convert::ToInt32(textBox_requiredQuestDone4->Text) > 0)
				{
					SelectedTask->required_quests_done[SelectedTask->required_quests_done_count] = Convert::ToInt32(textBox_requiredQuestDone4->Text);
					SelectedTask->required_quests_done_count++;
				}
				if(Convert::ToInt32(textBox_requiredQuestDone5->Text) > 0)
				{
					SelectedTask->required_quests_done[SelectedTask->required_quests_done_count] = Convert::ToInt32(textBox_requiredQuestDone5->Text);
					SelectedTask->required_quests_done_count++;
				}

				textBox_requiredQuestDone1->Text = SelectedTask->required_quests_done[0].ToString();
				textBox_requiredQuestDone2->Text = SelectedTask->required_quests_done[1].ToString();
				textBox_requiredQuestDone3->Text = SelectedTask->required_quests_done[2].ToString();
				textBox_requiredQuestDone4->Text = SelectedTask->required_quests_done[3].ToString();
				textBox_requiredQuestDone5->Text = SelectedTask->required_quests_done[4].ToString();
			}
			catch(...)
			{
				MessageBox::Show("FORMAT ERROR\nInput value must be in the correct format!");
			}
		}
		*/
	}

	private: System::Void change_questsUndone(System::Object^  sender, System::EventArgs^  e)
	{
		/*
		if(SelectedTask)
		{
			try
			{
				SelectedTask->required_quests_undone = gcnew array<int>(5);
				SelectedTask->required_quests_undone_count = 0;

				if(Convert::ToInt32(textBox_requiredQuestUndone1->Text) > 0)
				{
					SelectedTask->required_quests_undone[SelectedTask->required_quests_undone_count] = Convert::ToInt32(textBox_requiredQuestUndone1->Text);
					SelectedTask->required_quests_undone_count++;
				}
				if(Convert::ToInt32(textBox_requiredQuestUndone2->Text) > 0)
				{
					SelectedTask->required_quests_undone[SelectedTask->required_quests_undone_count] = Convert::ToInt32(textBox_requiredQuestUndone2->Text);
					SelectedTask->required_quests_undone_count++;
				}
				if(Convert::ToInt32(textBox_requiredQuestUndone3->Text) > 0)
				{
					SelectedTask->required_quests_undone[SelectedTask->required_quests_undone_count] = Convert::ToInt32(textBox_requiredQuestUndone3->Text);
					SelectedTask->required_quests_undone_count++;
				}
				if(Convert::ToInt32(textBox_requiredQuestUndone4->Text) > 0)
				{
					SelectedTask->required_quests_undone[SelectedTask->required_quests_undone_count] = Convert::ToInt32(textBox_requiredQuestUndone4->Text);
					SelectedTask->required_quests_undone_count++;
				}
				if(Convert::ToInt32(textBox_requiredQuestUndone5->Text) > 0)
				{
					SelectedTask->required_quests_undone[SelectedTask->required_quests_undone_count] = Convert::ToInt32(textBox_requiredQuestUndone5->Text);
					SelectedTask->required_quests_undone_count++;
				}

				textBox_requiredQuestUndone1->Text = SelectedTask->required_quests_undone[0].ToString();
				textBox_requiredQuestUndone2->Text = SelectedTask->required_quests_undone[1].ToString();
				textBox_requiredQuestUndone3->Text = SelectedTask->required_quests_undone[2].ToString();
				textBox_requiredQuestUndone4->Text = SelectedTask->required_quests_undone[3].ToString();
				textBox_requiredQuestUndone5->Text = SelectedTask->required_quests_undone[4].ToString();
			}
			catch(...)
			{
				MessageBox::Show("FORMAT ERROR\nInput value must be in the correct format!");
			}
		}
		*/
	}
	private: System::Void change_prerequisite(System::Object^  sender, System::EventArgs^  e)
	{
		/*
		if(SelectedTask)
		{
			try
			{
				if((Control^)sender == textBox_requiredReputation)
				{
					SelectedTask->required_reputation = Convert::ToInt32(textBox_requiredReputation->Text);
				}
				if((Control^)sender == textBox_unknownLevel)
				{
					SelectedTask->UNKNOWN_LEVEL = Convert::ToInt32(textBox_unknownLevel->Text);
				}
				if((Control^)sender == comboBox_gender && comboBox_gender->SelectedIndex>-1)
				{
					SelectedTask->required_gender = comboBox_gender->SelectedIndex;
				}
			}
			catch(...)
			{
				MessageBox::Show("FORMAT ERROR\nInput value must be in the correct format!");
			}
		}
		*/
	}
	private: System::Void change_flag(System::Object^  sender, System::EventArgs^  e)
	{
		/*
		if(SelectedTask)
		{
			try
			{
//				if((CheckBox^)sender == checkBox_canGiveUp)
				{
//					SelectedTask->can_give_up = checkBox_canGiveUp->Checked;
				}
//				if((CheckBox^)sender == checkBox_repeatable)
				{
//					SelectedTask->repeatable = checkBox_repeatable->Checked;
				}
//				if((CheckBox^)sender == checkBox_repeatableAfterFailure)
				{
//					SelectedTask->repeatable_after_failure = checkBox_repeatableAfterFailure->Checked;
				}
			}
			catch(...)
			{
				MessageBox::Show("UNKNOWN ERROR");
			}
		}
		*/
	}
	private: System::Void change_occupation(System::Object^  sender, System::EventArgs^  e)
	{
		/*
		if(SelectedTask)
		{
			try
			{
				SelectedTask->required_occupations_count = 0;
				SelectedTask->required_occupations = gcnew array<int>(8);

				if(checkBox_blademaster->Checked)
				{
					SelectedTask->required_occupations[SelectedTask->required_occupations_count] = 0;
					SelectedTask->required_occupations_count++;
				}
				if(checkBox_wizzard->Checked)
				{
					SelectedTask->required_occupations[SelectedTask->required_occupations_count] = 1;
					SelectedTask->required_occupations_count++;
				}
				if(checkBox_monk->Checked)
				{
					SelectedTask->required_occupations[SelectedTask->required_occupations_count] = 2;
					SelectedTask->required_occupations_count++;
				}
				if(checkBox_venomancer->Checked)
				{
					SelectedTask->required_occupations[SelectedTask->required_occupations_count] = 3;
					SelectedTask->required_occupations_count++;
				}
				if(checkBox_barbarian->Checked)
				{
					SelectedTask->required_occupations[SelectedTask->required_occupations_count] = 4;
					SelectedTask->required_occupations_count++;
				}
				if(checkBox_genie->Checked)
				{
					SelectedTask->required_occupations[SelectedTask->required_occupations_count] = 5;
					SelectedTask->required_occupations_count++;
				}
				if(checkBox_archer->Checked)
				{
					SelectedTask->required_occupations[SelectedTask->required_occupations_count] = 6;
					SelectedTask->required_occupations_count++;
				}
				if(checkBox_cleric->Checked)
				{
					SelectedTask->required_occupations[SelectedTask->required_occupations_count] = 7;
					SelectedTask->required_occupations_count++;
				}
			}
			catch(...)
			{
				MessageBox::Show("UNKNOWN ERROR");
			}
		}
		*/
	}
	private: System::Void change_requireSkills(System::Object^  sender, System::EventArgs^  e)
	{
		/*
		if(SelectedTask)
		{
			try
			{
				if((Control^)sender == textBox_requiredBlacksmith)
				{
					SelectedTask->required_blacksmith_level = Convert::ToInt32(textBox_requiredBlacksmith->Text);
				}
				if((Control^)sender == textBox_requiredTailor)
				{
					SelectedTask->required_tailor_level = Convert::ToInt32(textBox_requiredTailor->Text);
				}
				if((Control^)sender == textBox_requiredCraftsman)
				{
					SelectedTask->required_craftsman_level = Convert::ToInt32(textBox_requiredCraftsman->Text);
				}
				if((Control^)sender == textBox_requiredApothecary)
				{
					SelectedTask->required_apothecary_level = Convert::ToInt32(textBox_requiredApothecary->Text);
				}
			}
			catch(...)
			{
				MessageBox::Show("FORMAT ERROR\nInput value must be in the correct format!");
			}
		}
		*/
	}
	private: System::Void change_reward(System::Object^  sender, System::EventArgs^  e)
	{
		/*
		if(SelectedTask)
		{
			try
			{
				Reward^ reward;
				if(radioButton_success->Checked)
				{
					reward = SelectedTask->reward_success;
				}
				if(radioButton_failed->Checked)
				{
					reward = SelectedTask->reward_failed;
				}
				if(radioButton_timed->Checked && listBox_rewardTimed->SelectedIndex>-1)
				{
					reward = SelectedTask->rewards_timed[listBox_rewardTimed->SelectedIndex];
				}

				if(reward)
				{
					if((TextBox^)sender == textBox_rewardCoins)
					{
						reward->coins = Convert::ToInt32(textBox_rewardCoins->Text);
					}
					if((TextBox^)sender == textBox_rewardEXP)
					{
						reward->experience = Convert::ToInt32(textBox_rewardEXP->Text);
					}
					if((TextBox^)sender == textBox_rewardSP)
					{
						reward->spirit = Convert::ToInt32(textBox_rewardSP->Text);
					}
					if((TextBox^)sender == textBox_rewardREP)
					{
						reward->reputation = Convert::ToInt32(textBox_rewardREP->Text);
					}
					if((TextBox^)sender == textBox_rewardCulti)
					{
						reward->cultivation = Convert::ToInt32(textBox_rewardCulti->Text);
					}
					if((TextBox^)sender == textBox_rewardUnknown1)
					{
						reward->UNKNOWN_1 = Convert::ToInt32(textBox_rewardUnknown1->Text);
					}
					if((TextBox^)sender == textBox_rewardVigor)
					{
						reward->vigor = Convert::ToInt32(textBox_rewardVigor->Text);
					}
					if((TextBox^)sender == textBox_rewardStorage)
					{
						reward->storage_slots = Convert::ToInt32(textBox_rewardStorage->Text);
					}
					if((TextBox^)sender == textBox_rewardInventory)
					{
						reward->inventory_slots = Convert::ToInt32(textBox_rewardInventory->Text);
					}
					if((TextBox^)sender == textBox_rewardPetbag)
					{
						reward->petbag_slots = Convert::ToInt32(textBox_rewardPetbag->Text);
					}
					if((TextBox^)sender == textBox_rewardNewQuest)
					{
						reward->new_quest = Convert::ToInt32(textBox_rewardNewQuest->Text);
					}
					if((TextBox^)sender == textBox_rewardTeleportMap)
					{
						reward->teleport->map_id = Convert::ToInt32(textBox_rewardTeleportMap->Text);
					}
					if((TextBox^)sender == textBox_rewardTeleportX)
					{
						reward->teleport->x = Convert::ToSingle(textBox_rewardTeleportX->Text);
					}
					if((TextBox^)sender == textBox_rewardTeleportAltitude)
					{
						reward->teleport->altitude = Convert::ToSingle(textBox_rewardTeleportAltitude->Text);
					}
					if((TextBox^)sender == textBox_rewardTeleportZ)
					{
						reward->teleport->z = Convert::ToSingle(textBox_rewardTeleportZ->Text);
					}
					if((TextBox^)sender == textBox_rewardAITrigger)
					{
						reward->aiTrigger = Convert::ToInt32(textBox_rewardAITrigger->Text);
					}
					if((TextBox^)sender == textBox_rewardUnknown2)
					{
//						reward->UNKNOWN_2 = HexString_to_ByteArray(textBox_rewardUnknown2->Text);
					}
					if((TextBox^)sender == textBox_rewardSeperator)
					{
						reward->SEPERATOR = HexString_to_ByteArray(textBox_rewardSeperator->Text);
					}
				}
			}
			catch(...)
			{
				MessageBox::Show("FORMAT ERROR\nInput value must be in the correct format!");
			}
		}
		*/
	}
	private: System::Void change_getItems(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e)
	{
		if(SelectedTask)
		{
			try
			{
				int r = dataGridView_getItems->CurrentCell->RowIndex;
				switch (dataGridView_getItems->CurrentCell->ColumnIndex)
				{
					case 0:		SelectedTask->required_get_items[r]->id = Convert::ToInt32(dataGridView_getItems->CurrentCell->Value);
								break;
					case 1:		SelectedTask->required_get_items[r]->unknown = Convert::ToBoolean(dataGridView_getItems->CurrentCell->Value);
								break;
					case 2:		SelectedTask->required_get_items[r]->amount = Convert::ToInt32(dataGridView_getItems->CurrentCell->Value);
								break;
					case 3:		SelectedTask->required_get_items[r]->probability = Convert::ToSingle(dataGridView_getItems->CurrentCell->Value);
								break;
				}
			}
			catch(...)
			{
				MessageBox::Show("FORMAT ERROR\nInput value must be in the correct format!");
			}
		}
	}
	private: System::Void change_chase(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e)
	{
		if(SelectedTask)
		{
			try
			{
				int r = dataGridView_chase->CurrentCell->RowIndex;
				switch (dataGridView_chase->CurrentCell->ColumnIndex)
				{
					case 0:		SelectedTask->required_chases[r]->id_monster = Convert::ToInt32(dataGridView_chase->CurrentCell->Value);
								break;
					case 1:		SelectedTask->required_chases[r]->amount_monster = Convert::ToInt32(dataGridView_chase->CurrentCell->Value);
								break;
					case 2:		SelectedTask->required_chases[r]->id_drop = Convert::ToInt32(dataGridView_chase->CurrentCell->Value);
								break;
					case 3:		SelectedTask->required_chases[r]->amount_drop = Convert::ToInt32(dataGridView_chase->CurrentCell->Value);
								break;
					case 4:		SelectedTask->required_chases[r]->unknown_1 = Convert::ToByte(dataGridView_chase->CurrentCell->Value);
								break;
					case 5:		SelectedTask->required_chases[r]->probability = Convert::ToSingle(dataGridView_chase->CurrentCell->Value);
								break;
					case 6:		SelectedTask->required_chases[r]->unknown_2 = Convert::ToByte(dataGridView_chase->CurrentCell->Value);
								break;
				}
			}
			catch(...)
			{
				MessageBox::Show("FORMAT ERROR\nInput value must be in the correct format!");
			}
		}
	}
	private: System::Void change_requiredItems(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e)
	{
		if(SelectedTask)
		{
			try
			{
				int r = dataGridView_requiredItems->CurrentCell->RowIndex;
				switch (dataGridView_requiredItems->CurrentCell->ColumnIndex)
				{
					case 0:		SelectedTask->required_items[r]->id = Convert::ToInt32(dataGridView_requiredItems->CurrentCell->Value);
								break;
					case 1:		SelectedTask->required_items[r]->unknown = Convert::ToBoolean(dataGridView_requiredItems->CurrentCell->Value);
								break;
					case 2:		SelectedTask->required_items[r]->amount = Convert::ToInt32(dataGridView_requiredItems->CurrentCell->Value);
								break;
					case 3:		SelectedTask->required_items[r]->probability = Convert::ToSingle(dataGridView_requiredItems->CurrentCell->Value);
								break;
				}
			}
			catch(...)
			{
				MessageBox::Show("FORMAT ERROR\nInput value must be in the correct format!");
			}
		}
	}
	private: System::Void change_team(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e)
	{
		if(SelectedTask)
		{
			try
			{
				int r = dataGridView_team->CurrentCell->RowIndex;
				switch (dataGridView_team->CurrentCell->ColumnIndex)
				{
					case 0:		SelectedTask->required_team_member_groups[r]->level_min = Convert::ToInt32(dataGridView_team->CurrentCell->Value);
								break;
					case 1:		SelectedTask->required_team_member_groups[r]->level_max = Convert::ToInt32(dataGridView_team->CurrentCell->Value);
								break;
					case 2:		SelectedTask->required_team_member_groups[r]->unknown_1 = Convert::ToInt32(dataGridView_team->CurrentCell->Value);
								break;
					case 3:		SelectedTask->required_team_member_groups[r]->unknown_2 = Convert::ToInt32(dataGridView_team->CurrentCell->Value);
								break;
					case 4:		SelectedTask->required_team_member_groups[r]->unknown_3 = Convert::ToInt32(dataGridView_team->CurrentCell->Value);
								break;
					case 5:		SelectedTask->required_team_member_groups[r]->amount_min = Convert::ToInt32(dataGridView_team->CurrentCell->Value);
								break;
					case 6:		SelectedTask->required_team_member_groups[r]->amount_max = Convert::ToInt32(dataGridView_team->CurrentCell->Value);
								break;
					case 7:		SelectedTask->required_team_member_groups[r]->quest = Convert::ToInt32(dataGridView_team->CurrentCell->Value);
								break;
				}
			}
			catch(...)
			{
				MessageBox::Show("FORMAT ERROR\nInput value must be in the correct format!");
			}
		}
	}
	private: System::Void change_timeFactor(System::Object^  sender, System::EventArgs^  e)
	{
		if(SelectedTask && radioButton_timed->Checked && listBox_rewardTimed->SelectedIndex>-1)
		{
			SelectedTask->rewards_timed_factors[listBox_rewardTimed->SelectedIndex] = Convert::ToSingle(numericUpDown_timeFactor->Value);
			listBox_rewardTimed->Items[listBox_rewardTimed->SelectedIndex] = "Success Time [sec]: " + (SelectedTask->time_limit*Convert::ToSingle(numericUpDown_timeFactor->Value));
		}
	}
	private: System::Void change_given(System::Object^  sender, System::EventArgs^  e)
	{
		if(SelectedTask)
		{
			try
			{
				if((TextBox^)sender == textBox_givenItemsUnknown)
				{
					SelectedTask->given_items_unknown = HexString_to_ByteArray(textBox_givenItemsUnknown->Text);
				}
			}
			catch(...)
			{
				MessageBox::Show("FORMAT ERROR\nInput value must be in the correct format!");
			}
		}
	}
	private: System::Void change_givenItems(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e)
	{
		if(SelectedTask)
		{
			try
			{
				int r = dataGridView_givenItems->CurrentCell->RowIndex;
				switch (dataGridView_givenItems->CurrentCell->ColumnIndex)
				{
					case 0:		SelectedTask->given_items[r]->id = Convert::ToInt32(dataGridView_givenItems->CurrentCell->Value);
								break;
					case 1:		SelectedTask->given_items[r]->unknown = Convert::ToBoolean(dataGridView_givenItems->CurrentCell->Value);
								break;
					case 2:		SelectedTask->given_items[r]->amount = Convert::ToInt32(dataGridView_givenItems->CurrentCell->Value);
								break;
					case 3:		SelectedTask->given_items[r]->probability = Convert::ToSingle(dataGridView_givenItems->CurrentCell->Value);
								break;
				}
			}
			catch(...)
			{
				MessageBox::Show("FORMAT ERROR\nInput value must be in the correct format!");
			}
		}
	}
	private: System::Void change_rewardGroupCount(System::Object^  sender, System::EventArgs^  e)
	{
		if(SelectedTask)
		{
			try
			{
				Reward^ reward;
				if(radioButton_success->Checked)
				{
					reward = SelectedTask->reward_success;
				}
				if(radioButton_failed->Checked)
				{
					reward = SelectedTask->reward_failed;
				}
				if(radioButton_timed->Checked && listBox_rewardTimed->SelectedIndex>-1)
				{
					reward = SelectedTask->rewards_timed[listBox_rewardTimed->SelectedIndex];
				}

				if(reward)
				{
					reward->item_groups_count = Convert::ToInt32(numericUpDown_rewardGroups->Value);

					// Group Added
					if(reward->item_groups_count > Column_rewardGroups->Items->Count)
					{
						// add empty itemgroup
						if(reward->item_groups->Length < reward->item_groups_count)
						{
							Array::Resize(reward->item_groups, reward->item_groups_count);
							reward->item_groups[reward->item_groups->Length-1] = gcnew ItemGroup();
							reward->item_groups[reward->item_groups->Length-1]->items = gcnew array<Item^>(0);
						}

						for(int i=Column_rewardGroups->Items->Count; i<reward->item_groups_count; i++)
						{
							Column_rewardGroups->Items->Add(i.ToString());
							checkedListBox_rewardGroupFlags->Items->Add("Group " + i.ToString(), false);
						}
					}

					// Group Removed
					if(reward->item_groups_count < Column_rewardGroups->Items->Count)
					{
						// remove disposed itemgroups
						array<ItemGroup^>^ temp = gcnew array<ItemGroup^>(reward->item_groups_count);
						Array::Copy(reward->item_groups, temp, temp->Length);
						reward->item_groups = temp;

						// remove rows from datagrid
						for(int i=0; i<dataGridView_rewardItems->RowCount; i++)
						{
							if(Convert::ToInt32(dataGridView_rewardItems->Rows[i]->Cells[0]->Value) >= reward->item_groups_count)
							{
								dataGridView_rewardItems->Rows->RemoveAt(i);
								i--;
							}
						}
						for(int i=reward->item_groups_count; i<Column_rewardGroups->Items->Count; i++)
						{
							checkedListBox_rewardGroupFlags->Items->RemoveAt(i);
							Column_rewardGroups->Items->RemoveAt(Column_rewardGroups->Items->Count-1);
						}
					}
				}
			}
			catch(...)
			{
				MessageBox::Show("FORMAT ERROR\nInput value must be in the correct format!");
			}
		}
	}
	private: System::Void change_rewardGroupFlags(System::Object^  sender, System::Windows::Forms::ItemCheckEventArgs^  e)
	{
		if(SelectedTask)
		{
			try
			{
				Reward^ reward;
				if(radioButton_success->Checked)
				{
					reward = SelectedTask->reward_success;
				}
				if(radioButton_failed->Checked)
				{
					reward = SelectedTask->reward_failed;
				}
				if(radioButton_timed->Checked && listBox_rewardTimed->SelectedIndex>-1)
				{
					reward = SelectedTask->rewards_timed[listBox_rewardTimed->SelectedIndex];
				}

				if(reward)
				{
					if(e->NewValue == CheckState::Checked)
					{
						reward->item_groups[e->Index]->unknown = true;
					}
					else
					{
						reward->item_groups[e->Index]->unknown = false;
					}
				}
			}
			catch(...)
			{
				MessageBox::Show("FORMAT ERROR\nInput value must be in the correct format!");
			}
		}
	}
	private: System::Void change_rewardItems(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e)
	{
		if(SelectedTask)
		{
			try
			{
				Reward^ reward;
				if(radioButton_success->Checked)
				{
					reward = SelectedTask->reward_success;
				}
				if(radioButton_failed->Checked)
				{
					reward = SelectedTask->reward_failed;
				}
				if(radioButton_timed->Checked && listBox_rewardTimed->SelectedIndex>-1)
				{
					reward = SelectedTask->rewards_timed[listBox_rewardTimed->SelectedIndex];
				}

				if(reward)
				{
					// Rebuild all reward groups, instead of managing moving items between groups...
					reward->item_groups_count = Convert::ToInt32(numericUpDown_rewardGroups->Value);
					reward->item_groups = gcnew array<ItemGroup^>(reward->item_groups_count);

					for(int g=0; g<reward->item_groups->Length; g++)
					{
						reward->item_groups[g] = gcnew ItemGroup();
						if(checkedListBox_rewardGroupFlags->CheckedItems->Contains(checkedListBox_rewardGroupFlags->Items[g]))
						{
							reward->item_groups[g]->unknown = true;
						}
						else
						{
							reward->item_groups[g]->unknown = false;
						}
						reward->item_groups[g]->items_count = 0;
						reward->item_groups[g]->items = gcnew array<Item^>(0);
					}

					for(int r=0; r<dataGridView_rewardItems->RowCount; r++)
					{
						int g = Convert::ToInt32(dataGridView_rewardItems->Rows[r]->Cells[0]->Value);

						//if(g<reward->item_groups_count)
						//{
							reward->item_groups[g]->items_count++;
							Array::Resize(reward->item_groups[g]->items, reward->item_groups[g]->items->Length+1);
							reward->item_groups[g]->items[reward->item_groups[g]->items->Length-1] = gcnew Item();
							reward->item_groups[g]->items[reward->item_groups[g]->items->Length-1]->id = Convert::ToInt32(dataGridView_rewardItems->Rows[r]->Cells[1]->Value);
							reward->item_groups[g]->items[reward->item_groups[g]->items->Length-1]->unknown = Convert::ToBoolean(dataGridView_rewardItems->Rows[r]->Cells[2]->Value);
							reward->item_groups[g]->items[reward->item_groups[g]->items->Length-1]->amount = Convert::ToInt32(dataGridView_rewardItems->Rows[r]->Cells[3]->Value);
							reward->item_groups[g]->items[reward->item_groups[g]->items->Length-1]->probability = Convert::ToSingle(dataGridView_rewardItems->Rows[r]->Cells[4]->Value);
						//}
					}
				}
			}
			catch(...)
			{
				MessageBox::Show("FORMAT ERROR\nInput value must be in the correct format!");
			}
		}
	}

	private: System::Void click_addConversation(System::Object^  sender, System::EventArgs^  e)
	{
		if(SelectedTask)
		{
			int d = listBox_dialogs->SelectedIndex;

			if(contextMenuStrip_conversation->SourceControl == listBox_questions && d>-1)
			{
				SelectedTask->conversation->dialogs[d]->question_count++;
				Array::Resize(SelectedTask->conversation->dialogs[d]->questions, SelectedTask->conversation->dialogs[d]->questions->Length+1);

				SelectedTask->conversation->dialogs[d]->questions[SelectedTask->conversation->dialogs[d]->questions->Length-1] = gcnew Question();
				SelectedTask->conversation->dialogs[d]->questions[SelectedTask->conversation->dialogs[d]->questions->Length-1]->crypt_key = SelectedTask->conversation->crypt_key;
				SelectedTask->conversation->dialogs[d]->questions[SelectedTask->conversation->dialogs[d]->questions->Length-1]->question_id = SelectedTask->conversation->dialogs[d]->questions->Length;
				if(SelectedTask->conversation->dialogs[d]->questions->Length > 1)
				{
					SelectedTask->conversation->dialogs[d]->questions[SelectedTask->conversation->dialogs[d]->questions->Length-1]->previous_question = SelectedTask->conversation->dialogs[d]->questions->Length-1;
				}
				else
				{
					SelectedTask->conversation->dialogs[d]->questions[SelectedTask->conversation->dialogs[d]->questions->Length-1]->previous_question = -1;
				}
				SelectedTask->conversation->dialogs[d]->questions[SelectedTask->conversation->dialogs[d]->questions->Length-1]->answer_count = 0;
				SelectedTask->conversation->dialogs[d]->questions[SelectedTask->conversation->dialogs[d]->questions->Length-1]->answers = gcnew array<Answer^>(0);
				SelectedTask->conversation->dialogs[d]->questions[SelectedTask->conversation->dialogs[d]->questions->Length-1]->QuestionText = "BLANK";

				listBox_questions->Items->Add("[" + SelectedTask->conversation->dialogs[d]->questions->Length + "] Question");
			}

			int q = listBox_questions->SelectedIndex;

			if(contextMenuStrip_conversation->SourceControl == listBox_answers && q>-1)
			{
				SelectedTask->conversation->dialogs[d]->questions[q]->answer_count++;
				Array::Resize(SelectedTask->conversation->dialogs[d]->questions[q]->answers, SelectedTask->conversation->dialogs[d]->questions[q]->answers->Length+1);

				SelectedTask->conversation->dialogs[d]->questions[q]->answers[SelectedTask->conversation->dialogs[d]->questions[q]->answers->Length-1] = gcnew Answer();
				SelectedTask->conversation->dialogs[d]->questions[q]->answers[SelectedTask->conversation->dialogs[d]->questions[q]->answers->Length-1]->crypt_key = SelectedTask->conversation->crypt_key;
				SelectedTask->conversation->dialogs[d]->questions[q]->answers[SelectedTask->conversation->dialogs[d]->questions[q]->answers->Length-1]->question_link = -2147483642;
				SelectedTask->conversation->dialogs[d]->questions[q]->answers[SelectedTask->conversation->dialogs[d]->questions[q]->answers->Length-1]->task_link = SelectedTask->ID;
				SelectedTask->conversation->dialogs[d]->questions[q]->answers[SelectedTask->conversation->dialogs[d]->questions[q]->answers->Length-1]->AnswerText = "OK";

				listBox_answers->Items->Add("[" + SelectedTask->conversation->dialogs[d]->questions[q]->answers->Length + "] Answer");
			}
		}
	}
	private: System::Void click_deleteConversation(System::Object^  sender, System::EventArgs^  e)
	{
		if(SelectedTask)
		{
			int d = listBox_dialogs->SelectedIndex;

			if(contextMenuStrip_conversation->SourceControl == listBox_questions && d>-1)
			{
				if(SelectedTask->conversation->dialogs[d]->question_count>0 && listBox_questions->SelectedIndex>-1)
				{
					SelectedTask->conversation->dialogs[d]->question_count--;

					array<Question^>^ temp = gcnew array<Question^>(SelectedTask->conversation->dialogs[d]->question_count);
					Array::Copy(SelectedTask->conversation->dialogs[d]->questions, 0, temp, 0, listBox_questions->SelectedIndex);
					Array::Copy(SelectedTask->conversation->dialogs[d]->questions, listBox_questions->SelectedIndex+1, temp, listBox_questions->SelectedIndex, SelectedTask->conversation->dialogs[d]->question_count - listBox_questions->SelectedIndex);
					SelectedTask->conversation->dialogs[d]->questions = temp;

					// try to automatic updating all id's and previous_links...
					for(int i=0; i<SelectedTask->conversation->dialogs[d]->questions->Length; i++)
					{
						SelectedTask->conversation->dialogs[d]->questions[i]->question_id = i+1;
						if(i > 0)
						{
							SelectedTask->conversation->dialogs[d]->questions[i]->previous_question = i;
						}
						else
						{
							SelectedTask->conversation->dialogs[d]->questions[i]->previous_question = -1;
						}
					}

					// refresh question listbox
					select_Dialog(nullptr, nullptr);
				}
			}

			int q = listBox_questions->SelectedIndex;

			if(contextMenuStrip_conversation->SourceControl == listBox_answers && q>-1)
			{
				if(SelectedTask->conversation->dialogs[d]->questions[q]->answer_count>0 && listBox_answers->SelectedIndex>-1)
				{
					SelectedTask->conversation->dialogs[d]->questions[q]->answer_count--;

					array<Answer^>^ temp = gcnew array<Answer^>(SelectedTask->conversation->dialogs[d]->questions[q]->answer_count);
					Array::Copy(SelectedTask->conversation->dialogs[d]->questions[q]->answers, 0, temp, 0, listBox_answers->SelectedIndex);
					Array::Copy(SelectedTask->conversation->dialogs[d]->questions[q]->answers, listBox_answers->SelectedIndex+1, temp, listBox_answers->SelectedIndex, SelectedTask->conversation->dialogs[d]->questions[q]->answer_count - listBox_answers->SelectedIndex);
					SelectedTask->conversation->dialogs[d]->questions[q]->answers = temp;

					// refresh question listbox
					select_Question(nullptr, nullptr);
				}
			}
		}
	}
	private: System::Void change_conversation(System::Object^  sender, System::EventArgs^  e)
	{
		if(SelectedTask)
		{
			try
			{
				if((TextBox^)sender == textBox_conversationPrompt)
				{
					SelectedTask->conversation->PromptText = textBox_conversationPrompt->Text;
				}

				if((TextBox^)sender == textBox_conversationText)
				{
					SelectedTask->conversation->GeneralText = textBox_conversationText->Text;
				}

				int d = listBox_dialogs->SelectedIndex;
				int q = listBox_questions->SelectedIndex;
				int a = listBox_answers->SelectedIndex;

				if((TextBox^)sender == textBox_dialogText)
				{
					if(d>-1)
					{
						SelectedTask->conversation->dialogs[d]->DialogText = textBox_dialogText->Text;
					}
				}

				if((TextBox^)sender == textBox_dialogUnknown)
				{
					if(d>-1)
					{
						SelectedTask->conversation->dialogs[d]->unknown = Convert::ToInt32(textBox_dialogUnknown->Text);
					}
				}

				if((TextBox^)sender == textBox_questionText)
				{
					if(d>-1 && q>-1)
					{
						SelectedTask->conversation->dialogs[d]->questions[q]->QuestionText = textBox_questionText->Text;
					}
				}

				if((TextBox^)sender == textBox_questionID)
				{
					if(d>-1 && q>-1)
					{
						SelectedTask->conversation->dialogs[d]->questions[q]->question_id = Convert::ToInt32(textBox_questionID->Text);
						listBox_questions->Items[q] = "[" + textBox_questionID->Text + "] Question";
					}
				}

				if((TextBox^)sender == textBox_questionPrevious)
				{
					if(d>-1 && q>-1)
					{
						SelectedTask->conversation->dialogs[d]->questions[q]->previous_question = Convert::ToInt32(textBox_questionPrevious->Text);
					}
				}

				if((TextBox^)sender == textBox_answerText)
				{
					if(d>-1 && q>-1 && a>-1)
					{
						SelectedTask->conversation->dialogs[d]->questions[q]->answers[a]->AnswerText = textBox_answerText->Text;
					}
				}

				if((TextBox^)sender == textBox_answerQlink)
				{
					if(d>-1 && q>-1 && a>-1)
					{
						SelectedTask->conversation->dialogs[d]->questions[q]->answers[a]->question_link = Convert::ToInt32(textBox_answerQlink->Text);
					}
				}

				if((TextBox^)sender == textBox_answerTlink)
				{
					if(d>-1 && q>-1 && a>-1)
					{
						SelectedTask->conversation->dialogs[d]->questions[q]->answers[a]->task_link = Convert::ToInt32(textBox_answerTlink->Text);
					}
				}
			}
			catch(...)
			{
				MessageBox::Show("FORMAT ERROR\nInput value must be in the correct format!");
			}
		}
	}

	private: System::Void save_CreatureBuilder(Task^ t, StreamWriter^ sw)
	{
		String^ line = "";
		if(t->ai_trigger>0 || t->reward_success->aiTrigger>0 || t->reward_failed->aiTrigger>0)
		{
			if(t->Name->StartsWith("^"))
			{
				line += t->ID.ToString() + "\t" + t->Name->Substring(7);
			}
			else
			{
				line += t->ID.ToString() + "\t" + t->Name;
			}
			
			if(t->ai_trigger>0)
			{
				line += "\t" + t->ai_trigger.ToString();
			}
			else
			{
				line += "\t-";
			}
			if(t->reward_success->aiTrigger>0)
			{
				line += "\t" + t->reward_success->aiTrigger.ToString();
			}
			else
			{
				line += "\t-";
			}
			if(t->reward_failed->aiTrigger>0)
			{
				line += "\t" + t->reward_failed->aiTrigger.ToString();
			}
			else
			{
				line += "\t-";
			}
		}
		if(line != "")
		{
			sw->WriteLine(line);
		}
		for(int i=0; i<t->sub_quests->Length; i++)
		{
			save_CreatureBuilder(t->sub_quests[i], sw);
		}
	}
	private: System::Void click_creatureBuilder(System::Object^  sender, System::EventArgs^  e)
	{
		SaveFileDialog^ save = gcnew SaveFileDialog();
		save->InitialDirectory = Environment::CurrentDirectory;
		save->Filter = "Text File (*.txt)|*.txt|All Files (*.*)|*.*";
		if(Tasks && save->ShowDialog() == Windows::Forms::DialogResult::OK && save->FileName != "")
		{
			try
			{
				Cursor = Windows::Forms::Cursors::AppStarting;

				StreamWriter^ sw = gcnew StreamWriter(save->FileName, false, Encoding::Unicode);

				for(int i=Tasks->Length-1; i>-1; i--)
				{
					save_CreatureBuilder(Tasks[i], sw);
				}

				sw->Close();

				Cursor = Windows::Forms::Cursors::Default;
			}
			catch(...)
			{
				MessageBox::Show("SAVING ERROR!");
				Cursor = Windows::Forms::Cursors::Default;
			}
		}
	}



	// ####################################################################################################

	private: System::Void click_addRow(System::Object^  sender, System::EventArgs^  e)
	{
/*
		if(SelectedTask)
		{
			if(contextMenuStrip_dataGrid->SourceControl == dataGridView_date)
			{
				SelectedTask->date_spans_count++;
				Array::Resize(SelectedTask->date_spans, SelectedTask->date_spans->Length+1);
				SelectedTask->date_spans[SelectedTask->date_spans->Length-1] = gcnew DateSpan();

				SelectedTask->date_spans[SelectedTask->date_spans->Length-1]->from = gcnew Date();
				SelectedTask->date_spans[SelectedTask->date_spans->Length-1]->from->year = 0;
				SelectedTask->date_spans[SelectedTask->date_spans->Length-1]->from->month = 0;
				SelectedTask->date_spans[SelectedTask->date_spans->Length-1]->from->day = 0;
				SelectedTask->date_spans[SelectedTask->date_spans->Length-1]->from->hour = 0;
				SelectedTask->date_spans[SelectedTask->date_spans->Length-1]->from->minute = 0;
				SelectedTask->date_spans[SelectedTask->date_spans->Length-1]->from->weekday = 0;

				SelectedTask->date_spans[SelectedTask->date_spans->Length-1]->to = gcnew Date();
				SelectedTask->date_spans[SelectedTask->date_spans->Length-1]->to->year = 0;
				SelectedTask->date_spans[SelectedTask->date_spans->Length-1]->to->month = 0;
				SelectedTask->date_spans[SelectedTask->date_spans->Length-1]->to->day = 0;
				SelectedTask->date_spans[SelectedTask->date_spans->Length-1]->to->hour = 0;
				SelectedTask->date_spans[SelectedTask->date_spans->Length-1]->to->minute = 0;
				SelectedTask->date_spans[SelectedTask->date_spans->Length-1]->to->weekday = 0;

				dataGridView_date->Rows->Add(gcnew array<String^>{"0", "0", "0", "0", "0", Column6->Items[0]->ToString(), "to", "0", "0", "0", "0", "0", Column13->Items[0]->ToString()});
			}

			//if(contextMenuStrip_dataGrid->SourceControl == dataGridView_getItems)
			{
				SelectedTask->required_get_items_count++;
				Array::Resize(SelectedTask->required_get_items, SelectedTask->required_get_items->Length+1);
				SelectedTask->required_get_items[SelectedTask->required_get_items->Length-1] = gcnew Item();

				SelectedTask->required_get_items[SelectedTask->required_get_items->Length-1]->id = 0;
				SelectedTask->required_get_items[SelectedTask->required_get_items->Length-1]->unknown = true;
				SelectedTask->required_get_items[SelectedTask->required_get_items->Length-1]->amount = 0;
				SelectedTask->required_get_items[SelectedTask->required_get_items->Length-1]->probability = 1.0;

				dataGridView_getItems->Rows->Add(gcnew array<String^>{"0", "True", "0", "1.0"});
			}
			//if(contextMenuStrip_dataGrid->SourceControl == dataGridView_chase)
			{
				SelectedTask->required_chases_count++;
				Array::Resize(SelectedTask->required_chases, SelectedTask->required_chases->Length+1);
				SelectedTask->required_chases[SelectedTask->required_chases->Length-1] = gcnew Chase();

				SelectedTask->required_chases[SelectedTask->required_chases->Length-1]->id_monster = 0;
				SelectedTask->required_chases[SelectedTask->required_chases->Length-1]->amount_monster = 0;
				SelectedTask->required_chases[SelectedTask->required_chases->Length-1]->id_drop = 0;
				SelectedTask->required_chases[SelectedTask->required_chases->Length-1]->amount_drop = 0;
				SelectedTask->required_chases[SelectedTask->required_chases->Length-1]->unknown_1 = 0;
				SelectedTask->required_chases[SelectedTask->required_chases->Length-1]->probability = 1.0;
				SelectedTask->required_chases[SelectedTask->required_chases->Length-1]->unknown_2 = 0;

				dataGridView_chase->Rows->Add(gcnew array<String^>{"0", "0", "0", "0", "0", "1.0", "0"});
			}
			//if(contextMenuStrip_dataGrid->SourceControl == dataGridView_requiredItems)
			{
				SelectedTask->required_items_count++;
				Array::Resize(SelectedTask->required_items, SelectedTask->required_items->Length+1);
				SelectedTask->required_items[SelectedTask->required_items->Length-1] = gcnew Item();

				SelectedTask->required_items[SelectedTask->required_items->Length-1]->id = 0;
				SelectedTask->required_items[SelectedTask->required_items->Length-1]->unknown = true;
				SelectedTask->required_items[SelectedTask->required_items->Length-1]->amount = 0;
				SelectedTask->required_items[SelectedTask->required_items->Length-1]->probability = 1.0;

				dataGridView_requiredItems->Rows->Add(gcnew array<String^>{"0", "True", "0", "1.0"});
			}
			//if(contextMenuStrip_dataGrid->SourceControl == dataGridView_team)
			{
				SelectedTask->required_team_member_groups_count++;
				Array::Resize(SelectedTask->required_team_member_groups, SelectedTask->required_team_member_groups->Length+1);
				SelectedTask->required_team_member_groups[SelectedTask->required_team_member_groups->Length-1] = gcnew TeamMembers();

				SelectedTask->required_team_member_groups[SelectedTask->required_team_member_groups->Length-1]->level_min = 1;
				SelectedTask->required_team_member_groups[SelectedTask->required_team_member_groups->Length-1]->level_max = 150;
				SelectedTask->required_team_member_groups[SelectedTask->required_team_member_groups->Length-1]->unknown_1 = 0;
				SelectedTask->required_team_member_groups[SelectedTask->required_team_member_groups->Length-1]->unknown_2 = 0;
				SelectedTask->required_team_member_groups[SelectedTask->required_team_member_groups->Length-1]->unknown_3 = 0;
				SelectedTask->required_team_member_groups[SelectedTask->required_team_member_groups->Length-1]->amount_min = 1;
				SelectedTask->required_team_member_groups[SelectedTask->required_team_member_groups->Length-1]->amount_max = 5;
				SelectedTask->required_team_member_groups[SelectedTask->required_team_member_groups->Length-1]->quest = 0;

				dataGridView_team->Rows->Add(gcnew array<String^>{"1", "150", "0", "0", "0", "1", "5", "0"});
			}
			//if(contextMenuStrip_dataGrid->SourceControl == listBox_rewardTimed)
			{
				if(SelectedTask->rewards_timed_count<5)
				{
					SelectedTask->rewards_timed_count++;
					Array::Resize(SelectedTask->rewards_timed, SelectedTask->rewards_timed->Length+1);
					SelectedTask->rewards_timed[SelectedTask->rewards_timed->Length-1] = gcnew Reward();

					SelectedTask->rewards_timed[SelectedTask->rewards_timed->Length-1]->coins = 0;
					SelectedTask->rewards_timed[SelectedTask->rewards_timed->Length-1]->experience = 0;
					SelectedTask->rewards_timed[SelectedTask->rewards_timed->Length-1]->spirit = 0;
					SelectedTask->rewards_timed[SelectedTask->rewards_timed->Length-1]->reputation = 0;
					SelectedTask->rewards_timed[SelectedTask->rewards_timed->Length-1]->cultivation = 0;
					SelectedTask->rewards_timed[SelectedTask->rewards_timed->Length-1]->UNKNOWN_1 = 0; // 4 Byte
					SelectedTask->rewards_timed[SelectedTask->rewards_timed->Length-1]->vigor = 0;
					SelectedTask->rewards_timed[SelectedTask->rewards_timed->Length-1]->storage_slots = 0;
					SelectedTask->rewards_timed[SelectedTask->rewards_timed->Length-1]->inventory_slots = 0;
					SelectedTask->rewards_timed[SelectedTask->rewards_timed->Length-1]->petbag_slots = 0;
					SelectedTask->rewards_timed[SelectedTask->rewards_timed->Length-1]->new_quest = 0;
					SelectedTask->rewards_timed[SelectedTask->rewards_timed->Length-1]->teleport = gcnew ::Location();
					SelectedTask->rewards_timed[SelectedTask->rewards_timed->Length-1]->teleport->map_id = 0;
					SelectedTask->rewards_timed[SelectedTask->rewards_timed->Length-1]->teleport->x = 0;
					SelectedTask->rewards_timed[SelectedTask->rewards_timed->Length-1]->teleport->altitude = 0;
					SelectedTask->rewards_timed[SelectedTask->rewards_timed->Length-1]->teleport->z = 0;
//					SelectedTask->rewards_timed[SelectedTask->rewards_timed->Length-1]->UNKNOWN_2 = gcnew array<unsigned char>(12); // 12 Byte
					SelectedTask->rewards_timed[SelectedTask->rewards_timed->Length-1]->item_groups_count = 0;
					SelectedTask->rewards_timed[SelectedTask->rewards_timed->Length-1]->SEPERATOR = gcnew array<unsigned char>(4); // 4 Byte
					SelectedTask->rewards_timed[SelectedTask->rewards_timed->Length-1]->item_groups = gcnew array<ItemGroup^>(0);

					if(SelectedTask->time_limit<1)
					{
						MessageBox::Show("Time Based Rewards needs a timed Quest. Time Limit was set to 3600!");
						SelectedTask->time_limit = 3600;
						textBox_time_limit->Text = "3600";
					}
					SelectedTask->rewards_timed_factors[SelectedTask->rewards_timed->Length-1] = 0.5;
					numericUpDown_timeFactor->Value = Convert::ToDecimal(0.5);
					listBox_rewardTimed->Items->Add("Success Time [sec]: " + (SelectedTask->time_limit*SelectedTask->rewards_timed_factors[SelectedTask->rewards_timed->Length-1]));
				}
				else
				{
					MessageBox::Show("Maximum Number of Timed Rewards: 5!");
				}
			}
			//if(contextMenuStrip_dataGrid->SourceControl == dataGridView_givenItems)
			{
				SelectedTask->given_items_count++;
				Array::Resize(SelectedTask->given_items, SelectedTask->given_items->Length+1);
				SelectedTask->given_items[SelectedTask->given_items->Length-1] = gcnew Item();

				SelectedTask->given_items[SelectedTask->given_items->Length-1]->id = 0;
				SelectedTask->given_items[SelectedTask->given_items->Length-1]->unknown = true;
				SelectedTask->given_items[SelectedTask->given_items->Length-1]->amount = 0;
				SelectedTask->given_items[SelectedTask->given_items->Length-1]->probability = 1.0;

				dataGridView_givenItems->Rows->Add(gcnew array<String^>{"0", "True", "0", "1.0"});
			}
			//if(contextMenuStrip_dataGrid->SourceControl == dataGridView_rewardItems)
			{
				Reward^ reward;
				if(radioButton_success->Checked)
				{
					reward = SelectedTask->reward_success;
				}
				if(radioButton_failed->Checked)
				{
					reward = SelectedTask->reward_failed;
				}
				if(radioButton_timed->Checked && listBox_rewardTimed->SelectedIndex>-1)
				{
					reward = SelectedTask->rewards_timed[listBox_rewardTimed->SelectedIndex];
				}

				if(reward && reward->item_groups_count>0)
				{
					reward->item_groups[0]->items_count++;
					Array::Resize(reward->item_groups[0]->items, reward->item_groups[0]->items->Length+1);
					reward->item_groups[0]->items[reward->item_groups[0]->items->Length-1] = gcnew Item();

					reward->item_groups[0]->items[reward->item_groups[0]->items->Length-1]->id = 0;
					reward->item_groups[0]->items[reward->item_groups[0]->items->Length-1]->unknown = true;
					reward->item_groups[0]->items[reward->item_groups[0]->items->Length-1]->amount = 0;
					reward->item_groups[0]->items[reward->item_groups[0]->items->Length-1]->probability = 1;
					
					dataGridView_rewardItems->Rows->Add(gcnew array<String^>{"0", "0", "True", "0", "1.0"});
				}
			}
		}
*/
	}
	private: System::Void click_deleteRow(System::Object^  sender, System::EventArgs^  e)
	{
		/*
		if(SelectedTask)
		{
			//if(contextMenuStrip_dataGrid->SourceControl == dataGridView_date)
			{
				if(SelectedTask->date_spans_count>0 && dataGridView_date->CurrentCell->RowIndex>-1)
				{
					SelectedTask->date_spans_count--;

					array<DateSpan^>^ temp = gcnew array<DateSpan^>(SelectedTask->date_spans_count);
					Array::Copy(SelectedTask->date_spans, 0, temp, 0, dataGridView_date->CurrentCell->RowIndex);
					Array::Copy(SelectedTask->date_spans, dataGridView_date->CurrentCell->RowIndex+1, temp, dataGridView_date->CurrentCell->RowIndex, SelectedTask->date_spans_count - dataGridView_date->CurrentCell->RowIndex);
					SelectedTask->date_spans = temp;

					dataGridView_date_spans->Rows->RemoveAt(dataGridView_date->CurrentCell->RowIndex);
				}
			}

			//if(contextMenuStrip_dataGrid->SourceControl == dataGridView_getItems)
			{
				if(SelectedTask->required_get_items_count>0 && dataGridView_getItems->CurrentCell->RowIndex>-1)
				{
					SelectedTask->required_get_items_count--;

					array<Item^>^ temp = gcnew array<Item^>(SelectedTask->required_get_items_count);
					Array::Copy(SelectedTask->required_get_items, 0, temp, 0, dataGridView_getItems->CurrentCell->RowIndex);
					Array::Copy(SelectedTask->required_get_items, dataGridView_getItems->CurrentCell->RowIndex+1, temp, dataGridView_getItems->CurrentCell->RowIndex, SelectedTask->required_get_items_count - dataGridView_getItems->CurrentCell->RowIndex);
					SelectedTask->required_get_items = temp;

					dataGridView_getItems->Rows->RemoveAt(dataGridView_getItems->CurrentCell->RowIndex);
				}
			}

			//if(contextMenuStrip_dataGrid->SourceControl == dataGridView_chase)
			{
				if(SelectedTask->required_chases_count>0 && dataGridView_chase->CurrentCell->RowIndex>-1)
				{
					SelectedTask->required_chases_count--;

					array<Chase^>^ temp = gcnew array<Chase^>(SelectedTask->required_chases_count);
					Array::Copy(SelectedTask->required_chases, 0, temp, 0, dataGridView_chase->CurrentCell->RowIndex);
					Array::Copy(SelectedTask->required_chases, dataGridView_chase->CurrentCell->RowIndex+1, temp, dataGridView_chase->CurrentCell->RowIndex, SelectedTask->required_chases_count - dataGridView_chase->CurrentCell->RowIndex);
					SelectedTask->required_chases = temp;

					dataGridView_chase->Rows->RemoveAt(dataGridView_chase->CurrentCell->RowIndex);
				}
			}

			//if(contextMenuStrip_dataGrid->SourceControl == dataGridView_requiredItems)
			{
				if(SelectedTask->required_items_count>0 && dataGridView_requiredItems->CurrentCell->RowIndex>-1)
				{
					SelectedTask->required_items_count--;

					array<Item^>^ temp = gcnew array<Item^>(SelectedTask->required_items_count);
					Array::Copy(SelectedTask->required_items, 0, temp, 0, dataGridView_requiredItems->CurrentCell->RowIndex);
					Array::Copy(SelectedTask->required_items, dataGridView_requiredItems->CurrentCell->RowIndex+1, temp, dataGridView_requiredItems->CurrentCell->RowIndex, SelectedTask->required_items_count - dataGridView_requiredItems->CurrentCell->RowIndex);
					SelectedTask->required_items = temp;

					dataGridView_requiredItems->Rows->RemoveAt(dataGridView_requiredItems->CurrentCell->RowIndex);
				}
			}

			//if(contextMenuStrip_dataGrid->SourceControl == dataGridView_team)
			{
				if(SelectedTask->required_team_member_groups_count>0 && dataGridView_team->CurrentCell->RowIndex>-1)
				{
					SelectedTask->required_team_member_groups_count--;

					array<TeamMembers^>^ temp = gcnew array<TeamMembers^>(SelectedTask->required_team_member_groups_count);
					Array::Copy(SelectedTask->required_team_member_groups, 0, temp, 0, dataGridView_team->CurrentCell->RowIndex);
					Array::Copy(SelectedTask->required_team_member_groups, dataGridView_team->CurrentCell->RowIndex+1, temp, dataGridView_team->CurrentCell->RowIndex, SelectedTask->required_team_member_groups_count - dataGridView_team->CurrentCell->RowIndex);
					SelectedTask->required_team_member_groups = temp;

					dataGridView_team->Rows->RemoveAt(dataGridView_team->CurrentCell->RowIndex);
				}
			}

			//if(contextMenuStrip_dataGrid->SourceControl == listBox_rewardTimed)
			{
				if(SelectedTask->rewards_timed_count>0 && listBox_rewardTimed->SelectedIndex>-1)
				{
					for(int i=listBox_rewardTimed->SelectedIndex; i<SelectedTask->rewards_timed_factors->Length-1; i++)
					{
						SelectedTask->rewards_timed_factors[i] = SelectedTask->rewards_timed_factors[i+1];
					}
					SelectedTask->rewards_timed_factors[SelectedTask->rewards_timed_factors->Length-1] = 0;

					SelectedTask->rewards_timed_count--;

					array<Reward^>^ temp = gcnew array<Reward^>(SelectedTask->rewards_timed_count);
					Array::Copy(SelectedTask->rewards_timed, 0, temp, 0, listBox_rewardTimed->SelectedIndex);
					Array::Copy(SelectedTask->rewards_timed, listBox_rewardTimed->SelectedIndex+1, temp, listBox_rewardTimed->SelectedIndex, SelectedTask->rewards_timed_count - listBox_rewardTimed->SelectedIndex);
					SelectedTask->rewards_timed = temp;

					listBox_rewardTimed->Items->RemoveAt(listBox_rewardTimed->SelectedIndex);
				}
			}

			//if(contextMenuStrip_dataGrid->SourceControl == dataGridView_givenItems)
			{
				if(SelectedTask->given_items_count>0 && dataGridView_givenItems->CurrentCell->RowIndex>-1)
				{
					SelectedTask->given_items_count--;

					array<Item^>^ temp = gcnew array<Item^>(SelectedTask->given_items_count);
					Array::Copy(SelectedTask->given_items, 0, temp, 0, dataGridView_givenItems->CurrentCell->RowIndex);
					Array::Copy(SelectedTask->given_items, dataGridView_givenItems->CurrentCell->RowIndex+1, temp, dataGridView_givenItems->CurrentCell->RowIndex, SelectedTask->given_items_count - dataGridView_givenItems->CurrentCell->RowIndex);
					SelectedTask->given_items = temp;

					dataGridView_givenItems->Rows->RemoveAt(dataGridView_givenItems->CurrentCell->RowIndex);
				}
			}

			//if(contextMenuStrip_dataGrid->SourceControl == dataGridView_rewardItems)
			{
				if(dataGridView_rewardItems->CurrentCell && dataGridView_rewardItems->CurrentCell->RowIndex>-1)
				{
					dataGridView_rewardItems->Rows->RemoveAt(dataGridView_rewardItems->CurrentCell->RowIndex);
					
					// Trigger rebuild of item groups
					change_rewardItems(nullptr, nullptr);
				}
			}
		}
		*/
	}



	//#####################################################################################
	//#####################################################################################
	//#####################################################################################


	// debug: change information
	private: void TriggerDebug(Control^ sender)
	{
		MessageBox::Show("Sender: " + sender->Name, "Change Trigger");
	}

	// general
	private: System::Void change_id(System::Object^  sender, System::EventArgs^  e)
	{
		if(SelectedTask)
		{
			try
			{
				// check if value really changed
				if(SelectedTask->ID != Convert::ToInt32(textBox_id->Text))
				{
					if(MessageBox::Show("Changing a task id is dangerous and can lead to inconsistence. Please check all answers and other (child)tasks that are connected to this id!\n\nChange task id anyway?", "NOTE!", MessageBoxButtons::YesNo) == Windows::Forms::DialogResult::Yes)
					{
						SelectedTask->ID = Convert::ToInt32(textBox_id->Text);

						// Update node in treeview
						String^ name = SelectedTask->Name;
						Drawing::Color c = Drawing::Color::White;
						treeView_tasks->BeginUpdate();
						if(name->StartsWith("^"))
						{
							try
							{
								c = Drawing::Color::FromArgb(int::Parse(name->Substring(1, 6), Globalization::NumberStyles::HexNumber));
								name = name->Substring(7);
							}
							catch(...)
							{
								c = Drawing::Color::White;
							}
						}
						treeView_tasks->SelectedNode->ForeColor = c;
						treeView_tasks->SelectedNode->Text = SelectedTask->ID.ToString() + " - " + name;
						treeView_tasks->EndUpdate();

						// call debug function
						TriggerDebug((Control^)sender);
					}
					else
					{
						textBox_id->Text = SelectedTask->ID.ToString();
					}
				}
			}
			catch(...)
			{
				MessageBox::Show("FORMAT ERROR\nInput value must be in the correct format!");
			}
		}
	}

	private: System::Void change_name(System::Object^  sender, System::EventArgs^  e)
	{
		if(SelectedTask)
		{
			try
			{
				// check if value really changed
				if(SelectedTask->Name != textBox_name->Text)
				{
					String^ node = textBox_name->Text;
					SelectedTask->Name = node;

					// Update node in treeview
					Drawing::Color c = Drawing::Color::White;
					treeView_tasks->BeginUpdate();
					if(node->StartsWith("^"))
					{
						try
						{
							c = Drawing::Color::FromArgb(int::Parse(node->Substring(1, 6), Globalization::NumberStyles::HexNumber));
							node = node->Substring(7);
						}
						catch(...)
						{
							c = Drawing::Color::White;
						}
					}
					treeView_tasks->SelectedNode->ForeColor = c;
					treeView_tasks->SelectedNode->Text = SelectedTask->ID.ToString() + " - " + node;
					treeView_tasks->EndUpdate();

					// call debug function
					TriggerDebug((Control^)sender);
				}
			}
			catch(...)
			{
				MessageBox::Show("FORMAT ERROR\nInput value must be in the correct format!");
			}
		}
	}

	private: System::Void change_author_text(System::Object^  sender, System::EventArgs^  e)
	{
		if(SelectedTask)
		{
			try
			{
				// check if value really changed
				if(SelectedTask->AuthorText != textBox_author_text->Text)
				{
					if(textBox_author_text->Text == "")
					{
						checkBox_author_mode->Checked = false;
						SelectedTask->author_mode = false;
						SelectedTask->author_text = gcnew array<unsigned char>(0);
					}
					else
					{
						checkBox_author_mode->Checked = true;
						SelectedTask->author_mode = true;
						SelectedTask->AuthorText = textBox_author_text->Text;
					}

					// call debug function
					TriggerDebug((Control^)sender);
				}
			}
			catch(...)
			{
				MessageBox::Show("FORMAT ERROR\nInput value must be in the correct format!");
			}
		}
	}

	private: System::Void change_unknown_01(System::Object^  sender, System::EventArgs^  e)
	{
		if(SelectedTask)
		{
			try
			{
				// check if value really changed
				if(ByteArray_to_HexString(SelectedTask->UNKNOWN_01) != textBox_unknown_01->Text)
				{
					SelectedTask->UNKNOWN_01 = HexString_to_ByteArray(textBox_unknown_01->Text);

					// call debug function
					TriggerDebug((Control^)sender);
				}
			}
			catch(...)
			{
				MessageBox::Show("FORMAT ERROR\nInput value must be in the correct format!");
			}
		}
	}

	private: System::Void change_type(System::Object^  sender, System::EventArgs^  e)
	{
		if(SelectedTask)
		{
			try
			{
				// check if value really changed
				if(comboBox_type->SelectedIndex > -1 && SelectedTask->type != comboBox_type->SelectedIndex)
				{
					SelectedTask->type = comboBox_type->SelectedIndex;

					// call debug function
					TriggerDebug((Control^)sender);
				}
			}
			catch(...)
			{
				MessageBox::Show("FORMAT ERROR\nInput value must be in the correct format!");
			}
		}
	}

	private: System::Void change_time_limit(System::Object^  sender, System::EventArgs^  e)
	{
		if(SelectedTask)
		{
			try
			{
				// check if value really changed
				if(SelectedTask->time_limit != Convert::ToInt32(textBox_time_limit->Text))
				{
					SelectedTask->time_limit = Convert::ToInt32(textBox_time_limit->Text);
					// Recalculate time for time based rewards...
					for(int i=0; i<listBox_rewardTimed->Items->Count; i++)
					{
						listBox_rewardTimed->Items[i] = "Success Time [sec]: " + (SelectedTask->time_limit*SelectedTask->rewards_timed_factors[i]);
					}

					// call debug function
					TriggerDebug((Control^)sender);
				}
			}
			catch(...)
			{
				MessageBox::Show("FORMAT ERROR\nInput value must be in the correct format!");
			}
		}
	}

	private: System::Void change_unknown_02(System::Object^  sender, System::EventArgs^  e)
	{
		if(SelectedTask)
		{
			try
			{
				// check if value really changed
				if(SelectedTask->UNKNOWN_02 != checkBox_unknown_02->Checked)
				{
					SelectedTask->UNKNOWN_02 = checkBox_unknown_02->Checked;

					// call debug function
					TriggerDebug((Control^)sender);
				}
			}
			catch(...)
			{
				MessageBox::Show("FORMAT ERROR\nInput value must be in the correct format!");
			}
		}
	}

	private: System::Void change_has_date_fail(System::Object^  sender, System::EventArgs^  e)
	{
		if(SelectedTask)
		{
			try
			{
				// check if value really changed
				if(SelectedTask->has_date_fail != checkBox_has_date_fail->Checked)
				{
					SelectedTask->has_date_fail = checkBox_has_date_fail->Checked;

					// call debug function
					TriggerDebug((Control^)sender);
				}
			}
			catch(...)
			{
				MessageBox::Show("FORMAT ERROR\nInput value must be in the correct format!");
			}
		}
	}

	private: System::Void change_date_fail(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e)
	{
		if(SelectedTask)
		{
			try
			{
				int r = dataGridView_date_fail->CurrentCell->RowIndex;
				switch (dataGridView_date_fail->CurrentCell->ColumnIndex)
				{
					case 0:		SelectedTask->date_fail->year = Convert::ToInt32(dataGridView_date_fail->CurrentCell->Value);
								break;
					case 1:		SelectedTask->date_fail->month = Convert::ToInt32(dataGridView_date_fail->CurrentCell->Value);
								break;
					case 2:		SelectedTask->date_fail->day = Convert::ToInt32(dataGridView_date_fail->CurrentCell->Value);
								break;
					case 3:		SelectedTask->date_fail->hour = Convert::ToInt32(dataGridView_date_fail->CurrentCell->Value);
								break;
					case 4:		SelectedTask->date_fail->minute = Convert::ToInt32(dataGridView_date_fail->CurrentCell->Value);
								break;
					case 5:		SelectedTask->date_fail->weekday = Column1->Items->IndexOf(dataGridView_date_fail->CurrentCell->Value);
								break;

					// call debug function
					TriggerDebug((Control^)sender);
				}
			}
			catch(...)
			{
				MessageBox::Show("FORMAT ERROR\nInput value must be in the correct format!");
			}
		}
	}

	private: System::Void change_unknown_03(System::Object^  sender, System::EventArgs^  e)
	{
		if(SelectedTask)
		{
			try
			{
				// check if value really changed
				if(SelectedTask->UNKNOWN_03 != checkBox_unknown_03->Checked)
				{
					SelectedTask->UNKNOWN_03 = checkBox_unknown_03->Checked;

					// call debug function
					TriggerDebug((Control^)sender);
				}
			}
			catch(...)
			{
				MessageBox::Show("FORMAT ERROR\nInput value must be in the correct format!");
			}
		}
	}

	private: System::Void change_has_date_spans(System::Object^  sender, System::EventArgs^  e)
	{
		if(SelectedTask)
		{
			try
			{
				// check if value really changed
				if(SelectedTask->has_date_spans != checkBox_has_date_spans->Checked)
				{
					SelectedTask->has_date_spans = checkBox_has_date_spans->Checked;

					// call debug function
					TriggerDebug((Control^)sender);
				}
			}
			catch(...)
			{
				MessageBox::Show("FORMAT ERROR\nInput value must be in the correct format!");
			}
		}
	}
	private: System::Void change_date_span(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e)
	{
		if(SelectedTask)
		{
			try
			{
				int r = dataGridView_date_spans->CurrentCell->RowIndex;
				switch(dataGridView_date_spans->CurrentCell->ColumnIndex)
				{
					case 0:		SelectedTask->date_spans[r]->from->year = Convert::ToInt32(dataGridView_date_spans->CurrentCell->Value);
								break;
					case 1:		SelectedTask->date_spans[r]->from->month = Convert::ToInt32(dataGridView_date_spans->CurrentCell->Value);
								break;
					case 2:		SelectedTask->date_spans[r]->from->day = Convert::ToInt32(dataGridView_date_spans->CurrentCell->Value);
								break;
					case 3:		SelectedTask->date_spans[r]->from->hour = Convert::ToInt32(dataGridView_date_spans->CurrentCell->Value);
								break;
					case 4:		SelectedTask->date_spans[r]->from->minute = Convert::ToInt32(dataGridView_date_spans->CurrentCell->Value);
								break;
					case 5:		SelectedTask->date_spans[r]->from->weekday = Column6->Items->IndexOf(dataGridView_date_spans->CurrentCell->Value);
								break;
					case 7:		SelectedTask->date_spans[r]->to->year = Convert::ToInt32(dataGridView_date_spans->CurrentCell->Value);
								break;
					case 8:		SelectedTask->date_spans[r]->to->month = Convert::ToInt32(dataGridView_date_spans->CurrentCell->Value);
								break;
					case 9:		SelectedTask->date_spans[r]->to->day = Convert::ToInt32(dataGridView_date_spans->CurrentCell->Value);
								break;
					case 10:	SelectedTask->date_spans[r]->to->hour = Convert::ToInt32(dataGridView_date_spans->CurrentCell->Value);
								break;
					case 11:	SelectedTask->date_spans[r]->to->minute = Convert::ToInt32(dataGridView_date_spans->CurrentCell->Value);
								break;
					case 12:	SelectedTask->date_spans[r]->to->weekday = Column13->Items->IndexOf(dataGridView_date_spans->CurrentCell->Value);
								break;
				}
				// call debug function
				TriggerDebug((Control^)sender);
			}
			catch(...)
			{
				MessageBox::Show("FORMAT ERROR\nInput value must be in the correct format!");
			}
		}
	}

	private: System::Void add_date_span(System::Object^  sender, System::EventArgs^  e)
	{
		if(SelectedTask)
		{
			SelectedTask->date_spans_count++;
			Array::Resize(SelectedTask->date_spans, SelectedTask->date_spans->Length+1);
			SelectedTask->date_spans[SelectedTask->date_spans->Length-1] = gcnew DateSpan();

			SelectedTask->date_spans[SelectedTask->date_spans->Length-1]->from = gcnew Date();
			SelectedTask->date_spans[SelectedTask->date_spans->Length-1]->from->year = 0;
			SelectedTask->date_spans[SelectedTask->date_spans->Length-1]->from->month = 0;
			SelectedTask->date_spans[SelectedTask->date_spans->Length-1]->from->day = 0;
			SelectedTask->date_spans[SelectedTask->date_spans->Length-1]->from->hour = 0;
			SelectedTask->date_spans[SelectedTask->date_spans->Length-1]->from->minute = 0;
			SelectedTask->date_spans[SelectedTask->date_spans->Length-1]->from->weekday = 0;

			SelectedTask->date_spans[SelectedTask->date_spans->Length-1]->to = gcnew Date();
			SelectedTask->date_spans[SelectedTask->date_spans->Length-1]->to->year = 0;
			SelectedTask->date_spans[SelectedTask->date_spans->Length-1]->to->month = 0;
			SelectedTask->date_spans[SelectedTask->date_spans->Length-1]->to->day = 0;
			SelectedTask->date_spans[SelectedTask->date_spans->Length-1]->to->hour = 0;
			SelectedTask->date_spans[SelectedTask->date_spans->Length-1]->to->minute = 0;
			SelectedTask->date_spans[SelectedTask->date_spans->Length-1]->to->weekday = 0;

			dataGridView_date_spans->Rows->Add(gcnew array<String^>{"0", "0", "0", "0", "0", Column6->Items[0]->ToString(), "to", "0", "0", "0", "0", "0", Column13->Items[0]->ToString()});
		}
	}
	private: System::Void remove_date_span(System::Object^  sender, System::EventArgs^  e)
	{
		if(SelectedTask)
		{
			if(SelectedTask->date_spans_count>0 && dataGridView_date_spans->CurrentCell->RowIndex>-1)
			{
				SelectedTask->date_spans_count--;

				array<DateSpan^>^ temp = gcnew array<DateSpan^>(SelectedTask->date_spans_count);
				Array::Copy(SelectedTask->date_spans, 0, temp, 0, dataGridView_date_spans->CurrentCell->RowIndex);
				Array::Copy(SelectedTask->date_spans, dataGridView_date_spans->CurrentCell->RowIndex+1, temp, dataGridView_date_spans->CurrentCell->RowIndex, SelectedTask->date_spans_count - dataGridView_date_spans->CurrentCell->RowIndex);
				SelectedTask->date_spans = temp;

				dataGridView_date_spans->Rows->RemoveAt(dataGridView_date_spans->CurrentCell->RowIndex);
			}
		}
	}
	private: System::Void change_unknown_04(System::Object^  sender, System::EventArgs^  e)
	{
		if(SelectedTask)
		{
			try
			{
				// check if value really changed
				if(ByteArray_to_HexString(SelectedTask->UNKNOWN_04) != textBox_unknown_04->Text)
				{
					SelectedTask->UNKNOWN_04 = HexString_to_ByteArray(textBox_unknown_04->Text);

					// call debug function
					TriggerDebug((Control^)sender);
				}
			}
			catch(...)
			{
				MessageBox::Show("FORMAT ERROR\nInput value must be in the correct format!");
			}
		}
	}

	private: System::Void change_unknown_05(System::Object^  sender, System::EventArgs^  e)
	{
		if(SelectedTask)
		{
			try
			{
				// check if value really changed
				if(ByteArray_to_HexString(SelectedTask->UNKNOWN_05) != textBox_unknown_05->Text)
				{
					SelectedTask->UNKNOWN_05 = HexString_to_ByteArray(textBox_unknown_05->Text);

					// call debug function
					TriggerDebug((Control^)sender);
				}
			}
			catch(...)
			{
				MessageBox::Show("FORMAT ERROR\nInput value must be in the correct format!");
			}
		}
	}

	private: System::Void change_unknown_06(System::Object^  sender, System::EventArgs^  e)
	{
		if(SelectedTask)
		{
			try
			{
				// check if value really changed
				if(ByteArray_to_HexString(SelectedTask->UNKNOWN_06) != textBox_unknown_06->Text)
				{
					SelectedTask->UNKNOWN_06 = HexString_to_ByteArray(textBox_unknown_06->Text);

					// call debug function
					TriggerDebug((Control^)sender);
				}
			}
			catch(...)
			{
				MessageBox::Show("FORMAT ERROR\nInput value must be in the correct format!");
			}
		}
	}

	private: System::Void change_unknown_07(System::Object^  sender, System::EventArgs^  e)
	{
		if(SelectedTask)
		{
			try
			{
				// check if value really changed
				if(ByteArray_to_HexString(SelectedTask->UNKNOWN_07) != textBox_unknown_07->Text)
				{
					SelectedTask->UNKNOWN_07 = HexString_to_ByteArray(textBox_unknown_07->Text);

					// call debug function
					TriggerDebug((Control^)sender);
				}
			}
			catch(...)
			{
				MessageBox::Show("FORMAT ERROR\nInput value must be in the correct format!");
			}
		}
	}

	private: System::Void change_unknown_08(System::Object^  sender, System::EventArgs^  e)
	{
		if(SelectedTask)
		{
			try
			{
				// check if value really changed
				if(SelectedTask->UNKNOWN_08 != Convert::ToInt32(textBox_unknown_08->Text))
				{
					SelectedTask->UNKNOWN_08 = Convert::ToInt32(textBox_unknown_08->Text);

					// call debug function
					TriggerDebug((Control^)sender);
				}
			}
			catch(...)
			{
				MessageBox::Show("FORMAT ERROR\nInput value must be in the correct format!");
			}
		}
	}

	private: System::Void change_unknown_09(System::Object^  sender, System::EventArgs^  e)
	{
		if(SelectedTask)
		{
			try
			{
				// check if value really changed
				if(SelectedTask->UNKNOWN_09 != Convert::ToInt32(textBox_unknown_09->Text))
				{
					SelectedTask->UNKNOWN_09 = Convert::ToInt32(textBox_unknown_09->Text);

					// call debug function
					TriggerDebug((Control^)sender);
				}
			}
			catch(...)
			{
				MessageBox::Show("FORMAT ERROR\nInput value must be in the correct format!");
			}
		}
	}
	// flags
	private: System::Void change_activate_first_subquest(System::Object^  sender, System::EventArgs^  e)
	{
		if(SelectedTask)
		{
			try
			{
				// check if value really changed
				if(SelectedTask->activate_first_subquest != checkBox_activate_first_subquest->Checked)
				{
					SelectedTask->activate_first_subquest = checkBox_activate_first_subquest->Checked;

					// call debug function
					TriggerDebug((Control^)sender);
				}
			}
			catch(...)
			{
				MessageBox::Show("FORMAT ERROR\nInput value must be in the correct format!");
			}
		}
	}
	private: System::Void change_activate_random_subquest(System::Object^  sender, System::EventArgs^  e)
	{
		if(SelectedTask)
		{
			try
			{
				// check if value really changed
				if(SelectedTask->activate_random_subquest != checkBox_activate_random_subquest->Checked)
				{
					SelectedTask->activate_random_subquest = checkBox_activate_random_subquest->Checked;

					// call debug function
					TriggerDebug((Control^)sender);
				}
			}
			catch(...)
			{
				MessageBox::Show("FORMAT ERROR\nInput value must be in the correct format!");
			}
		}
	}
	private: System::Void change_activate_next_subquest(System::Object^  sender, System::EventArgs^  e)
	{
		if(SelectedTask)
		{
			try
			{
				// check if value really changed
				if(SelectedTask->activate_next_subquest != checkBox_activate_next_subquest->Checked)
				{
					SelectedTask->activate_next_subquest = checkBox_activate_next_subquest->Checked;

					// call debug function
					TriggerDebug((Control^)sender);
				}
			}
			catch(...)
			{
				MessageBox::Show("FORMAT ERROR\nInput value must be in the correct format!");
			}
		}
	}
	private: System::Void change_on_give_up_parent_fails(System::Object^  sender, System::EventArgs^  e)
	{
		if(SelectedTask)
		{
			try
			{
				// check if value really changed
				if(SelectedTask->on_give_up_parent_fails != checkBox_on_give_up_parent_fails->Checked)
				{
					SelectedTask->on_give_up_parent_fails = checkBox_on_give_up_parent_fails->Checked;

					// call debug function
					TriggerDebug((Control^)sender);
				}
			}
			catch(...)
			{
				MessageBox::Show("FORMAT ERROR\nInput value must be in the correct format!");
			}
		}
	}
	private: System::Void change_on_success_parent_success(System::Object^  sender, System::EventArgs^  e)
	{
		if(SelectedTask)
		{
			try
			{
				// check if value really changed
				if(SelectedTask->on_success_parent_success != checkBox_on_success_parent_success->Checked)
				{
					SelectedTask->on_success_parent_success = checkBox_on_success_parent_success->Checked;

					// call debug function
					TriggerDebug((Control^)sender);
				}
			}
			catch(...)
			{
				MessageBox::Show("FORMAT ERROR\nInput value must be in the correct format!");
			}
		}
	}
	private: System::Void change_can_give_up(System::Object^  sender, System::EventArgs^  e)
	{
		if(SelectedTask)
		{
			try
			{
				// check if value really changed
				if(SelectedTask->can_give_up != checkBox_can_give_up->Checked)
				{
					SelectedTask->can_give_up = checkBox_can_give_up->Checked;

					// call debug function
					TriggerDebug((Control^)sender);
				}
			}
			catch(...)
			{
				MessageBox::Show("FORMAT ERROR\nInput value must be in the correct format!");
			}
		}
	}
	private: System::Void change_repeatable(System::Object^  sender, System::EventArgs^  e)
	{
		if(SelectedTask)
		{
			try
			{
				// check if value really changed
				if(SelectedTask->repeatable != checkBox_repeatable->Checked)
				{
					SelectedTask->repeatable = checkBox_repeatable->Checked;

					// call debug function
					TriggerDebug((Control^)sender);
				}
			}
			catch(...)
			{
				MessageBox::Show("FORMAT ERROR\nInput value must be in the correct format!");
			}
		}
	}
	private: System::Void change_repeatable_after_failure(System::Object^  sender, System::EventArgs^  e)
	{
		if(SelectedTask)
		{
			try
			{
				// check if value really changed
				if(SelectedTask->repeatable_after_failure != checkBox_repeatable_after_failure->Checked)
				{
					SelectedTask->repeatable_after_failure = checkBox_repeatable_after_failure->Checked;

					// call debug function
					TriggerDebug((Control^)sender);
				}
			}
			catch(...)
			{
				MessageBox::Show("FORMAT ERROR\nInput value must be in the correct format!");
			}
		}
	}
	private: System::Void change_fail_on_death(System::Object^  sender, System::EventArgs^  e)
	{
		if(SelectedTask)
		{
			try
			{
				// check if value really changed
				if(SelectedTask->fail_on_death != checkBox_fail_on_death->Checked)
				{
					SelectedTask->fail_on_death = checkBox_fail_on_death->Checked;

					// call debug function
					TriggerDebug((Control^)sender);
				}
			}
			catch(...)
			{
				MessageBox::Show("FORMAT ERROR\nInput value must be in the correct format!");
			}
		}
	}
	private: System::Void change_on_fail_parent_fail(System::Object^  sender, System::EventArgs^  e)
	{
		if(SelectedTask)
		{
			try
			{
				// check if value really changed
				if(SelectedTask->on_fail_parent_fail != checkBox_on_fail_parent_fail->Checked)
				{
					SelectedTask->on_fail_parent_fail = checkBox_on_fail_parent_fail->Checked;

					// call debug function
					TriggerDebug((Control^)sender);
				}
			}
			catch(...)
			{
				MessageBox::Show("FORMAT ERROR\nInput value must be in the correct format!");
			}
		}
	}
	private: System::Void change_unknown_10(System::Object^  sender, System::EventArgs^  e)
	{
		if(SelectedTask)
		{
			try
			{
				// check if value really changed
				if(SelectedTask->UNKNOWN_10 != checkBox_unknown_10->Checked)
				{
					SelectedTask->UNKNOWN_10 = checkBox_unknown_10->Checked;

					// call debug function
					TriggerDebug((Control^)sender);
				}
			}
			catch(...)
			{
				MessageBox::Show("FORMAT ERROR\nInput value must be in the correct format!");
			}
		}
	}
	private: System::Void change_unknown_11(System::Object^  sender, System::EventArgs^  e)
	{
		if(SelectedTask)
		{
			try
			{
				// check if value really changed
				if(SelectedTask->UNKNOWN_11 != checkBox_unknown_11->Checked)
				{
					SelectedTask->UNKNOWN_11 = checkBox_unknown_11->Checked;

					// call debug function
					TriggerDebug((Control^)sender);
				}
			}
			catch(...)
			{
				MessageBox::Show("FORMAT ERROR\nInput value must be in the correct format!");
			}
		}
	}
	private: System::Void change_unknown_12(System::Object^  sender, System::EventArgs^  e)
	{
		if(SelectedTask)
		{
			try
			{
				// check if value really changed
				if(SelectedTask->UNKNOWN_12 != checkBox_unknown_12->Checked)
				{
					SelectedTask->UNKNOWN_12 = checkBox_unknown_12->Checked;

					// call debug function
					TriggerDebug((Control^)sender);
				}
			}
			catch(...)
			{
				MessageBox::Show("FORMAT ERROR\nInput value must be in the correct format!");
			}
		}
	}
	private: System::Void change_unknown_13(System::Object^  sender, System::EventArgs^  e)
	{
		if(SelectedTask)
		{
			try
			{
				// check if value really changed
				if(SelectedTask->UNKNOWN_13 != checkBox_unknown_13->Checked)
				{
					SelectedTask->UNKNOWN_13 = checkBox_unknown_13->Checked;

					// call debug function
					TriggerDebug((Control^)sender);
				}
			}
			catch(...)
			{
				MessageBox::Show("FORMAT ERROR\nInput value must be in the correct format!");
			}
		}
	}
	private: System::Void change_unknown_14(System::Object^  sender, System::EventArgs^  e)
	{
		if(SelectedTask)
		{
			try
			{
				// check if value really changed
				if(SelectedTask->UNKNOWN_14 != checkBox_unknown_14->Checked)
				{
					SelectedTask->UNKNOWN_14 = checkBox_unknown_14->Checked;

					// call debug function
					TriggerDebug((Control^)sender);
				}
			}
			catch(...)
			{
				MessageBox::Show("FORMAT ERROR\nInput value must be in the correct format!");
			}
		}
	}
	// trigger locations
	private: System::Void change_trigger_locations_has_spans(System::Object^  sender, System::EventArgs^  e)
	{
		if(SelectedTask)
		{
			try
			{
				// check if value really changed
				if(SelectedTask->trigger_locations->has_location != checkBox_trigger_locations_has_spans->Checked)
				{
					SelectedTask->trigger_locations->has_location = checkBox_trigger_locations_has_spans->Checked;

					// call debug function
					TriggerDebug((Control^)sender);
				}
			}
			catch(...)
			{
				MessageBox::Show("FORMAT ERROR\nInput value must be in the correct format!");
			}
		}
	}
	private: System::Void change_trigger_locations_map_id(System::Object^  sender, System::EventArgs^  e)
	{
		if(SelectedTask)
		{
			try
			{
				// check if value really changed
				if(SelectedTask->trigger_locations->map_id != Convert::ToInt32(textBox_trigger_locations_map_id->Text))
				{
					SelectedTask->trigger_locations->map_id = Convert::ToInt32(textBox_trigger_locations_map_id->Text);

					// call debug function
					TriggerDebug((Control^)sender);
				}
			}
			catch(...)
			{
				MessageBox::Show("FORMAT ERROR\nInput value must be in the correct format!");
			}
		}
	}
	private: System::Void change_trigger_locations_unknown_1(System::Object^  sender, System::EventArgs^  e)
	{
		if(SelectedTask)
		{
			try
			{
				// check if value really changed
				if(ByteArray_to_HexString(SelectedTask->trigger_locations->unknown_1) != textBox_trigger_locations_unknown_1->Text)
				{
					SelectedTask->trigger_locations->unknown_1 = HexString_to_ByteArray(textBox_trigger_locations_unknown_1->Text);

					// call debug function
					TriggerDebug((Control^)sender);
				}
			}
			catch(...)
			{
				MessageBox::Show("FORMAT ERROR\nInput value must be in the correct format!");
			}
		}
	}
	private: System::Void change_trigger_locations_span(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e)
	{
		if(SelectedTask)
		{
			try
			{
				int r = dataGridView_trigger_location_spans->CurrentCell->RowIndex;
				switch(dataGridView_trigger_location_spans->CurrentCell->ColumnIndex)
				{
					case 0:		SelectedTask->trigger_locations->spans[r]->north = Convert::ToSingle(dataGridView_trigger_location_spans->CurrentCell->Value);
								break;
					case 1:		SelectedTask->trigger_locations->spans[r]->south = Convert::ToSingle(dataGridView_trigger_location_spans->CurrentCell->Value);
								break;
					case 2:		SelectedTask->trigger_locations->spans[r]->west = Convert::ToSingle(dataGridView_trigger_location_spans->CurrentCell->Value);
								break;
					case 3:		SelectedTask->trigger_locations->spans[r]->east = Convert::ToSingle(dataGridView_trigger_location_spans->CurrentCell->Value);
								break;
					case 4:		SelectedTask->trigger_locations->spans[r]->bottom = Convert::ToSingle(dataGridView_trigger_location_spans->CurrentCell->Value);
								break;
					case 5:		SelectedTask->trigger_locations->spans[r]->top = Convert::ToSingle(dataGridView_trigger_location_spans->CurrentCell->Value);
								break;
				}
				// call debug function
				TriggerDebug((Control^)sender);
			}
			catch(...)
			{
				MessageBox::Show("FORMAT ERROR\nInput value must be in the correct format!");
			}
		}
	}
	private: System::Void add_trigger_locations_span(System::Object^  sender, System::EventArgs^  e)
	{
		if(SelectedTask)
		{
			SelectedTask->trigger_locations->count++;
			Array::Resize(SelectedTask->trigger_locations->spans, SelectedTask->trigger_locations->spans->Length+1);
			SelectedTask->trigger_locations->spans[SelectedTask->trigger_locations->spans->Length-1] = gcnew Span();

			SelectedTask->trigger_locations->spans[SelectedTask->trigger_locations->spans->Length-1]->north = 0.0;
			SelectedTask->trigger_locations->spans[SelectedTask->trigger_locations->spans->Length-1]->south = 0.0;
			SelectedTask->trigger_locations->spans[SelectedTask->trigger_locations->spans->Length-1]->west = 0.0;
			SelectedTask->trigger_locations->spans[SelectedTask->trigger_locations->spans->Length-1]->east = 0.0;
			SelectedTask->trigger_locations->spans[SelectedTask->trigger_locations->spans->Length-1]->bottom = 0.0;
			SelectedTask->trigger_locations->spans[SelectedTask->trigger_locations->spans->Length-1]->top = 0.0;

			dataGridView_trigger_location_spans->Rows->Add(gcnew array<String^>{"0.0", "0.0", "0.0", "0.0", "0.0", "0.0"});
		}
	}
	private: System::Void remove_trigger_locations_span(System::Object^  sender, System::EventArgs^  e)
	{
		if(SelectedTask)
		{
			if(SelectedTask->trigger_locations->count>0 && dataGridView_trigger_location_spans->CurrentCell->RowIndex>-1)
			{
				SelectedTask->trigger_locations->count--;

				array<Span^>^ temp = gcnew array<Span^>(SelectedTask->trigger_locations->count);
				Array::Copy(SelectedTask->trigger_locations->spans, 0, temp, 0, dataGridView_trigger_location_spans->CurrentCell->RowIndex);
				Array::Copy(SelectedTask->trigger_locations->spans, dataGridView_trigger_location_spans->CurrentCell->RowIndex+1, temp, dataGridView_trigger_location_spans->CurrentCell->RowIndex, SelectedTask->trigger_locations->count - dataGridView_trigger_location_spans->CurrentCell->RowIndex);
				SelectedTask->trigger_locations->spans = temp;

				dataGridView_trigger_location_spans->Rows->RemoveAt(dataGridView_trigger_location_spans->CurrentCell->RowIndex);
			}
		}
	}
	// unknown locations
	private: System::Void change_unknown_locations_has_spans(System::Object^  sender, System::EventArgs^  e)
	{
		if(SelectedTask)
		{
			try
			{
				// check if value really changed
				if(SelectedTask->unknown_locations->has_location != checkBox_unknown_locations_has_spans->Checked)
				{
					SelectedTask->unknown_locations->has_location = checkBox_unknown_locations_has_spans->Checked;

					// call debug function
					TriggerDebug((Control^)sender);
				}
			}
			catch(...)
			{
				MessageBox::Show("FORMAT ERROR\nInput value must be in the correct format!");
			}
		}
	}
	private: System::Void change_unknown_locations_map_id(System::Object^  sender, System::EventArgs^  e)
	{
		if(SelectedTask)
		{
			try
			{
				// check if value really changed
				if(SelectedTask->unknown_locations->map_id != Convert::ToInt32(textBox_unknown_locations_map_id->Text))
				{
					SelectedTask->unknown_locations->map_id = Convert::ToInt32(textBox_unknown_locations_map_id->Text);

					// call debug function
					TriggerDebug((Control^)sender);
				}
			}
			catch(...)
			{
				MessageBox::Show("FORMAT ERROR\nInput value must be in the correct format!");
			}
		}
	}
	private: System::Void change_unknown_locations_unknown_1(System::Object^  sender, System::EventArgs^  e)
	{
		if(SelectedTask)
		{
			try
			{
				// check if value really changed
				if(ByteArray_to_HexString(SelectedTask->unknown_locations->unknown_1) != textBox_unknown_locations_unknown_1->Text)
				{
					SelectedTask->unknown_locations->unknown_1 = HexString_to_ByteArray(textBox_unknown_locations_unknown_1->Text);

					// call debug function
					TriggerDebug((Control^)sender);
				}
			}
			catch(...)
			{
				MessageBox::Show("FORMAT ERROR\nInput value must be in the correct format!");
			}
		}
	}
	private: System::Void change_unknown_locations_span(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e)
	{
		if(SelectedTask)
		{
			try
			{
				int r = dataGridView_unknown_location_spans->CurrentCell->RowIndex;
				switch(dataGridView_unknown_location_spans->CurrentCell->ColumnIndex)
				{
					case 0:		SelectedTask->unknown_locations->spans[r]->north = Convert::ToSingle(dataGridView_unknown_location_spans->CurrentCell->Value);
								break;
					case 1:		SelectedTask->unknown_locations->spans[r]->south = Convert::ToSingle(dataGridView_unknown_location_spans->CurrentCell->Value);
								break;
					case 2:		SelectedTask->unknown_locations->spans[r]->west = Convert::ToSingle(dataGridView_unknown_location_spans->CurrentCell->Value);
								break;
					case 3:		SelectedTask->unknown_locations->spans[r]->east = Convert::ToSingle(dataGridView_unknown_location_spans->CurrentCell->Value);
								break;
					case 4:		SelectedTask->unknown_locations->spans[r]->bottom = Convert::ToSingle(dataGridView_unknown_location_spans->CurrentCell->Value);
								break;
					case 5:		SelectedTask->unknown_locations->spans[r]->top = Convert::ToSingle(dataGridView_unknown_location_spans->CurrentCell->Value);
								break;
				}
				// call debug function
				TriggerDebug((Control^)sender);
			}
			catch(...)
			{
				MessageBox::Show("FORMAT ERROR\nInput value must be in the correct format!");
			}
		}
	}
	private: System::Void add_unknown_locations_span(System::Object^  sender, System::EventArgs^  e)
	{
		if(SelectedTask)
		{
			SelectedTask->unknown_locations->count++;
			Array::Resize(SelectedTask->unknown_locations->spans, SelectedTask->unknown_locations->spans->Length+1);
			SelectedTask->unknown_locations->spans[SelectedTask->unknown_locations->spans->Length-1] = gcnew Span();

			SelectedTask->unknown_locations->spans[SelectedTask->unknown_locations->spans->Length-1]->north = 0.0;
			SelectedTask->unknown_locations->spans[SelectedTask->unknown_locations->spans->Length-1]->south = 0.0;
			SelectedTask->unknown_locations->spans[SelectedTask->unknown_locations->spans->Length-1]->west = 0.0;
			SelectedTask->unknown_locations->spans[SelectedTask->unknown_locations->spans->Length-1]->east = 0.0;
			SelectedTask->unknown_locations->spans[SelectedTask->unknown_locations->spans->Length-1]->bottom = 0.0;
			SelectedTask->unknown_locations->spans[SelectedTask->unknown_locations->spans->Length-1]->top = 0.0;

			dataGridView_unknown_location_spans->Rows->Add(gcnew array<String^>{"0.0", "0.0", "0.0", "0.0", "0.0", "0.0"});
		}
	}
	private: System::Void remove_unknown_locations_span(System::Object^  sender, System::EventArgs^  e)
	{
		if(SelectedTask)
		{
			if(SelectedTask->unknown_locations->count>0 && dataGridView_unknown_location_spans->CurrentCell->RowIndex>-1)
			{
				SelectedTask->unknown_locations->count--;

				array<Span^>^ temp = gcnew array<Span^>(SelectedTask->unknown_locations->count);
				Array::Copy(SelectedTask->unknown_locations->spans, 0, temp, 0, dataGridView_unknown_location_spans->CurrentCell->RowIndex);
				Array::Copy(SelectedTask->unknown_locations->spans, dataGridView_unknown_location_spans->CurrentCell->RowIndex+1, temp, dataGridView_unknown_location_spans->CurrentCell->RowIndex, SelectedTask->unknown_locations->count - dataGridView_unknown_location_spans->CurrentCell->RowIndex);
				SelectedTask->unknown_locations->spans = temp;

				dataGridView_unknown_location_spans->Rows->RemoveAt(dataGridView_unknown_location_spans->CurrentCell->RowIndex);
			}
		}
	}

	// valid locations (fail on leave)
	private: System::Void change_valid_locations_has_spans(System::Object^  sender, System::EventArgs^  e)
	{
		if(SelectedTask)
		{
			try
			{
				// check if value really changed
				if(SelectedTask->valid_locations->has_location != checkBox_valid_locations_has_spans->Checked)
				{
					SelectedTask->valid_locations->has_location = checkBox_valid_locations_has_spans->Checked;

					// call debug function
					TriggerDebug((Control^)sender);
				}
			}
			catch(...)
			{
				MessageBox::Show("FORMAT ERROR\nInput value must be in the correct format!");
			}
		}
	}
	private: System::Void change_valid_locations_map_id(System::Object^  sender, System::EventArgs^  e)
	{
		if(SelectedTask)
		{
			try
			{
				// check if value really changed
				if(SelectedTask->valid_locations->map_id != Convert::ToInt32(textBox_valid_locations_map_id->Text))
				{
					SelectedTask->valid_locations->map_id = Convert::ToInt32(textBox_valid_locations_map_id->Text);

					// call debug function
					TriggerDebug((Control^)sender);
				}
			}
			catch(...)
			{
				MessageBox::Show("FORMAT ERROR\nInput value must be in the correct format!");
			}
		}
	}
	private: System::Void change_valid_locations_unknown_1(System::Object^  sender, System::EventArgs^  e)
	{
		if(SelectedTask)
		{
			try
			{
				// check if value really changed
				if(ByteArray_to_HexString(SelectedTask->valid_locations->unknown_1) != textBox_valid_locations_unknown_1->Text)
				{
					SelectedTask->valid_locations->unknown_1 = HexString_to_ByteArray(textBox_valid_locations_unknown_1->Text);

					// call debug function
					TriggerDebug((Control^)sender);
				}
			}
			catch(...)
			{
				MessageBox::Show("FORMAT ERROR\nInput value must be in the correct format!");
			}
		}
	}
	private: System::Void change_valid_locations_span(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e)
	{
		if(SelectedTask)
		{
			try
			{
				int r = dataGridView_valid_location_spans->CurrentCell->RowIndex;
				switch(dataGridView_valid_location_spans->CurrentCell->ColumnIndex)
				{
					case 0:		SelectedTask->valid_locations->spans[r]->north = Convert::ToSingle(dataGridView_valid_location_spans->CurrentCell->Value);
								break;
					case 1:		SelectedTask->valid_locations->spans[r]->south = Convert::ToSingle(dataGridView_valid_location_spans->CurrentCell->Value);
								break;
					case 2:		SelectedTask->valid_locations->spans[r]->west = Convert::ToSingle(dataGridView_valid_location_spans->CurrentCell->Value);
								break;
					case 3:		SelectedTask->valid_locations->spans[r]->east = Convert::ToSingle(dataGridView_valid_location_spans->CurrentCell->Value);
								break;
					case 4:		SelectedTask->valid_locations->spans[r]->bottom = Convert::ToSingle(dataGridView_valid_location_spans->CurrentCell->Value);
								break;
					case 5:		SelectedTask->valid_locations->spans[r]->top = Convert::ToSingle(dataGridView_valid_location_spans->CurrentCell->Value);
								break;
				}
				// call debug function
				TriggerDebug((Control^)sender);
			}
			catch(...)
			{
				MessageBox::Show("FORMAT ERROR\nInput value must be in the correct format!");
			}
		}
	}
	private: System::Void add_valid_locations_span(System::Object^  sender, System::EventArgs^  e)
	{
		if(SelectedTask)
		{
			SelectedTask->valid_locations->count++;
			Array::Resize(SelectedTask->valid_locations->spans, SelectedTask->valid_locations->spans->Length+1);
			SelectedTask->valid_locations->spans[SelectedTask->valid_locations->spans->Length-1] = gcnew Span();

			SelectedTask->valid_locations->spans[SelectedTask->valid_locations->spans->Length-1]->north = 0.0;
			SelectedTask->valid_locations->spans[SelectedTask->valid_locations->spans->Length-1]->south = 0.0;
			SelectedTask->valid_locations->spans[SelectedTask->valid_locations->spans->Length-1]->west = 0.0;
			SelectedTask->valid_locations->spans[SelectedTask->valid_locations->spans->Length-1]->east = 0.0;
			SelectedTask->valid_locations->spans[SelectedTask->valid_locations->spans->Length-1]->bottom = 0.0;
			SelectedTask->valid_locations->spans[SelectedTask->valid_locations->spans->Length-1]->top = 0.0;

			dataGridView_valid_location_spans->Rows->Add(gcnew array<String^>{"0.0", "0.0", "0.0", "0.0", "0.0", "0.0"});
		}
	}
	private: System::Void remove_valid_locations_span(System::Object^  sender, System::EventArgs^  e)
	{
		if(SelectedTask)
		{
			if(SelectedTask->valid_locations->count>0 && dataGridView_valid_location_spans->CurrentCell->RowIndex>-1)
			{
				SelectedTask->valid_locations->count--;

				array<Span^>^ temp = gcnew array<Span^>(SelectedTask->valid_locations->count);
				Array::Copy(SelectedTask->valid_locations->spans, 0, temp, 0, dataGridView_valid_location_spans->CurrentCell->RowIndex);
				Array::Copy(SelectedTask->valid_locations->spans, dataGridView_valid_location_spans->CurrentCell->RowIndex+1, temp, dataGridView_valid_location_spans->CurrentCell->RowIndex, SelectedTask->valid_locations->count - dataGridView_valid_location_spans->CurrentCell->RowIndex);
				SelectedTask->valid_locations->spans = temp;

				dataGridView_valid_location_spans->Rows->RemoveAt(dataGridView_valid_location_spans->CurrentCell->RowIndex);
			}
		}
	}
	// basic I
	private: System::Void change_unknown_17(System::Object^  sender, System::EventArgs^  e)
	{
		if(SelectedTask)
		{
			try
			{
				// check if value really changed
				if(SelectedTask->UNKNOWN_17 != checkBox_unknown_17->Checked)
				{
					SelectedTask->UNKNOWN_17 = checkBox_unknown_17->Checked;

					// call debug function
					TriggerDebug((Control^)sender);
				}
			}
			catch(...)
			{
				MessageBox::Show("FORMAT ERROR\nInput value must be in the correct format!");
			}
		}
	}
	private: System::Void change_has_instant_teleport(System::Object^  sender, System::EventArgs^  e)
	{
		if(SelectedTask)
		{
			try
			{
				// check if value really changed
				if(SelectedTask->has_instant_teleport != checkBox_has_instant_teleport->Checked)
				{
					SelectedTask->has_instant_teleport = checkBox_has_instant_teleport->Checked;

					// call debug function
					TriggerDebug((Control^)sender);
				}
			}
			catch(...)
			{
				MessageBox::Show("FORMAT ERROR\nInput value must be in the correct format!");
			}
		}
	}
	private: System::Void change_instant_teleport_location_map_id(System::Object^  sender, System::EventArgs^  e)
	{
		if(SelectedTask)
		{
			try
			{
				// check if value really changed
				if(SelectedTask->instant_teleport_location->map_id != Convert::ToInt32(textBox_instant_teleport_location_map_id->Text))
				{
					SelectedTask->instant_teleport_location->map_id = Convert::ToInt32(textBox_instant_teleport_location_map_id->Text);

					// call debug function
					TriggerDebug((Control^)sender);
				}
			}
			catch(...)
			{
				MessageBox::Show("FORMAT ERROR\nInput value must be in the correct format!");
			}
		}
	}

	private: System::Void change_instant_teleport_location_x(System::Object^  sender, System::EventArgs^  e)
	{
		if(SelectedTask)
		{
			try
			{
				// check if value really changed
				if(SelectedTask->instant_teleport_location->x != Convert::ToSingle(textBox_instant_teleport_location_x->Text))
				{
					SelectedTask->instant_teleport_location->x = Convert::ToSingle(textBox_instant_teleport_location_x->Text);

					// call debug function
					TriggerDebug((Control^)sender);
				}
			}
			catch(...)
			{
				MessageBox::Show("FORMAT ERROR\nInput value must be in the correct format!");
			}
		}
	}

	private: System::Void change_instant_teleport_location_alt(System::Object^  sender, System::EventArgs^  e)
	{
		if(SelectedTask)
		{
			try
			{
				// check if value really changed
				if(SelectedTask->instant_teleport_location->altitude != Convert::ToSingle(textBox_instant_teleport_location_alt->Text))
				{
					SelectedTask->instant_teleport_location->altitude = Convert::ToSingle(textBox_instant_teleport_location_alt->Text);

					// call debug function
					TriggerDebug((Control^)sender);
				}
			}
			catch(...)
			{
				MessageBox::Show("FORMAT ERROR\nInput value must be in the correct format!");
			}
		}
	}

	private: System::Void change_instant_teleport_location_z(System::Object^  sender, System::EventArgs^  e)
	{
		if(SelectedTask)
		{
			try
			{
				// check if value really changed
				if(SelectedTask->instant_teleport_location->z != Convert::ToSingle(textBox_instant_teleport_location_z->Text))
				{
					SelectedTask->instant_teleport_location->z = Convert::ToSingle(textBox_instant_teleport_location_z->Text);

					// call debug function
					TriggerDebug((Control^)sender);
				}
			}
			catch(...)
			{
				MessageBox::Show("FORMAT ERROR\nInput value must be in the correct format!");
			}
		}
	}

	private: System::Void change_ai_trigger(System::Object^  sender, System::EventArgs^  e)
	{
		if(SelectedTask)
		{
			try
			{
				// check if value really changed
				if(SelectedTask->ai_trigger != Convert::ToInt32(textBox_ai_trigger->Text))
				{
					SelectedTask->ai_trigger = Convert::ToInt32(textBox_ai_trigger->Text);

					// call debug function
					TriggerDebug((Control^)sender);
				}
			}
			catch(...)
			{
				MessageBox::Show("FORMAT ERROR\nInput value must be in the correct format!");
			}
		}
	}

	private: System::Void change_unknown_18(System::Object^  sender, System::EventArgs^  e)
	{
		if(SelectedTask)
		{
			try
			{
				// check if value really changed
				if(SelectedTask->UNKNOWN_18 != checkBox_unknown_18->Checked)
				{
					SelectedTask->UNKNOWN_18 = checkBox_unknown_18->Checked;

					// call debug function
					TriggerDebug((Control^)sender);
				}
			}
			catch(...)
			{
				MessageBox::Show("FORMAT ERROR\nInput value must be in the correct format!");
			}
		}
	}
	private: System::Void change_unknown_19(System::Object^  sender, System::EventArgs^  e)
	{
		if(SelectedTask)
		{
			try
			{
				// check if value really changed
				if(SelectedTask->UNKNOWN_19 != checkBox_unknown_19->Checked)
				{
					SelectedTask->UNKNOWN_19 = checkBox_unknown_19->Checked;

					// call debug function
					TriggerDebug((Control^)sender);
				}
			}
			catch(...)
			{
				MessageBox::Show("FORMAT ERROR\nInput value must be in the correct format!");
			}
		}
	}
	private: System::Void change_unknown_20(System::Object^  sender, System::EventArgs^  e)
	{
		if(SelectedTask)
		{
			try
			{
				// check if value really changed
				if(SelectedTask->UNKNOWN_20 != checkBox_unknown_20->Checked)
				{
					SelectedTask->UNKNOWN_20 = checkBox_unknown_20->Checked;

					// call debug function
					TriggerDebug((Control^)sender);
				}
			}
			catch(...)
			{
				MessageBox::Show("FORMAT ERROR\nInput value must be in the correct format!");
			}
		}
	}
	private: System::Void change_unknown_21(System::Object^  sender, System::EventArgs^  e)
	{
		if(SelectedTask)
		{
			try
			{
				// check if value really changed
				if(SelectedTask->UNKNOWN_21 != checkBox_unknown_21->Checked)
				{
					SelectedTask->UNKNOWN_21 = checkBox_unknown_21->Checked;

					// call debug function
					TriggerDebug((Control^)sender);
				}
			}
			catch(...)
			{
				MessageBox::Show("FORMAT ERROR\nInput value must be in the correct format!");
			}
		}
	}
	private: System::Void change_unknown_22(System::Object^  sender, System::EventArgs^  e)
	{
		if(SelectedTask)
		{
			try
			{
				// check if value really changed
				if(SelectedTask->UNKNOWN_22 != checkBox_unknown_22->Checked)
				{
					SelectedTask->UNKNOWN_22 = checkBox_unknown_22->Checked;

					// call debug function
					TriggerDebug((Control^)sender);
				}
			}
			catch(...)
			{
				MessageBox::Show("FORMAT ERROR\nInput value must be in the correct format!");
			}
		}
	}
	private: System::Void change_unknown_23(System::Object^  sender, System::EventArgs^  e)
	{
		if(SelectedTask)
		{
			try
			{
				// check if value really changed
				if(SelectedTask->UNKNOWN_23 != checkBox_unknown_23->Checked)
				{
					SelectedTask->UNKNOWN_23 = checkBox_unknown_23->Checked;

					// call debug function
					TriggerDebug((Control^)sender);
				}
			}
			catch(...)
			{
				MessageBox::Show("FORMAT ERROR\nInput value must be in the correct format!");
			}
		}
	}
	private: System::Void change_unknown_level(System::Object^  sender, System::EventArgs^  e)
	{
		if(SelectedTask)
		{
			try
			{
				// check if value really changed
				if(SelectedTask->UNKNOWN_LEVEL != Convert::ToInt32(textBox_unknown_level->Text))
				{
					SelectedTask->UNKNOWN_LEVEL = Convert::ToInt32(textBox_unknown_level->Text);

					// call debug function
					TriggerDebug((Control^)sender);
				}
			}
			catch(...)
			{
				MessageBox::Show("FORMAT ERROR\nInput value must be in the correct format!");
			}
		}
	}

	private: System::Void change_mark_available_icon(System::Object^  sender, System::EventArgs^  e)
	{
		if(SelectedTask)
		{
			try
			{
				// check if value really changed
				if(SelectedTask->mark_available_icon != checkBox_mark_available_icon->Checked)
				{
					SelectedTask->mark_available_icon = checkBox_mark_available_icon->Checked;

					// call debug function
					TriggerDebug((Control^)sender);
				}
			}
			catch(...)
			{
				MessageBox::Show("FORMAT ERROR\nInput value must be in the correct format!");
			}
		}
	}
	private: System::Void change_mark_available_point(System::Object^  sender, System::EventArgs^  e)
	{
		if(SelectedTask)
		{
			try
			{
				// check if value really changed
				if(SelectedTask->mark_available_point != checkBox_mark_available_point->Checked)
				{
					SelectedTask->mark_available_point = checkBox_mark_available_point->Checked;

					// call debug function
					TriggerDebug((Control^)sender);
				}
			}
			catch(...)
			{
				MessageBox::Show("FORMAT ERROR\nInput value must be in the correct format!");
			}
		}
	}
	private: System::Void change_quest_npc(System::Object^  sender, System::EventArgs^  e)
	{
		if(SelectedTask)
		{
			try
			{
				// check if value really changed
				if(SelectedTask->quest_npc != Convert::ToInt32(textBox_quest_npc->Text))
				{
					SelectedTask->quest_npc = Convert::ToInt32(textBox_quest_npc->Text);

					// call debug function
					TriggerDebug((Control^)sender);
				}
			}
			catch(...)
			{
				MessageBox::Show("FORMAT ERROR\nInput value must be in the correct format!");
			}
		}
	}

	private: System::Void change_reward_npc(System::Object^  sender, System::EventArgs^  e)
	{
		if(SelectedTask)
		{
			try
			{
				// check if value really changed
				if(SelectedTask->reward_npc != Convert::ToInt32(textBox_reward_npc->Text))
				{
					SelectedTask->reward_npc = Convert::ToInt32(textBox_reward_npc->Text);

					// call debug function
					TriggerDebug((Control^)sender);
				}
			}
			catch(...)
			{
				MessageBox::Show("FORMAT ERROR\nInput value must be in the correct format!");
			}
		}
	}

	private: System::Void change_craft_skill(System::Object^  sender, System::EventArgs^  e)
	{
		if(SelectedTask)
		{
			try
			{
				// check if value really changed
				if(SelectedTask->craft_skill != checkBox_craft_skill->Checked)
				{
					SelectedTask->craft_skill = checkBox_craft_skill->Checked;

					// call debug function
					TriggerDebug((Control^)sender);
				}
			}
			catch(...)
			{
				MessageBox::Show("FORMAT ERROR\nInput value must be in the correct format!");
			}
		}
	}
	private: System::Void change_unknown_24(System::Object^  sender, System::EventArgs^  e)
	{
		if(SelectedTask)
		{
			try
			{
				// check if value really changed
				if(SelectedTask->UNKNOWN_24 != checkBox_unknown_24->Checked)
				{
					SelectedTask->UNKNOWN_24 = checkBox_unknown_24->Checked;

					// call debug function
					TriggerDebug((Control^)sender);
				}
			}
			catch(...)
			{
				MessageBox::Show("FORMAT ERROR\nInput value must be in the correct format!");
			}
		}
	}
	private: System::Void change_unknown_25(System::Object^  sender, System::EventArgs^  e)
	{
		if(SelectedTask)
		{
			try
			{
				// check if value really changed
				if(SelectedTask->UNKNOWN_25 != checkBox_unknown_25->Checked)
				{
					SelectedTask->UNKNOWN_25 = checkBox_unknown_25->Checked;

					// call debug function
					TriggerDebug((Control^)sender);
				}
			}
			catch(...)
			{
				MessageBox::Show("FORMAT ERROR\nInput value must be in the correct format!");
			}
		}
	}
	private: System::Void change_unknown_26(System::Object^  sender, System::EventArgs^  e)
	{
		if(SelectedTask)
		{
			try
			{
				// check if value really changed
				if(SelectedTask->UNKNOWN_26 != checkBox_unknown_26->Checked)
				{
					SelectedTask->UNKNOWN_26 = checkBox_unknown_26->Checked;

					// call debug function
					TriggerDebug((Control^)sender);
				}
			}
			catch(...)
			{
				MessageBox::Show("FORMAT ERROR\nInput value must be in the correct format!");
			}
		}
	}
	private: System::Void change_unknown_26_01(System::Object^  sender, System::EventArgs^  e)
	{
		if(SelectedTask)
		{
			try
			{
				// check if value really changed
				if(ByteArray_to_HexString(SelectedTask->UNKNOWN_26_01) != textBox_unknown_26_01->Text)
				{
					SelectedTask->UNKNOWN_26_01 = HexString_to_ByteArray(textBox_unknown_26_01->Text);

					// call debug function
					TriggerDebug((Control^)sender);
				}
			}
			catch(...)
			{
				MessageBox::Show("FORMAT ERROR\nInput value must be in the correct format!");
			}
		}
	}

	private: System::Void change_level_min(System::Object^  sender, System::EventArgs^  e)
	{
		if(SelectedTask)
		{
			try
			{
				// check if value really changed
				if(SelectedTask->level_min != Convert::ToInt32(textBox_level_min->Text))
				{
					SelectedTask->level_min = Convert::ToInt32(textBox_level_min->Text);

					// call debug function
					TriggerDebug((Control^)sender);
				}
			}
			catch(...)
			{
				MessageBox::Show("FORMAT ERROR\nInput value must be in the correct format!");
			}
		}
	}
	private: System::Void change_level_max(System::Object^  sender, System::EventArgs^  e)
	{
		if(SelectedTask)
		{
			try
			{
				// check if value really changed
				if(SelectedTask->level_max != Convert::ToInt32(textBox_level_max->Text))
				{
					SelectedTask->level_max = Convert::ToInt32(textBox_level_max->Text);

					// call debug function
					TriggerDebug((Control^)sender);
				}
			}
			catch(...)
			{
				MessageBox::Show("FORMAT ERROR\nInput value must be in the correct format!");
			}
		}
	}

};