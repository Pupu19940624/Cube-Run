#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.UI.Dropdown
struct Dropdown_t162;
// UnityEngine.RectTransform
struct RectTransform_t154;
// UnityEngine.UI.Text
struct Text_t153;
// UnityEngine.UI.Image
struct Image_t24;
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>
struct List_1_t158;
// UnityEngine.UI.Dropdown/DropdownEvent
struct DropdownEvent_t159;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t28;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t79;
// UnityEngine.GameObject
struct GameObject_t36;
// UnityEngine.Canvas
struct Canvas_t173;
// UnityEngine.UI.Dropdown/DropdownItem
struct DropdownItem_t152;
// UnityEngine.UI.Dropdown/OptionData
struct OptionData_t156;
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem>
struct List_1_t164;
// System.Collections.IEnumerator
struct IEnumerator_t40;
// UnityEngine.UI.Toggle
struct Toggle_t155;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.UI.Dropdown::.ctor()
extern "C" void Dropdown__ctor_m727 (Dropdown_t162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.Dropdown::get_template()
extern "C" RectTransform_t154 * Dropdown_get_template_m728 (Dropdown_t162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::set_template(UnityEngine.RectTransform)
extern "C" void Dropdown_set_template_m729 (Dropdown_t162 * __this, RectTransform_t154 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Text UnityEngine.UI.Dropdown::get_captionText()
extern "C" Text_t153 * Dropdown_get_captionText_m730 (Dropdown_t162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::set_captionText(UnityEngine.UI.Text)
extern "C" void Dropdown_set_captionText_m731 (Dropdown_t162 * __this, Text_t153 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Image UnityEngine.UI.Dropdown::get_captionImage()
extern "C" Image_t24 * Dropdown_get_captionImage_m732 (Dropdown_t162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::set_captionImage(UnityEngine.UI.Image)
extern "C" void Dropdown_set_captionImage_m733 (Dropdown_t162 * __this, Image_t24 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Text UnityEngine.UI.Dropdown::get_itemText()
extern "C" Text_t153 * Dropdown_get_itemText_m734 (Dropdown_t162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::set_itemText(UnityEngine.UI.Text)
extern "C" void Dropdown_set_itemText_m735 (Dropdown_t162 * __this, Text_t153 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Image UnityEngine.UI.Dropdown::get_itemImage()
extern "C" Image_t24 * Dropdown_get_itemImage_m736 (Dropdown_t162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::set_itemImage(UnityEngine.UI.Image)
extern "C" void Dropdown_set_itemImage_m737 (Dropdown_t162 * __this, Image_t24 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData> UnityEngine.UI.Dropdown::get_options()
extern "C" List_1_t158 * Dropdown_get_options_m738 (Dropdown_t162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::set_options(System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>)
extern "C" void Dropdown_set_options_m739 (Dropdown_t162 * __this, List_1_t158 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Dropdown/DropdownEvent UnityEngine.UI.Dropdown::get_onValueChanged()
extern "C" DropdownEvent_t159 * Dropdown_get_onValueChanged_m740 (Dropdown_t162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::set_onValueChanged(UnityEngine.UI.Dropdown/DropdownEvent)
extern "C" void Dropdown_set_onValueChanged_m741 (Dropdown_t162 * __this, DropdownEvent_t159 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.Dropdown::get_value()
extern "C" int32_t Dropdown_get_value_m742 (Dropdown_t162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::set_value(System.Int32)
extern "C" void Dropdown_set_value_m743 (Dropdown_t162 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::Awake()
extern "C" void Dropdown_Awake_m744 (Dropdown_t162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::Refresh()
extern "C" void Dropdown_Refresh_m745 (Dropdown_t162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::SetupTemplate()
extern "C" void Dropdown_SetupTemplate_m746 (Dropdown_t162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
extern "C" void Dropdown_OnPointerClick_m747 (Dropdown_t162 * __this, PointerEventData_t28 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::OnSubmit(UnityEngine.EventSystems.BaseEventData)
extern "C" void Dropdown_OnSubmit_m748 (Dropdown_t162 * __this, BaseEventData_t79 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::OnCancel(UnityEngine.EventSystems.BaseEventData)
extern "C" void Dropdown_OnCancel_m749 (Dropdown_t162 * __this, BaseEventData_t79 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::Show()
extern "C" void Dropdown_Show_m750 (Dropdown_t162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.Dropdown::CreateBlocker(UnityEngine.Canvas)
extern "C" GameObject_t36 * Dropdown_CreateBlocker_m751 (Dropdown_t162 * __this, Canvas_t173 * ___rootCanvas, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::DestroyBlocker(UnityEngine.GameObject)
extern "C" void Dropdown_DestroyBlocker_m752 (Dropdown_t162 * __this, GameObject_t36 * ___blocker, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.Dropdown::CreateDropdownList(UnityEngine.GameObject)
extern "C" GameObject_t36 * Dropdown_CreateDropdownList_m753 (Dropdown_t162 * __this, GameObject_t36 * ___template, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::DestroyDropdownList(UnityEngine.GameObject)
extern "C" void Dropdown_DestroyDropdownList_m754 (Dropdown_t162 * __this, GameObject_t36 * ___dropdownList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Dropdown/DropdownItem UnityEngine.UI.Dropdown::CreateItem(UnityEngine.UI.Dropdown/DropdownItem)
extern "C" DropdownItem_t152 * Dropdown_CreateItem_m755 (Dropdown_t162 * __this, DropdownItem_t152 * ___itemTemplate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::DestroyItem(UnityEngine.UI.Dropdown/DropdownItem)
extern "C" void Dropdown_DestroyItem_m756 (Dropdown_t162 * __this, DropdownItem_t152 * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Dropdown/DropdownItem UnityEngine.UI.Dropdown::AddItem(UnityEngine.UI.Dropdown/OptionData,System.Boolean,UnityEngine.UI.Dropdown/DropdownItem,System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem>)
extern "C" DropdownItem_t152 * Dropdown_AddItem_m757 (Dropdown_t162 * __this, OptionData_t156 * ___data, bool ___selected, DropdownItem_t152 * ___itemTemplate, List_1_t164 * ___items, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::AlphaFadeList(System.Single,System.Single)
extern "C" void Dropdown_AlphaFadeList_m758 (Dropdown_t162 * __this, float ___duration, float ___alpha, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::AlphaFadeList(System.Single,System.Single,System.Single)
extern "C" void Dropdown_AlphaFadeList_m759 (Dropdown_t162 * __this, float ___duration, float ___start, float ___end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::SetAlpha(System.Single)
extern "C" void Dropdown_SetAlpha_m760 (Dropdown_t162 * __this, float ___alpha, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::Hide()
extern "C" void Dropdown_Hide_m761 (Dropdown_t162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.UI.Dropdown::DelayedDestroyDropdownList(System.Single)
extern "C" Object_t * Dropdown_DelayedDestroyDropdownList_m762 (Dropdown_t162 * __this, float ___delay, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::OnSelectItem(UnityEngine.UI.Toggle)
extern "C" void Dropdown_OnSelectItem_m763 (Dropdown_t162 * __this, Toggle_t155 * ___toggle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
