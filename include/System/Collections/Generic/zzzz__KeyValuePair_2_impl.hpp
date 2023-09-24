#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "GlobalNamespace/zzzz__MirrorRendererSO_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpace_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "GlobalNamespace/zzzz__SongPackMask_def.hpp"
#include "MS/Internal/Xml/Cache/zzzz__XPathNodeRef_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__DefaultSerializationBinder_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__ResolverContractKey_def.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__ConvertUtils_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Int32Enum_def.hpp"
#include "System/Text/RegularExpressions/zzzz__Regex_def.hpp"
#include "System/zzzz__UInt32Enum_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "System/zzzz__ValueTuple_3_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelDataLoader_def.hpp"
#include "GlobalNamespace/zzzz__OVRPassthroughLayer_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpatialAnchor_def.hpp"
#include "IgnoranceCore/zzzz__IgnoranceClientStats_def.hpp"
#include "System/Resources/zzzz__ResourceLocator_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputControlLayout_def.hpp"
#include "UnityEngine/InputSystem/UI/zzzz__InputSystemUIInputModule_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__JsonParser_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__SimpleTuple_2_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Edge_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__SimpleTuple_3_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/ResourceManagement/Diagnostics/zzzz__DiagnosticEvent_def.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__GlyphPairAdjustmentRecord_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextResourceManager_def.hpp"
#include "UnityEngine/UIElements/zzzz__ComputedStyle_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__StylePropertyValue_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextureId_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleComplexSelector_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InternedString_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__EdgeLookup_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__IntVec3_def.hpp"
#include "UnityEngine/zzzz__PropertyName_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
#include "UnityEngine/TerrainUtils/zzzz__TerrainTileCoord_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__StyleSheetCache_def.hpp"
#include "UnityEngine/UIElements/zzzz__StylePropertyAnimationSystem_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "Zenject/zzzz__BindingId_def.hpp"
#include "Zenject/zzzz__SignalSubscriptionId_def.hpp"
// Ctor Parameters [CppParam { name: "key", ty: "UnityEngine::PropertyName", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: Some("csnull") }]
constexpr System::Collections::Generic::KeyValuePair_2<UnityEngine::PropertyName,TValue>::KeyValuePair_2(UnityEngine::PropertyName key, TValue value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Collections::Generic::KeyValuePair_2<UnityEngine::PropertyName,TValue>::__set_key(UnityEngine::PropertyName value)  {
::cordl_internals::setInstanceField<UnityEngine::PropertyName, 0x0>(this->__instance, std::forward<UnityEngine::PropertyName>(value));
}
constexpr UnityEngine::PropertyName System::Collections::Generic::KeyValuePair_2<UnityEngine::PropertyName,TValue>::__get_key() const {
return ::cordl_internals::getInstanceField<UnityEngine::PropertyName, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<UnityEngine::PropertyName,TValue>::__set_value(TValue value)  {
::cordl_internals::setInstanceField<TValue, 0x8>(this->__instance, std::forward<TValue>(value));
}
constexpr TValue System::Collections::Generic::KeyValuePair_2<UnityEngine::PropertyName,TValue>::__get_value() const {
return ::cordl_internals::getInstanceField<TValue, 0x8>(this->__instance);
}
 void System::Collections::Generic::KeyValuePair_2<UnityEngine::PropertyName,TValue>::_ctor(UnityEngine::PropertyName key, TValue value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<UnityEngine::PropertyName,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::PropertyName>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value);
}
 UnityEngine::PropertyName System::Collections::Generic::KeyValuePair_2<UnityEngine::PropertyName,TValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<UnityEngine::PropertyName,TValue>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::PropertyName, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 TValue System::Collections::Generic::KeyValuePair_2<UnityEngine::PropertyName,TValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<UnityEngine::PropertyName,TValue>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Collections::Generic::KeyValuePair_2<UnityEngine::PropertyName,TValue>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<UnityEngine::PropertyName,TValue>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }]
constexpr System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::Vector2>::KeyValuePair_2(TKey key, UnityEngine::Vector2 value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::Vector2>::__set_key(TKey value)  {
::cordl_internals::setInstanceField<TKey, 0x0>(this->__instance, std::forward<TKey>(value));
}
constexpr TKey System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::Vector2>::__get_key() const {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::Vector2>::__set_value(UnityEngine::Vector2 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector2, 0x8>(this->__instance, std::forward<UnityEngine::Vector2>(value));
}
constexpr UnityEngine::Vector2 System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::Vector2>::__get_value() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector2, 0x8>(this->__instance);
}
 void System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::Vector2>::_ctor(TKey key, UnityEngine::Vector2 value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::Vector2>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value);
}
 TKey System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::Vector2>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::Vector2>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 UnityEngine::Vector2 System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::Vector2>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::Vector2>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector2, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::Vector2>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::Vector2>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__StyleSheetCache__SheetHandleKey", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: Some("csnull") }]
constexpr System::Collections::Generic::KeyValuePair_2<UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__StyleSheetCache__SheetHandleKey,TValue>::KeyValuePair_2(UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__StyleSheetCache__SheetHandleKey key, TValue value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Collections::Generic::KeyValuePair_2<UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__StyleSheetCache__SheetHandleKey,TValue>::__set_key(UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__StyleSheetCache__SheetHandleKey value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__StyleSheetCache__SheetHandleKey, 0x0>(this->__instance, std::forward<UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__StyleSheetCache__SheetHandleKey>(value));
}
constexpr UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__StyleSheetCache__SheetHandleKey System::Collections::Generic::KeyValuePair_2<UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__StyleSheetCache__SheetHandleKey,TValue>::__get_key() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__StyleSheetCache__SheetHandleKey, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__StyleSheetCache__SheetHandleKey,TValue>::__set_value(TValue value)  {
::cordl_internals::setInstanceField<TValue, 0x8>(this->__instance, std::forward<TValue>(value));
}
constexpr TValue System::Collections::Generic::KeyValuePair_2<UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__StyleSheetCache__SheetHandleKey,TValue>::__get_value() const {
return ::cordl_internals::getInstanceField<TValue, 0x8>(this->__instance);
}
 void System::Collections::Generic::KeyValuePair_2<UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__StyleSheetCache__SheetHandleKey,TValue>::_ctor(UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__StyleSheetCache__SheetHandleKey key, TValue value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__StyleSheetCache__SheetHandleKey,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__StyleSheetCache__SheetHandleKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value);
}
 UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__StyleSheetCache__SheetHandleKey System::Collections::Generic::KeyValuePair_2<UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__StyleSheetCache__SheetHandleKey,TValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__StyleSheetCache__SheetHandleKey,TValue>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__StyleSheetCache__SheetHandleKey, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 TValue System::Collections::Generic::KeyValuePair_2<UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__StyleSheetCache__SheetHandleKey,TValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__StyleSheetCache__SheetHandleKey,TValue>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Collections::Generic::KeyValuePair_2<UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__StyleSheetCache__SheetHandleKey,TValue>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__StyleSheetCache__SheetHandleKey,TValue>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: Some("csnull") }]
constexpr System::Collections::Generic::KeyValuePair_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,TValue>::KeyValuePair_2(UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair key, TValue value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Collections::Generic::KeyValuePair_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,TValue>::__set_key(UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair, 0x0>(this->__instance, std::forward<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair>(value));
}
constexpr UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair System::Collections::Generic::KeyValuePair_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,TValue>::__get_key() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,TValue>::__set_value(TValue value)  {
::cordl_internals::setInstanceField<TValue, 0x8>(this->__instance, std::forward<TValue>(value));
}
constexpr TValue System::Collections::Generic::KeyValuePair_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,TValue>::__get_value() const {
return ::cordl_internals::getInstanceField<TValue, 0x8>(this->__instance);
}
 void System::Collections::Generic::KeyValuePair_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,TValue>::_ctor(UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair key, TValue value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value);
}
 UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair System::Collections::Generic::KeyValuePair_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,TValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,TValue>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 TValue System::Collections::Generic::KeyValuePair_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,TValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,TValue>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Collections::Generic::KeyValuePair_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,TValue>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,TValue>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
//  Writing Method size for method: System::Collections::Generic::KeyValuePair_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,System::Int32Enum>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Generic::KeyValuePair_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,System::Int32Enum>::*)(UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair, System::Int32Enum)>(&System::Collections::Generic::KeyValuePair_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,System::Int32Enum>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,System::Int32Enum>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Int32Enum>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Generic::KeyValuePair_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,System::Int32Enum>.get_Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair (System::Collections::Generic::KeyValuePair_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,System::Int32Enum>::*)()>(&System::Collections::Generic::KeyValuePair_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,System::Int32Enum>::get_Key)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,System::Int32Enum>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Generic::KeyValuePair_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,System::Int32Enum>.get_Value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Int32Enum (System::Collections::Generic::KeyValuePair_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,System::Int32Enum>::*)()>(&System::Collections::Generic::KeyValuePair_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,System::Int32Enum>::get_Value)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,System::Int32Enum>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Generic::KeyValuePair_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,System::Int32Enum>.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Collections::Generic::KeyValuePair_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,System::Int32Enum>::*)()>(&System::Collections::Generic::KeyValuePair_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,System::Int32Enum>::ToString)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Collections::Generic::KeyValuePair_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,System::Int32Enum>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "key", ty: "UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "System::Int32Enum", modifiers: "", def_value: Some("{}") }]
constexpr System::Collections::Generic::KeyValuePair_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,System::Int32Enum>::KeyValuePair_2(UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair key, System::Int32Enum value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Collections::Generic::KeyValuePair_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,System::Int32Enum>::__set_key(UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair, 0x0>(this->__instance, std::forward<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair>(value));
}
constexpr UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair System::Collections::Generic::KeyValuePair_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,System::Int32Enum>::__get_key() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,System::Int32Enum>::__set_value(System::Int32Enum value)  {
::cordl_internals::setInstanceField<System::Int32Enum, 0x8>(this->__instance, std::forward<System::Int32Enum>(value));
}
constexpr System::Int32Enum System::Collections::Generic::KeyValuePair_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,System::Int32Enum>::__get_value() const {
return ::cordl_internals::getInstanceField<System::Int32Enum, 0x8>(this->__instance);
}
 void System::Collections::Generic::KeyValuePair_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,System::Int32Enum>::_ctor(UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair key, System::Int32Enum value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,System::Int32Enum>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Int32Enum>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value);
}
 UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair System::Collections::Generic::KeyValuePair_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,System::Int32Enum>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,System::Int32Enum>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 System::Int32Enum System::Collections::Generic::KeyValuePair_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,System::Int32Enum>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,System::Int32Enum>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Int32Enum, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Collections::Generic::KeyValuePair_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,System::Int32Enum>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,System::Int32Enum>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "System::Text::RegularExpressions::System__Text__RegularExpressions__Regex__CachedCodeEntryKey", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: Some("csnull") }]
constexpr System::Collections::Generic::KeyValuePair_2<System::Text::RegularExpressions::System__Text__RegularExpressions__Regex__CachedCodeEntryKey,TValue>::KeyValuePair_2(System::Text::RegularExpressions::System__Text__RegularExpressions__Regex__CachedCodeEntryKey key, TValue value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Collections::Generic::KeyValuePair_2<System::Text::RegularExpressions::System__Text__RegularExpressions__Regex__CachedCodeEntryKey,TValue>::__set_key(System::Text::RegularExpressions::System__Text__RegularExpressions__Regex__CachedCodeEntryKey value)  {
::cordl_internals::setInstanceField<System::Text::RegularExpressions::System__Text__RegularExpressions__Regex__CachedCodeEntryKey, 0x0>(this->__instance, std::forward<System::Text::RegularExpressions::System__Text__RegularExpressions__Regex__CachedCodeEntryKey>(value));
}
constexpr System::Text::RegularExpressions::System__Text__RegularExpressions__Regex__CachedCodeEntryKey System::Collections::Generic::KeyValuePair_2<System::Text::RegularExpressions::System__Text__RegularExpressions__Regex__CachedCodeEntryKey,TValue>::__get_key() const {
return ::cordl_internals::getInstanceField<System::Text::RegularExpressions::System__Text__RegularExpressions__Regex__CachedCodeEntryKey, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<System::Text::RegularExpressions::System__Text__RegularExpressions__Regex__CachedCodeEntryKey,TValue>::__set_value(TValue value)  {
::cordl_internals::setInstanceField<TValue, 0x8>(this->__instance, std::forward<TValue>(value));
}
constexpr TValue System::Collections::Generic::KeyValuePair_2<System::Text::RegularExpressions::System__Text__RegularExpressions__Regex__CachedCodeEntryKey,TValue>::__get_value() const {
return ::cordl_internals::getInstanceField<TValue, 0x8>(this->__instance);
}
 void System::Collections::Generic::KeyValuePair_2<System::Text::RegularExpressions::System__Text__RegularExpressions__Regex__CachedCodeEntryKey,TValue>::_ctor(System::Text::RegularExpressions::System__Text__RegularExpressions__Regex__CachedCodeEntryKey key, TValue value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<System::Text::RegularExpressions::System__Text__RegularExpressions__Regex__CachedCodeEntryKey,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::RegularExpressions::System__Text__RegularExpressions__Regex__CachedCodeEntryKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value);
}
 System::Text::RegularExpressions::System__Text__RegularExpressions__Regex__CachedCodeEntryKey System::Collections::Generic::KeyValuePair_2<System::Text::RegularExpressions::System__Text__RegularExpressions__Regex__CachedCodeEntryKey,TValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<System::Text::RegularExpressions::System__Text__RegularExpressions__Regex__CachedCodeEntryKey,TValue>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Text::RegularExpressions::System__Text__RegularExpressions__Regex__CachedCodeEntryKey, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 TValue System::Collections::Generic::KeyValuePair_2<System::Text::RegularExpressions::System__Text__RegularExpressions__Regex__CachedCodeEntryKey,TValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<System::Text::RegularExpressions::System__Text__RegularExpressions__Regex__CachedCodeEntryKey,TValue>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Collections::Generic::KeyValuePair_2<System::Text::RegularExpressions::System__Text__RegularExpressions__Regex__CachedCodeEntryKey,TValue>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<System::Text::RegularExpressions::System__Text__RegularExpressions__Regex__CachedCodeEntryKey,TValue>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "GlobalNamespace::GlobalNamespace__MirrorRendererSO__CameraTransformData", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: Some("csnull") }]
constexpr System::Collections::Generic::KeyValuePair_2<GlobalNamespace::GlobalNamespace__MirrorRendererSO__CameraTransformData,TValue>::KeyValuePair_2(GlobalNamespace::GlobalNamespace__MirrorRendererSO__CameraTransformData key, TValue value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Collections::Generic::KeyValuePair_2<GlobalNamespace::GlobalNamespace__MirrorRendererSO__CameraTransformData,TValue>::__set_key(GlobalNamespace::GlobalNamespace__MirrorRendererSO__CameraTransformData value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__MirrorRendererSO__CameraTransformData, 0x0>(this->__instance, std::forward<GlobalNamespace::GlobalNamespace__MirrorRendererSO__CameraTransformData>(value));
}
constexpr GlobalNamespace::GlobalNamespace__MirrorRendererSO__CameraTransformData System::Collections::Generic::KeyValuePair_2<GlobalNamespace::GlobalNamespace__MirrorRendererSO__CameraTransformData,TValue>::__get_key() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__MirrorRendererSO__CameraTransformData, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<GlobalNamespace::GlobalNamespace__MirrorRendererSO__CameraTransformData,TValue>::__set_value(TValue value)  {
::cordl_internals::setInstanceField<TValue, 0x8>(this->__instance, std::forward<TValue>(value));
}
constexpr TValue System::Collections::Generic::KeyValuePair_2<GlobalNamespace::GlobalNamespace__MirrorRendererSO__CameraTransformData,TValue>::__get_value() const {
return ::cordl_internals::getInstanceField<TValue, 0x8>(this->__instance);
}
 void System::Collections::Generic::KeyValuePair_2<GlobalNamespace::GlobalNamespace__MirrorRendererSO__CameraTransformData,TValue>::_ctor(GlobalNamespace::GlobalNamespace__MirrorRendererSO__CameraTransformData key, TValue value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<GlobalNamespace::GlobalNamespace__MirrorRendererSO__CameraTransformData,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__MirrorRendererSO__CameraTransformData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value);
}
 GlobalNamespace::GlobalNamespace__MirrorRendererSO__CameraTransformData System::Collections::Generic::KeyValuePair_2<GlobalNamespace::GlobalNamespace__MirrorRendererSO__CameraTransformData,TValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<GlobalNamespace::GlobalNamespace__MirrorRendererSO__CameraTransformData,TValue>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__MirrorRendererSO__CameraTransformData, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 TValue System::Collections::Generic::KeyValuePair_2<GlobalNamespace::GlobalNamespace__MirrorRendererSO__CameraTransformData,TValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<GlobalNamespace::GlobalNamespace__MirrorRendererSO__CameraTransformData,TValue>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Collections::Generic::KeyValuePair_2<GlobalNamespace::GlobalNamespace__MirrorRendererSO__CameraTransformData,TValue>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<GlobalNamespace::GlobalNamespace__MirrorRendererSO__CameraTransformData,TValue>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: Some("csnull") }]
constexpr System::Collections::Generic::KeyValuePair_2<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey,TValue>::KeyValuePair_2(Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey key, TValue value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Collections::Generic::KeyValuePair_2<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey,TValue>::__set_key(Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey value)  {
::cordl_internals::setInstanceField<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey, 0x0>(this->__instance, std::forward<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey>(value));
}
constexpr Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey System::Collections::Generic::KeyValuePair_2<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey,TValue>::__get_key() const {
return ::cordl_internals::getInstanceField<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey,TValue>::__set_value(TValue value)  {
::cordl_internals::setInstanceField<TValue, 0x8>(this->__instance, std::forward<TValue>(value));
}
constexpr TValue System::Collections::Generic::KeyValuePair_2<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey,TValue>::__get_value() const {
return ::cordl_internals::getInstanceField<TValue, 0x8>(this->__instance);
}
 void System::Collections::Generic::KeyValuePair_2<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey,TValue>::_ctor(Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey key, TValue value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value);
}
 Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey System::Collections::Generic::KeyValuePair_2<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey,TValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey,TValue>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 TValue System::Collections::Generic::KeyValuePair_2<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey,TValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey,TValue>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Collections::Generic::KeyValuePair_2<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey,TValue>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey,TValue>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: Some("csnull") }]
constexpr System::Collections::Generic::KeyValuePair_2<Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey,TValue>::KeyValuePair_2(Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey key, TValue value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Collections::Generic::KeyValuePair_2<Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey,TValue>::__set_key(Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey value)  {
::cordl_internals::setInstanceField<Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey, 0x0>(this->__instance, std::forward<Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey>(value));
}
constexpr Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey System::Collections::Generic::KeyValuePair_2<Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey,TValue>::__get_key() const {
return ::cordl_internals::getInstanceField<Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey,TValue>::__set_value(TValue value)  {
::cordl_internals::setInstanceField<TValue, 0x8>(this->__instance, std::forward<TValue>(value));
}
constexpr TValue System::Collections::Generic::KeyValuePair_2<Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey,TValue>::__get_value() const {
return ::cordl_internals::getInstanceField<TValue, 0x8>(this->__instance);
}
 void System::Collections::Generic::KeyValuePair_2<Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey,TValue>::_ctor(Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey key, TValue value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value);
}
 Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey System::Collections::Generic::KeyValuePair_2<Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey,TValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey,TValue>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 TValue System::Collections::Generic::KeyValuePair_2<Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey,TValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey,TValue>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Collections::Generic::KeyValuePair_2<Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey,TValue>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey,TValue>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "UnityEngine::Vector4", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: Some("csnull") }]
constexpr System::Collections::Generic::KeyValuePair_2<UnityEngine::Vector4,TValue>::KeyValuePair_2(UnityEngine::Vector4 key, TValue value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Collections::Generic::KeyValuePair_2<UnityEngine::Vector4,TValue>::__set_key(UnityEngine::Vector4 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector4, 0x0>(this->__instance, std::forward<UnityEngine::Vector4>(value));
}
constexpr UnityEngine::Vector4 System::Collections::Generic::KeyValuePair_2<UnityEngine::Vector4,TValue>::__get_key() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector4, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<UnityEngine::Vector4,TValue>::__set_value(TValue value)  {
::cordl_internals::setInstanceField<TValue, 0x8>(this->__instance, std::forward<TValue>(value));
}
constexpr TValue System::Collections::Generic::KeyValuePair_2<UnityEngine::Vector4,TValue>::__get_value() const {
return ::cordl_internals::getInstanceField<TValue, 0x8>(this->__instance);
}
 void System::Collections::Generic::KeyValuePair_2<UnityEngine::Vector4,TValue>::_ctor(UnityEngine::Vector4 key, TValue value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<UnityEngine::Vector4,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value);
}
 UnityEngine::Vector4 System::Collections::Generic::KeyValuePair_2<UnityEngine::Vector4,TValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<UnityEngine::Vector4,TValue>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector4, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 TValue System::Collections::Generic::KeyValuePair_2<UnityEngine::Vector4,TValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<UnityEngine::Vector4,TValue>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Collections::Generic::KeyValuePair_2<UnityEngine::Vector4,TValue>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<UnityEngine::Vector4,TValue>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: Some("{}") }]
constexpr System::Collections::Generic::KeyValuePair_2<UnityEngine::Vector3,TValue>::KeyValuePair_2(UnityEngine::Vector3 key, TValue value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Collections::Generic::KeyValuePair_2<UnityEngine::Vector3,TValue>::__set_key(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x0>(this->__instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 System::Collections::Generic::KeyValuePair_2<UnityEngine::Vector3,TValue>::__get_key() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<UnityEngine::Vector3,TValue>::__set_value(TValue value)  {
::cordl_internals::setInstanceField<TValue, 0x8>(this->__instance, std::forward<TValue>(value));
}
constexpr TValue System::Collections::Generic::KeyValuePair_2<UnityEngine::Vector3,TValue>::__get_value() const {
return ::cordl_internals::getInstanceField<TValue, 0x8>(this->__instance);
}
 void System::Collections::Generic::KeyValuePair_2<UnityEngine::Vector3,TValue>::_ctor(UnityEngine::Vector3 key, TValue value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<UnityEngine::Vector3,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value);
}
 UnityEngine::Vector3 System::Collections::Generic::KeyValuePair_2<UnityEngine::Vector3,TValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<UnityEngine::Vector3,TValue>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector3, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 TValue System::Collections::Generic::KeyValuePair_2<UnityEngine::Vector3,TValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<UnityEngine::Vector3,TValue>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Collections::Generic::KeyValuePair_2<UnityEngine::Vector3,TValue>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<UnityEngine::Vector3,TValue>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: Some("csnull") }]
constexpr System::Collections::Generic::KeyValuePair_2<TKey,TValue>::KeyValuePair_2(TKey key, TValue value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,TValue>::__set_key(TKey value)  {
::cordl_internals::setInstanceField<TKey, 0x0>(this->__instance, std::forward<TKey>(value));
}
constexpr TKey System::Collections::Generic::KeyValuePair_2<TKey,TValue>::__get_key() const {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,TValue>::__set_value(TValue value)  {
::cordl_internals::setInstanceField<TValue, 0x8>(this->__instance, std::forward<TValue>(value));
}
constexpr TValue System::Collections::Generic::KeyValuePair_2<TKey,TValue>::__get_value() const {
return ::cordl_internals::getInstanceField<TValue, 0x8>(this->__instance);
}
 void System::Collections::Generic::KeyValuePair_2<TKey,TValue>::_ctor(TKey key, TValue value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value);
}
 TKey System::Collections::Generic::KeyValuePair_2<TKey,TValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 TValue System::Collections::Generic::KeyValuePair_2<TKey,TValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Collections::Generic::KeyValuePair_2<TKey,TValue>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "System::UInt32Enum", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: Some("csnull") }]
constexpr System::Collections::Generic::KeyValuePair_2<System::UInt32Enum,TValue>::KeyValuePair_2(System::UInt32Enum key, TValue value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Collections::Generic::KeyValuePair_2<System::UInt32Enum,TValue>::__set_key(System::UInt32Enum value)  {
::cordl_internals::setInstanceField<System::UInt32Enum, 0x0>(this->__instance, std::forward<System::UInt32Enum>(value));
}
constexpr System::UInt32Enum System::Collections::Generic::KeyValuePair_2<System::UInt32Enum,TValue>::__get_key() const {
return ::cordl_internals::getInstanceField<System::UInt32Enum, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<System::UInt32Enum,TValue>::__set_value(TValue value)  {
::cordl_internals::setInstanceField<TValue, 0x8>(this->__instance, std::forward<TValue>(value));
}
constexpr TValue System::Collections::Generic::KeyValuePair_2<System::UInt32Enum,TValue>::__get_value() const {
return ::cordl_internals::getInstanceField<TValue, 0x8>(this->__instance);
}
 void System::Collections::Generic::KeyValuePair_2<System::UInt32Enum,TValue>::_ctor(System::UInt32Enum key, TValue value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<System::UInt32Enum,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::UInt32Enum>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value);
}
 System::UInt32Enum System::Collections::Generic::KeyValuePair_2<System::UInt32Enum,TValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<System::UInt32Enum,TValue>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::UInt32Enum, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 TValue System::Collections::Generic::KeyValuePair_2<System::UInt32Enum,TValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<System::UInt32Enum,TValue>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Collections::Generic::KeyValuePair_2<System::UInt32Enum,TValue>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<System::UInt32Enum,TValue>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
//  Writing Method size for method: System::Collections::Generic::KeyValuePair_2<System::UInt32Enum,bool>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Generic::KeyValuePair_2<System::UInt32Enum,bool>::*)(System::UInt32Enum, bool)>(&System::Collections::Generic::KeyValuePair_2<System::UInt32Enum,bool>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<System::UInt32Enum,bool>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::UInt32Enum>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Generic::KeyValuePair_2<System::UInt32Enum,bool>.get_Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::UInt32Enum (System::Collections::Generic::KeyValuePair_2<System::UInt32Enum,bool>::*)()>(&System::Collections::Generic::KeyValuePair_2<System::UInt32Enum,bool>::get_Key)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<System::UInt32Enum,bool>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Generic::KeyValuePair_2<System::UInt32Enum,bool>.get_Value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::Generic::KeyValuePair_2<System::UInt32Enum,bool>::*)()>(&System::Collections::Generic::KeyValuePair_2<System::UInt32Enum,bool>::get_Value)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<System::UInt32Enum,bool>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Generic::KeyValuePair_2<System::UInt32Enum,bool>.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Collections::Generic::KeyValuePair_2<System::UInt32Enum,bool>::*)()>(&System::Collections::Generic::KeyValuePair_2<System::UInt32Enum,bool>::ToString)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Collections::Generic::KeyValuePair_2<System::UInt32Enum,bool>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "key", ty: "System::UInt32Enum", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr System::Collections::Generic::KeyValuePair_2<System::UInt32Enum,bool>::KeyValuePair_2(System::UInt32Enum key, bool value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Collections::Generic::KeyValuePair_2<System::UInt32Enum,bool>::__set_key(System::UInt32Enum value)  {
::cordl_internals::setInstanceField<System::UInt32Enum, 0x0>(this->__instance, std::forward<System::UInt32Enum>(value));
}
constexpr System::UInt32Enum System::Collections::Generic::KeyValuePair_2<System::UInt32Enum,bool>::__get_key() const {
return ::cordl_internals::getInstanceField<System::UInt32Enum, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<System::UInt32Enum,bool>::__set_value(bool value)  {
::cordl_internals::setInstanceField<bool, 0x8>(this->__instance, std::forward<bool>(value));
}
constexpr bool System::Collections::Generic::KeyValuePair_2<System::UInt32Enum,bool>::__get_value() const {
return ::cordl_internals::getInstanceField<bool, 0x8>(this->__instance);
}
 void System::Collections::Generic::KeyValuePair_2<System::UInt32Enum,bool>::_ctor(System::UInt32Enum key, bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<System::UInt32Enum,bool>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::UInt32Enum>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value);
}
 System::UInt32Enum System::Collections::Generic::KeyValuePair_2<System::UInt32Enum,bool>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<System::UInt32Enum,bool>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::UInt32Enum, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool System::Collections::Generic::KeyValuePair_2<System::UInt32Enum,bool>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<System::UInt32Enum,bool>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Collections::Generic::KeyValuePair_2<System::UInt32Enum,bool>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<System::UInt32Enum,bool>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: Some("{}") }]
constexpr System::Collections::Generic::KeyValuePair_2<TKey,TValue>::KeyValuePair_2(TKey key, TValue value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,TValue>::__set_key(TKey value)  {
::cordl_internals::setInstanceField<TKey, 0x0>(this->__instance, std::forward<TKey>(value));
}
constexpr TKey System::Collections::Generic::KeyValuePair_2<TKey,TValue>::__get_key() const {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,TValue>::__set_value(TValue value)  {
::cordl_internals::setInstanceField<TValue, 0x8>(this->__instance, std::forward<TValue>(value));
}
constexpr TValue System::Collections::Generic::KeyValuePair_2<TKey,TValue>::__get_value() const {
return ::cordl_internals::getInstanceField<TValue, 0x8>(this->__instance);
}
 void System::Collections::Generic::KeyValuePair_2<TKey,TValue>::_ctor(TKey key, TValue value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value);
}
 TKey System::Collections::Generic::KeyValuePair_2<TKey,TValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 TValue System::Collections::Generic::KeyValuePair_2<TKey,TValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Collections::Generic::KeyValuePair_2<TKey,TValue>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: Some("csnull") }]
constexpr System::Collections::Generic::KeyValuePair_2<TKey,TValue>::KeyValuePair_2(TKey key, TValue value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,TValue>::__set_key(TKey value)  {
::cordl_internals::setInstanceField<TKey, 0x0>(this->__instance, std::forward<TKey>(value));
}
constexpr TKey System::Collections::Generic::KeyValuePair_2<TKey,TValue>::__get_key() const {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,TValue>::__set_value(TValue value)  {
::cordl_internals::setInstanceField<TValue, 0x8>(this->__instance, std::forward<TValue>(value));
}
constexpr TValue System::Collections::Generic::KeyValuePair_2<TKey,TValue>::__get_value() const {
return ::cordl_internals::getInstanceField<TValue, 0x8>(this->__instance);
}
 void System::Collections::Generic::KeyValuePair_2<TKey,TValue>::_ctor(TKey key, TValue value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value);
}
 TKey System::Collections::Generic::KeyValuePair_2<TKey,TValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 TValue System::Collections::Generic::KeyValuePair_2<TKey,TValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Collections::Generic::KeyValuePair_2<TKey,TValue>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "UnityEngine::ProBuilder::SimpleTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>", modifiers: "", def_value: Some("{}") }]
constexpr System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::ProBuilder::SimpleTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>::KeyValuePair_2(TKey key, UnityEngine::ProBuilder::SimpleTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::ProBuilder::SimpleTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>::__set_key(TKey value)  {
::cordl_internals::setInstanceField<TKey, 0x0>(this->__instance, std::forward<TKey>(value));
}
constexpr TKey System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::ProBuilder::SimpleTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>::__get_key() const {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::ProBuilder::SimpleTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>::__set_value(UnityEngine::ProBuilder::SimpleTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> value)  {
::cordl_internals::setInstanceField<UnityEngine::ProBuilder::SimpleTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>, 0x8>(this->__instance, std::forward<UnityEngine::ProBuilder::SimpleTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>(value));
}
constexpr UnityEngine::ProBuilder::SimpleTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::ProBuilder::SimpleTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>::__get_value() const {
return ::cordl_internals::getInstanceField<UnityEngine::ProBuilder::SimpleTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>, 0x8>(this->__instance);
}
 void System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::ProBuilder::SimpleTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>::_ctor(TKey key, UnityEngine::ProBuilder::SimpleTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::ProBuilder::SimpleTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::SimpleTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value);
}
 TKey System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::ProBuilder::SimpleTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::ProBuilder::SimpleTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 UnityEngine::ProBuilder::SimpleTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::ProBuilder::SimpleTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::ProBuilder::SimpleTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ProBuilder::SimpleTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::ProBuilder::SimpleTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::ProBuilder::SimpleTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "UnityEngine::ProBuilder::SimpleTuple_2<::bs_hook::Il2CppWrapperType,int32_t>", modifiers: "", def_value: Some("{}") }]
constexpr System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::ProBuilder::SimpleTuple_2<::bs_hook::Il2CppWrapperType,int32_t>>::KeyValuePair_2(TKey key, UnityEngine::ProBuilder::SimpleTuple_2<::bs_hook::Il2CppWrapperType,int32_t> value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::ProBuilder::SimpleTuple_2<::bs_hook::Il2CppWrapperType,int32_t>>::__set_key(TKey value)  {
::cordl_internals::setInstanceField<TKey, 0x0>(this->__instance, std::forward<TKey>(value));
}
constexpr TKey System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::ProBuilder::SimpleTuple_2<::bs_hook::Il2CppWrapperType,int32_t>>::__get_key() const {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::ProBuilder::SimpleTuple_2<::bs_hook::Il2CppWrapperType,int32_t>>::__set_value(UnityEngine::ProBuilder::SimpleTuple_2<::bs_hook::Il2CppWrapperType,int32_t> value)  {
::cordl_internals::setInstanceField<UnityEngine::ProBuilder::SimpleTuple_2<::bs_hook::Il2CppWrapperType,int32_t>, 0x8>(this->__instance, std::forward<UnityEngine::ProBuilder::SimpleTuple_2<::bs_hook::Il2CppWrapperType,int32_t>>(value));
}
constexpr UnityEngine::ProBuilder::SimpleTuple_2<::bs_hook::Il2CppWrapperType,int32_t> System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::ProBuilder::SimpleTuple_2<::bs_hook::Il2CppWrapperType,int32_t>>::__get_value() const {
return ::cordl_internals::getInstanceField<UnityEngine::ProBuilder::SimpleTuple_2<::bs_hook::Il2CppWrapperType,int32_t>, 0x8>(this->__instance);
}
 void System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::ProBuilder::SimpleTuple_2<::bs_hook::Il2CppWrapperType,int32_t>>::_ctor(TKey key, UnityEngine::ProBuilder::SimpleTuple_2<::bs_hook::Il2CppWrapperType,int32_t> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::ProBuilder::SimpleTuple_2<::bs_hook::Il2CppWrapperType,int32_t>>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::SimpleTuple_2<::bs_hook::Il2CppWrapperType,int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value);
}
 TKey System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::ProBuilder::SimpleTuple_2<::bs_hook::Il2CppWrapperType,int32_t>>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::ProBuilder::SimpleTuple_2<::bs_hook::Il2CppWrapperType,int32_t>>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 UnityEngine::ProBuilder::SimpleTuple_2<::bs_hook::Il2CppWrapperType,int32_t> System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::ProBuilder::SimpleTuple_2<::bs_hook::Il2CppWrapperType,int32_t>>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::ProBuilder::SimpleTuple_2<::bs_hook::Il2CppWrapperType,int32_t>>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ProBuilder::SimpleTuple_2<::bs_hook::Il2CppWrapperType,int32_t>, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::ProBuilder::SimpleTuple_2<::bs_hook::Il2CppWrapperType,int32_t>>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::ProBuilder::SimpleTuple_2<::bs_hook::Il2CppWrapperType,int32_t>>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "UnityEngine::ProBuilder::SimpleTuple_2<::bs_hook::Il2CppWrapperType,UnityEngine::ProBuilder::Edge>", modifiers: "", def_value: Some("{}") }]
constexpr System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::ProBuilder::SimpleTuple_2<::bs_hook::Il2CppWrapperType,UnityEngine::ProBuilder::Edge>>::KeyValuePair_2(TKey key, UnityEngine::ProBuilder::SimpleTuple_2<::bs_hook::Il2CppWrapperType,UnityEngine::ProBuilder::Edge> value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::ProBuilder::SimpleTuple_2<::bs_hook::Il2CppWrapperType,UnityEngine::ProBuilder::Edge>>::__set_key(TKey value)  {
::cordl_internals::setInstanceField<TKey, 0x0>(this->__instance, std::forward<TKey>(value));
}
constexpr TKey System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::ProBuilder::SimpleTuple_2<::bs_hook::Il2CppWrapperType,UnityEngine::ProBuilder::Edge>>::__get_key() const {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::ProBuilder::SimpleTuple_2<::bs_hook::Il2CppWrapperType,UnityEngine::ProBuilder::Edge>>::__set_value(UnityEngine::ProBuilder::SimpleTuple_2<::bs_hook::Il2CppWrapperType,UnityEngine::ProBuilder::Edge> value)  {
::cordl_internals::setInstanceField<UnityEngine::ProBuilder::SimpleTuple_2<::bs_hook::Il2CppWrapperType,UnityEngine::ProBuilder::Edge>, 0x8>(this->__instance, std::forward<UnityEngine::ProBuilder::SimpleTuple_2<::bs_hook::Il2CppWrapperType,UnityEngine::ProBuilder::Edge>>(value));
}
constexpr UnityEngine::ProBuilder::SimpleTuple_2<::bs_hook::Il2CppWrapperType,UnityEngine::ProBuilder::Edge> System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::ProBuilder::SimpleTuple_2<::bs_hook::Il2CppWrapperType,UnityEngine::ProBuilder::Edge>>::__get_value() const {
return ::cordl_internals::getInstanceField<UnityEngine::ProBuilder::SimpleTuple_2<::bs_hook::Il2CppWrapperType,UnityEngine::ProBuilder::Edge>, 0x8>(this->__instance);
}
 void System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::ProBuilder::SimpleTuple_2<::bs_hook::Il2CppWrapperType,UnityEngine::ProBuilder::Edge>>::_ctor(TKey key, UnityEngine::ProBuilder::SimpleTuple_2<::bs_hook::Il2CppWrapperType,UnityEngine::ProBuilder::Edge> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::ProBuilder::SimpleTuple_2<::bs_hook::Il2CppWrapperType,UnityEngine::ProBuilder::Edge>>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::SimpleTuple_2<::bs_hook::Il2CppWrapperType,UnityEngine::ProBuilder::Edge>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value);
}
 TKey System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::ProBuilder::SimpleTuple_2<::bs_hook::Il2CppWrapperType,UnityEngine::ProBuilder::Edge>>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::ProBuilder::SimpleTuple_2<::bs_hook::Il2CppWrapperType,UnityEngine::ProBuilder::Edge>>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 UnityEngine::ProBuilder::SimpleTuple_2<::bs_hook::Il2CppWrapperType,UnityEngine::ProBuilder::Edge> System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::ProBuilder::SimpleTuple_2<::bs_hook::Il2CppWrapperType,UnityEngine::ProBuilder::Edge>>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::ProBuilder::SimpleTuple_2<::bs_hook::Il2CppWrapperType,UnityEngine::ProBuilder::Edge>>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ProBuilder::SimpleTuple_2<::bs_hook::Il2CppWrapperType,UnityEngine::ProBuilder::Edge>, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::ProBuilder::SimpleTuple_2<::bs_hook::Il2CppWrapperType,UnityEngine::ProBuilder::Edge>>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::ProBuilder::SimpleTuple_2<::bs_hook::Il2CppWrapperType,UnityEngine::ProBuilder::Edge>>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: Some("csnull") }]
constexpr System::Collections::Generic::KeyValuePair_2<TKey,TValue>::KeyValuePair_2(TKey key, TValue value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,TValue>::__set_key(TKey value)  {
::cordl_internals::setInstanceField<TKey, 0x0>(this->__instance, std::forward<TKey>(value));
}
constexpr TKey System::Collections::Generic::KeyValuePair_2<TKey,TValue>::__get_key() const {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,TValue>::__set_value(TValue value)  {
::cordl_internals::setInstanceField<TValue, 0x8>(this->__instance, std::forward<TValue>(value));
}
constexpr TValue System::Collections::Generic::KeyValuePair_2<TKey,TValue>::__get_value() const {
return ::cordl_internals::getInstanceField<TValue, 0x8>(this->__instance);
}
 void System::Collections::Generic::KeyValuePair_2<TKey,TValue>::_ctor(TKey key, TValue value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value);
}
 TKey System::Collections::Generic::KeyValuePair_2<TKey,TValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 TValue System::Collections::Generic::KeyValuePair_2<TKey,TValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Collections::Generic::KeyValuePair_2<TKey,TValue>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "UnityEngine::TerrainUtils::TerrainTileCoord", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: Some("csnull") }]
constexpr System::Collections::Generic::KeyValuePair_2<UnityEngine::TerrainUtils::TerrainTileCoord,TValue>::KeyValuePair_2(UnityEngine::TerrainUtils::TerrainTileCoord key, TValue value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Collections::Generic::KeyValuePair_2<UnityEngine::TerrainUtils::TerrainTileCoord,TValue>::__set_key(UnityEngine::TerrainUtils::TerrainTileCoord value)  {
::cordl_internals::setInstanceField<UnityEngine::TerrainUtils::TerrainTileCoord, 0x0>(this->__instance, std::forward<UnityEngine::TerrainUtils::TerrainTileCoord>(value));
}
constexpr UnityEngine::TerrainUtils::TerrainTileCoord System::Collections::Generic::KeyValuePair_2<UnityEngine::TerrainUtils::TerrainTileCoord,TValue>::__get_key() const {
return ::cordl_internals::getInstanceField<UnityEngine::TerrainUtils::TerrainTileCoord, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<UnityEngine::TerrainUtils::TerrainTileCoord,TValue>::__set_value(TValue value)  {
::cordl_internals::setInstanceField<TValue, 0x8>(this->__instance, std::forward<TValue>(value));
}
constexpr TValue System::Collections::Generic::KeyValuePair_2<UnityEngine::TerrainUtils::TerrainTileCoord,TValue>::__get_value() const {
return ::cordl_internals::getInstanceField<TValue, 0x8>(this->__instance);
}
 void System::Collections::Generic::KeyValuePair_2<UnityEngine::TerrainUtils::TerrainTileCoord,TValue>::_ctor(UnityEngine::TerrainUtils::TerrainTileCoord key, TValue value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<UnityEngine::TerrainUtils::TerrainTileCoord,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::TerrainUtils::TerrainTileCoord>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value);
}
 UnityEngine::TerrainUtils::TerrainTileCoord System::Collections::Generic::KeyValuePair_2<UnityEngine::TerrainUtils::TerrainTileCoord,TValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<UnityEngine::TerrainUtils::TerrainTileCoord,TValue>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::TerrainUtils::TerrainTileCoord, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 TValue System::Collections::Generic::KeyValuePair_2<UnityEngine::TerrainUtils::TerrainTileCoord,TValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<UnityEngine::TerrainUtils::TerrainTileCoord,TValue>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Collections::Generic::KeyValuePair_2<UnityEngine::TerrainUtils::TerrainTileCoord,TValue>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<UnityEngine::TerrainUtils::TerrainTileCoord,TValue>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "GlobalNamespace::SongPackMask", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: Some("csnull") }]
constexpr System::Collections::Generic::KeyValuePair_2<GlobalNamespace::SongPackMask,TValue>::KeyValuePair_2(GlobalNamespace::SongPackMask key, TValue value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Collections::Generic::KeyValuePair_2<GlobalNamespace::SongPackMask,TValue>::__set_key(GlobalNamespace::SongPackMask value)  {
::cordl_internals::setInstanceField<GlobalNamespace::SongPackMask, 0x0>(this->__instance, std::forward<GlobalNamespace::SongPackMask>(value));
}
constexpr GlobalNamespace::SongPackMask System::Collections::Generic::KeyValuePair_2<GlobalNamespace::SongPackMask,TValue>::__get_key() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::SongPackMask, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<GlobalNamespace::SongPackMask,TValue>::__set_value(TValue value)  {
::cordl_internals::setInstanceField<TValue, 0x8>(this->__instance, std::forward<TValue>(value));
}
constexpr TValue System::Collections::Generic::KeyValuePair_2<GlobalNamespace::SongPackMask,TValue>::__get_value() const {
return ::cordl_internals::getInstanceField<TValue, 0x8>(this->__instance);
}
 void System::Collections::Generic::KeyValuePair_2<GlobalNamespace::SongPackMask,TValue>::_ctor(GlobalNamespace::SongPackMask key, TValue value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<GlobalNamespace::SongPackMask,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::SongPackMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value);
}
 GlobalNamespace::SongPackMask System::Collections::Generic::KeyValuePair_2<GlobalNamespace::SongPackMask,TValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<GlobalNamespace::SongPackMask,TValue>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::SongPackMask, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 TValue System::Collections::Generic::KeyValuePair_2<GlobalNamespace::SongPackMask,TValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<GlobalNamespace::SongPackMask,TValue>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Collections::Generic::KeyValuePair_2<GlobalNamespace::SongPackMask,TValue>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<GlobalNamespace::SongPackMask,TValue>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: Some("csnull") }]
constexpr System::Collections::Generic::KeyValuePair_2<float_t,TValue>::KeyValuePair_2(float_t key, TValue value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Collections::Generic::KeyValuePair_2<float_t,TValue>::__set_key(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x0>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t System::Collections::Generic::KeyValuePair_2<float_t,TValue>::__get_key() const {
return ::cordl_internals::getInstanceField<float_t, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<float_t,TValue>::__set_value(TValue value)  {
::cordl_internals::setInstanceField<TValue, 0x8>(this->__instance, std::forward<TValue>(value));
}
constexpr TValue System::Collections::Generic::KeyValuePair_2<float_t,TValue>::__get_value() const {
return ::cordl_internals::getInstanceField<TValue, 0x8>(this->__instance);
}
 void System::Collections::Generic::KeyValuePair_2<float_t,TValue>::_ctor(float_t key, TValue value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<float_t,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value);
}
 float_t System::Collections::Generic::KeyValuePair_2<float_t,TValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<float_t,TValue>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 TValue System::Collections::Generic::KeyValuePair_2<float_t,TValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<float_t,TValue>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Collections::Generic::KeyValuePair_2<float_t,TValue>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<float_t,TValue>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "Zenject::SignalSubscriptionId", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: Some("csnull") }]
constexpr System::Collections::Generic::KeyValuePair_2<Zenject::SignalSubscriptionId,TValue>::KeyValuePair_2(Zenject::SignalSubscriptionId key, TValue value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Collections::Generic::KeyValuePair_2<Zenject::SignalSubscriptionId,TValue>::__set_key(Zenject::SignalSubscriptionId value)  {
::cordl_internals::setInstanceField<Zenject::SignalSubscriptionId, 0x0>(this->__instance, std::forward<Zenject::SignalSubscriptionId>(value));
}
constexpr Zenject::SignalSubscriptionId System::Collections::Generic::KeyValuePair_2<Zenject::SignalSubscriptionId,TValue>::__get_key() const {
return ::cordl_internals::getInstanceField<Zenject::SignalSubscriptionId, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<Zenject::SignalSubscriptionId,TValue>::__set_value(TValue value)  {
::cordl_internals::setInstanceField<TValue, 0x8>(this->__instance, std::forward<TValue>(value));
}
constexpr TValue System::Collections::Generic::KeyValuePair_2<Zenject::SignalSubscriptionId,TValue>::__get_value() const {
return ::cordl_internals::getInstanceField<TValue, 0x8>(this->__instance);
}
 void System::Collections::Generic::KeyValuePair_2<Zenject::SignalSubscriptionId,TValue>::_ctor(Zenject::SignalSubscriptionId key, TValue value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<Zenject::SignalSubscriptionId,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::SignalSubscriptionId>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value);
}
 Zenject::SignalSubscriptionId System::Collections::Generic::KeyValuePair_2<Zenject::SignalSubscriptionId,TValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<Zenject::SignalSubscriptionId,TValue>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::SignalSubscriptionId, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 TValue System::Collections::Generic::KeyValuePair_2<Zenject::SignalSubscriptionId,TValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<Zenject::SignalSubscriptionId,TValue>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Collections::Generic::KeyValuePair_2<Zenject::SignalSubscriptionId,TValue>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<Zenject::SignalSubscriptionId,TValue>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "UnityEngine::SceneManagement::Scene", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: Some("csnull") }]
constexpr System::Collections::Generic::KeyValuePair_2<UnityEngine::SceneManagement::Scene,TValue>::KeyValuePair_2(UnityEngine::SceneManagement::Scene key, TValue value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Collections::Generic::KeyValuePair_2<UnityEngine::SceneManagement::Scene,TValue>::__set_key(UnityEngine::SceneManagement::Scene value)  {
::cordl_internals::setInstanceField<UnityEngine::SceneManagement::Scene, 0x0>(this->__instance, std::forward<UnityEngine::SceneManagement::Scene>(value));
}
constexpr UnityEngine::SceneManagement::Scene System::Collections::Generic::KeyValuePair_2<UnityEngine::SceneManagement::Scene,TValue>::__get_key() const {
return ::cordl_internals::getInstanceField<UnityEngine::SceneManagement::Scene, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<UnityEngine::SceneManagement::Scene,TValue>::__set_value(TValue value)  {
::cordl_internals::setInstanceField<TValue, 0x8>(this->__instance, std::forward<TValue>(value));
}
constexpr TValue System::Collections::Generic::KeyValuePair_2<UnityEngine::SceneManagement::Scene,TValue>::__get_value() const {
return ::cordl_internals::getInstanceField<TValue, 0x8>(this->__instance);
}
 void System::Collections::Generic::KeyValuePair_2<UnityEngine::SceneManagement::Scene,TValue>::_ctor(UnityEngine::SceneManagement::Scene key, TValue value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<UnityEngine::SceneManagement::Scene,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::SceneManagement::Scene>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value);
}
 UnityEngine::SceneManagement::Scene System::Collections::Generic::KeyValuePair_2<UnityEngine::SceneManagement::Scene,TValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<UnityEngine::SceneManagement::Scene,TValue>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::SceneManagement::Scene, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 TValue System::Collections::Generic::KeyValuePair_2<UnityEngine::SceneManagement::Scene,TValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<UnityEngine::SceneManagement::Scene,TValue>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Collections::Generic::KeyValuePair_2<UnityEngine::SceneManagement::Scene,TValue>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<UnityEngine::SceneManagement::Scene,TValue>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "Newtonsoft::Json::Serialization::ResolverContractKey", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: Some("csnull") }]
constexpr System::Collections::Generic::KeyValuePair_2<Newtonsoft::Json::Serialization::ResolverContractKey,TValue>::KeyValuePair_2(Newtonsoft::Json::Serialization::ResolverContractKey key, TValue value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Collections::Generic::KeyValuePair_2<Newtonsoft::Json::Serialization::ResolverContractKey,TValue>::__set_key(Newtonsoft::Json::Serialization::ResolverContractKey value)  {
::cordl_internals::setInstanceField<Newtonsoft::Json::Serialization::ResolverContractKey, 0x0>(this->__instance, std::forward<Newtonsoft::Json::Serialization::ResolverContractKey>(value));
}
constexpr Newtonsoft::Json::Serialization::ResolverContractKey System::Collections::Generic::KeyValuePair_2<Newtonsoft::Json::Serialization::ResolverContractKey,TValue>::__get_key() const {
return ::cordl_internals::getInstanceField<Newtonsoft::Json::Serialization::ResolverContractKey, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<Newtonsoft::Json::Serialization::ResolverContractKey,TValue>::__set_value(TValue value)  {
::cordl_internals::setInstanceField<TValue, 0x8>(this->__instance, std::forward<TValue>(value));
}
constexpr TValue System::Collections::Generic::KeyValuePair_2<Newtonsoft::Json::Serialization::ResolverContractKey,TValue>::__get_value() const {
return ::cordl_internals::getInstanceField<TValue, 0x8>(this->__instance);
}
 void System::Collections::Generic::KeyValuePair_2<Newtonsoft::Json::Serialization::ResolverContractKey,TValue>::_ctor(Newtonsoft::Json::Serialization::ResolverContractKey key, TValue value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<Newtonsoft::Json::Serialization::ResolverContractKey,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::ResolverContractKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value);
}
 Newtonsoft::Json::Serialization::ResolverContractKey System::Collections::Generic::KeyValuePair_2<Newtonsoft::Json::Serialization::ResolverContractKey,TValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<Newtonsoft::Json::Serialization::ResolverContractKey,TValue>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Newtonsoft::Json::Serialization::ResolverContractKey, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 TValue System::Collections::Generic::KeyValuePair_2<Newtonsoft::Json::Serialization::ResolverContractKey,TValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<Newtonsoft::Json::Serialization::ResolverContractKey,TValue>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Collections::Generic::KeyValuePair_2<Newtonsoft::Json::Serialization::ResolverContractKey,TValue>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<Newtonsoft::Json::Serialization::ResolverContractKey,TValue>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("csnull") }, CppParam { name: "value", ty: "UnityEngine::UIElements::UnityEngine__UIElements__StyleComplexSelector__PseudoStateData", modifiers: "", def_value: Some("{}") }]
constexpr System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::UIElements::UnityEngine__UIElements__StyleComplexSelector__PseudoStateData>::KeyValuePair_2(TKey key, UnityEngine::UIElements::UnityEngine__UIElements__StyleComplexSelector__PseudoStateData value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::UIElements::UnityEngine__UIElements__StyleComplexSelector__PseudoStateData>::__set_key(TKey value)  {
::cordl_internals::setInstanceField<TKey, 0x0>(this->__instance, std::forward<TKey>(value));
}
constexpr TKey System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::UIElements::UnityEngine__UIElements__StyleComplexSelector__PseudoStateData>::__get_key() const {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::UIElements::UnityEngine__UIElements__StyleComplexSelector__PseudoStateData>::__set_value(UnityEngine::UIElements::UnityEngine__UIElements__StyleComplexSelector__PseudoStateData value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::UnityEngine__UIElements__StyleComplexSelector__PseudoStateData, 0x8>(this->__instance, std::forward<UnityEngine::UIElements::UnityEngine__UIElements__StyleComplexSelector__PseudoStateData>(value));
}
constexpr UnityEngine::UIElements::UnityEngine__UIElements__StyleComplexSelector__PseudoStateData System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::UIElements::UnityEngine__UIElements__StyleComplexSelector__PseudoStateData>::__get_value() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::UnityEngine__UIElements__StyleComplexSelector__PseudoStateData, 0x8>(this->__instance);
}
 void System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::UIElements::UnityEngine__UIElements__StyleComplexSelector__PseudoStateData>::_ctor(TKey key, UnityEngine::UIElements::UnityEngine__UIElements__StyleComplexSelector__PseudoStateData value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::UIElements::UnityEngine__UIElements__StyleComplexSelector__PseudoStateData>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UnityEngine__UIElements__StyleComplexSelector__PseudoStateData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value);
}
 TKey System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::UIElements::UnityEngine__UIElements__StyleComplexSelector__PseudoStateData>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::UIElements::UnityEngine__UIElements__StyleComplexSelector__PseudoStateData>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 UnityEngine::UIElements::UnityEngine__UIElements__StyleComplexSelector__PseudoStateData System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::UIElements::UnityEngine__UIElements__StyleComplexSelector__PseudoStateData>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::UIElements::UnityEngine__UIElements__StyleComplexSelector__PseudoStateData>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::UnityEngine__UIElements__StyleComplexSelector__PseudoStateData, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::UIElements::UnityEngine__UIElements__StyleComplexSelector__PseudoStateData>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::UIElements::UnityEngine__UIElements__StyleComplexSelector__PseudoStateData>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("csnull") }, CppParam { name: "value", ty: "GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__PassthroughMeshInstance", modifiers: "", def_value: Some("{}") }]
constexpr System::Collections::Generic::KeyValuePair_2<TKey,GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__PassthroughMeshInstance>::KeyValuePair_2(TKey key, GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__PassthroughMeshInstance value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__PassthroughMeshInstance>::__set_key(TKey value)  {
::cordl_internals::setInstanceField<TKey, 0x0>(this->__instance, std::forward<TKey>(value));
}
constexpr TKey System::Collections::Generic::KeyValuePair_2<TKey,GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__PassthroughMeshInstance>::__get_key() const {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__PassthroughMeshInstance>::__set_value(GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__PassthroughMeshInstance value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__PassthroughMeshInstance, 0x8>(this->__instance, std::forward<GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__PassthroughMeshInstance>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__PassthroughMeshInstance System::Collections::Generic::KeyValuePair_2<TKey,GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__PassthroughMeshInstance>::__get_value() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__PassthroughMeshInstance, 0x8>(this->__instance);
}
 void System::Collections::Generic::KeyValuePair_2<TKey,GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__PassthroughMeshInstance>::_ctor(TKey key, GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__PassthroughMeshInstance value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__PassthroughMeshInstance>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__PassthroughMeshInstance>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value);
}
 TKey System::Collections::Generic::KeyValuePair_2<TKey,GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__PassthroughMeshInstance>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__PassthroughMeshInstance>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__PassthroughMeshInstance System::Collections::Generic::KeyValuePair_2<TKey,GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__PassthroughMeshInstance>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__PassthroughMeshInstance>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__PassthroughMeshInstance, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Collections::Generic::KeyValuePair_2<TKey,GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__PassthroughMeshInstance>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__PassthroughMeshInstance>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("csnull") }, CppParam { name: "value", ty: "UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue", modifiers: "", def_value: Some("{}") }]
constexpr System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>::KeyValuePair_2(TKey key, UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>::__set_key(TKey value)  {
::cordl_internals::setInstanceField<TKey, 0x0>(this->__instance, std::forward<TKey>(value));
}
constexpr TKey System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>::__get_key() const {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>::__set_value(UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue, 0x8>(this->__instance, std::forward<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>(value));
}
constexpr UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>::__get_value() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue, 0x8>(this->__instance);
}
 void System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>::_ctor(TKey key, UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value);
}
 TKey System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("csnull") }, CppParam { name: "value", ty: "UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__InputSystemUIInputModule__InputActionReferenceState", modifiers: "", def_value: Some("{}") }]
constexpr System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__InputSystemUIInputModule__InputActionReferenceState>::KeyValuePair_2(TKey key, UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__InputSystemUIInputModule__InputActionReferenceState value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__InputSystemUIInputModule__InputActionReferenceState>::__set_key(TKey value)  {
::cordl_internals::setInstanceField<TKey, 0x0>(this->__instance, std::forward<TKey>(value));
}
constexpr TKey System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__InputSystemUIInputModule__InputActionReferenceState>::__get_key() const {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__InputSystemUIInputModule__InputActionReferenceState>::__set_value(UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__InputSystemUIInputModule__InputActionReferenceState value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__InputSystemUIInputModule__InputActionReferenceState, 0x8>(this->__instance, std::forward<UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__InputSystemUIInputModule__InputActionReferenceState>(value));
}
constexpr UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__InputSystemUIInputModule__InputActionReferenceState System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__InputSystemUIInputModule__InputActionReferenceState>::__get_value() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__InputSystemUIInputModule__InputActionReferenceState, 0x8>(this->__instance);
}
 void System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__InputSystemUIInputModule__InputActionReferenceState>::_ctor(TKey key, UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__InputSystemUIInputModule__InputActionReferenceState value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__InputSystemUIInputModule__InputActionReferenceState>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__InputSystemUIInputModule__InputActionReferenceState>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value);
}
 TKey System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__InputSystemUIInputModule__InputActionReferenceState>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__InputSystemUIInputModule__InputActionReferenceState>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__InputSystemUIInputModule__InputActionReferenceState System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__InputSystemUIInputModule__InputActionReferenceState>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__InputSystemUIInputModule__InputActionReferenceState>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__InputSystemUIInputModule__InputActionReferenceState, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__InputSystemUIInputModule__InputActionReferenceState>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__InputSystemUIInputModule__InputActionReferenceState>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("csnull") }, CppParam { name: "value", ty: "UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem", modifiers: "", def_value: Some("{}") }]
constexpr System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::KeyValuePair_2(TKey key, UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::__set_key(TKey value)  {
::cordl_internals::setInstanceField<TKey, 0x0>(this->__instance, std::forward<TKey>(value));
}
constexpr TKey System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::__get_key() const {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::__set_value(UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem, 0x8>(this->__instance, std::forward<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>(value));
}
constexpr UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::__get_value() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem, 0x8>(this->__instance);
}
 void System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::_ctor(TKey key, UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value);
}
 TKey System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("csnull") }, CppParam { name: "value", ty: "GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoader__AssetBundleLevelInfo", modifiers: "", def_value: Some("{}") }]
constexpr System::Collections::Generic::KeyValuePair_2<TKey,GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoader__AssetBundleLevelInfo>::KeyValuePair_2(TKey key, GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoader__AssetBundleLevelInfo value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoader__AssetBundleLevelInfo>::__set_key(TKey value)  {
::cordl_internals::setInstanceField<TKey, 0x0>(this->__instance, std::forward<TKey>(value));
}
constexpr TKey System::Collections::Generic::KeyValuePair_2<TKey,GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoader__AssetBundleLevelInfo>::__get_key() const {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoader__AssetBundleLevelInfo>::__set_value(GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoader__AssetBundleLevelInfo value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoader__AssetBundleLevelInfo, 0x8>(this->__instance, std::forward<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoader__AssetBundleLevelInfo>(value));
}
constexpr GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoader__AssetBundleLevelInfo System::Collections::Generic::KeyValuePair_2<TKey,GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoader__AssetBundleLevelInfo>::__get_value() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoader__AssetBundleLevelInfo, 0x8>(this->__instance);
}
 void System::Collections::Generic::KeyValuePair_2<TKey,GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoader__AssetBundleLevelInfo>::_ctor(TKey key, GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoader__AssetBundleLevelInfo value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoader__AssetBundleLevelInfo>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoader__AssetBundleLevelInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value);
}
 TKey System::Collections::Generic::KeyValuePair_2<TKey,GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoader__AssetBundleLevelInfo>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoader__AssetBundleLevelInfo>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoader__AssetBundleLevelInfo System::Collections::Generic::KeyValuePair_2<TKey,GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoader__AssetBundleLevelInfo>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoader__AssetBundleLevelInfo>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoader__AssetBundleLevelInfo, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Collections::Generic::KeyValuePair_2<TKey,GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoader__AssetBundleLevelInfo>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoader__AssetBundleLevelInfo>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("csnull") }, CppParam { name: "value", ty: "UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }]
constexpr System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::Vector2>::KeyValuePair_2(TKey key, UnityEngine::Vector2 value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::Vector2>::__set_key(TKey value)  {
::cordl_internals::setInstanceField<TKey, 0x0>(this->__instance, std::forward<TKey>(value));
}
constexpr TKey System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::Vector2>::__get_key() const {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::Vector2>::__set_value(UnityEngine::Vector2 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector2, 0x8>(this->__instance, std::forward<UnityEngine::Vector2>(value));
}
constexpr UnityEngine::Vector2 System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::Vector2>::__get_value() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector2, 0x8>(this->__instance);
}
 void System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::Vector2>::_ctor(TKey key, UnityEngine::Vector2 value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::Vector2>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value);
}
 TKey System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::Vector2>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::Vector2>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 UnityEngine::Vector2 System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::Vector2>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::Vector2>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector2, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::Vector2>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::Vector2>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("csnull") }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: Some("{}") }]
constexpr System::Collections::Generic::KeyValuePair_2<TKey,TValue>::KeyValuePair_2(TKey key, TValue value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,TValue>::__set_key(TKey value)  {
::cordl_internals::setInstanceField<TKey, 0x0>(this->__instance, std::forward<TKey>(value));
}
constexpr TKey System::Collections::Generic::KeyValuePair_2<TKey,TValue>::__get_key() const {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,TValue>::__set_value(TValue value)  {
::cordl_internals::setInstanceField<TValue, 0x8>(this->__instance, std::forward<TValue>(value));
}
constexpr TValue System::Collections::Generic::KeyValuePair_2<TKey,TValue>::__get_value() const {
return ::cordl_internals::getInstanceField<TValue, 0x8>(this->__instance);
}
 void System::Collections::Generic::KeyValuePair_2<TKey,TValue>::_ctor(TKey key, TValue value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value);
}
 TKey System::Collections::Generic::KeyValuePair_2<TKey,TValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 TValue System::Collections::Generic::KeyValuePair_2<TKey,TValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Collections::Generic::KeyValuePair_2<TKey,TValue>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("csnull") }, CppParam { name: "value", ty: "UnityEngine::UIElements::TextureId", modifiers: "", def_value: Some("{}") }]
constexpr System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::UIElements::TextureId>::KeyValuePair_2(TKey key, UnityEngine::UIElements::TextureId value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::UIElements::TextureId>::__set_key(TKey value)  {
::cordl_internals::setInstanceField<TKey, 0x0>(this->__instance, std::forward<TKey>(value));
}
constexpr TKey System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::UIElements::TextureId>::__get_key() const {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::UIElements::TextureId>::__set_value(UnityEngine::UIElements::TextureId value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::TextureId, 0x8>(this->__instance, std::forward<UnityEngine::UIElements::TextureId>(value));
}
constexpr UnityEngine::UIElements::TextureId System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::UIElements::TextureId>::__get_value() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::TextureId, 0x8>(this->__instance);
}
 void System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::UIElements::TextureId>::_ctor(TKey key, UnityEngine::UIElements::TextureId value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::UIElements::TextureId>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::TextureId>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value);
}
 TKey System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::UIElements::TextureId>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::UIElements::TextureId>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 UnityEngine::UIElements::TextureId System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::UIElements::TextureId>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::UIElements::TextureId>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::TextureId, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::UIElements::TextureId>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::UIElements::TextureId>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("csnull") }, CppParam { name: "value", ty: "UnityEngine::UIElements::StyleSheets::StylePropertyValue", modifiers: "", def_value: Some("{}") }]
constexpr System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::UIElements::StyleSheets::StylePropertyValue>::KeyValuePair_2(TKey key, UnityEngine::UIElements::StyleSheets::StylePropertyValue value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::UIElements::StyleSheets::StylePropertyValue>::__set_key(TKey value)  {
::cordl_internals::setInstanceField<TKey, 0x0>(this->__instance, std::forward<TKey>(value));
}
constexpr TKey System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::UIElements::StyleSheets::StylePropertyValue>::__get_key() const {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::UIElements::StyleSheets::StylePropertyValue>::__set_value(UnityEngine::UIElements::StyleSheets::StylePropertyValue value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::StyleSheets::StylePropertyValue, 0x8>(this->__instance, std::forward<UnityEngine::UIElements::StyleSheets::StylePropertyValue>(value));
}
constexpr UnityEngine::UIElements::StyleSheets::StylePropertyValue System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::UIElements::StyleSheets::StylePropertyValue>::__get_value() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::StyleSheets::StylePropertyValue, 0x8>(this->__instance);
}
 void System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::UIElements::StyleSheets::StylePropertyValue>::_ctor(TKey key, UnityEngine::UIElements::StyleSheets::StylePropertyValue value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::UIElements::StyleSheets::StylePropertyValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::StyleSheets::StylePropertyValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value);
}
 TKey System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::UIElements::StyleSheets::StylePropertyValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::UIElements::StyleSheets::StylePropertyValue>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 UnityEngine::UIElements::StyleSheets::StylePropertyValue System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::UIElements::StyleSheets::StylePropertyValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::UIElements::StyleSheets::StylePropertyValue>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::StyleSheets::StylePropertyValue, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::UIElements::StyleSheets::StylePropertyValue>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::UIElements::StyleSheets::StylePropertyValue>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("csnull") }, CppParam { name: "value", ty: "GlobalNamespace::SongPackMask", modifiers: "", def_value: Some("{}") }]
constexpr System::Collections::Generic::KeyValuePair_2<TKey,GlobalNamespace::SongPackMask>::KeyValuePair_2(TKey key, GlobalNamespace::SongPackMask value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,GlobalNamespace::SongPackMask>::__set_key(TKey value)  {
::cordl_internals::setInstanceField<TKey, 0x0>(this->__instance, std::forward<TKey>(value));
}
constexpr TKey System::Collections::Generic::KeyValuePair_2<TKey,GlobalNamespace::SongPackMask>::__get_key() const {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,GlobalNamespace::SongPackMask>::__set_value(GlobalNamespace::SongPackMask value)  {
::cordl_internals::setInstanceField<GlobalNamespace::SongPackMask, 0x8>(this->__instance, std::forward<GlobalNamespace::SongPackMask>(value));
}
constexpr GlobalNamespace::SongPackMask System::Collections::Generic::KeyValuePair_2<TKey,GlobalNamespace::SongPackMask>::__get_value() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::SongPackMask, 0x8>(this->__instance);
}
 void System::Collections::Generic::KeyValuePair_2<TKey,GlobalNamespace::SongPackMask>::_ctor(TKey key, GlobalNamespace::SongPackMask value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,GlobalNamespace::SongPackMask>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::SongPackMask>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value);
}
 TKey System::Collections::Generic::KeyValuePair_2<TKey,GlobalNamespace::SongPackMask>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,GlobalNamespace::SongPackMask>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 GlobalNamespace::SongPackMask System::Collections::Generic::KeyValuePair_2<TKey,GlobalNamespace::SongPackMask>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,GlobalNamespace::SongPackMask>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::SongPackMask, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Collections::Generic::KeyValuePair_2<TKey,GlobalNamespace::SongPackMask>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,GlobalNamespace::SongPackMask>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("csnull") }, CppParam { name: "value", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Collections::Generic::KeyValuePair_2<TKey,float_t>::KeyValuePair_2(TKey key, float_t value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,float_t>::__set_key(TKey value)  {
::cordl_internals::setInstanceField<TKey, 0x0>(this->__instance, std::forward<TKey>(value));
}
constexpr TKey System::Collections::Generic::KeyValuePair_2<TKey,float_t>::__get_key() const {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,float_t>::__set_value(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x8>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t System::Collections::Generic::KeyValuePair_2<TKey,float_t>::__get_value() const {
return ::cordl_internals::getInstanceField<float_t, 0x8>(this->__instance);
}
 void System::Collections::Generic::KeyValuePair_2<TKey,float_t>::_ctor(TKey key, float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,float_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value);
}
 TKey System::Collections::Generic::KeyValuePair_2<TKey,float_t>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,float_t>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 float_t System::Collections::Generic::KeyValuePair_2<TKey,float_t>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,float_t>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Collections::Generic::KeyValuePair_2<TKey,float_t>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,float_t>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("csnull") }, CppParam { name: "value", ty: "System::Resources::ResourceLocator", modifiers: "", def_value: Some("{}") }]
constexpr System::Collections::Generic::KeyValuePair_2<TKey,System::Resources::ResourceLocator>::KeyValuePair_2(TKey key, System::Resources::ResourceLocator value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,System::Resources::ResourceLocator>::__set_key(TKey value)  {
::cordl_internals::setInstanceField<TKey, 0x0>(this->__instance, std::forward<TKey>(value));
}
constexpr TKey System::Collections::Generic::KeyValuePair_2<TKey,System::Resources::ResourceLocator>::__get_key() const {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,System::Resources::ResourceLocator>::__set_value(System::Resources::ResourceLocator value)  {
::cordl_internals::setInstanceField<System::Resources::ResourceLocator, 0x8>(this->__instance, std::forward<System::Resources::ResourceLocator>(value));
}
constexpr System::Resources::ResourceLocator System::Collections::Generic::KeyValuePair_2<TKey,System::Resources::ResourceLocator>::__get_value() const {
return ::cordl_internals::getInstanceField<System::Resources::ResourceLocator, 0x8>(this->__instance);
}
 void System::Collections::Generic::KeyValuePair_2<TKey,System::Resources::ResourceLocator>::_ctor(TKey key, System::Resources::ResourceLocator value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,System::Resources::ResourceLocator>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Resources::ResourceLocator>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value);
}
 TKey System::Collections::Generic::KeyValuePair_2<TKey,System::Resources::ResourceLocator>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,System::Resources::ResourceLocator>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 System::Resources::ResourceLocator System::Collections::Generic::KeyValuePair_2<TKey,System::Resources::ResourceLocator>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,System::Resources::ResourceLocator>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Resources::ResourceLocator, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Collections::Generic::KeyValuePair_2<TKey,System::Resources::ResourceLocator>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,System::Resources::ResourceLocator>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("csnull") }, CppParam { name: "value", ty: "UnityEngine::Playables::Playable", modifiers: "", def_value: Some("{}") }]
constexpr System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::Playables::Playable>::KeyValuePair_2(TKey key, UnityEngine::Playables::Playable value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::Playables::Playable>::__set_key(TKey value)  {
::cordl_internals::setInstanceField<TKey, 0x0>(this->__instance, std::forward<TKey>(value));
}
constexpr TKey System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::Playables::Playable>::__get_key() const {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::Playables::Playable>::__set_value(UnityEngine::Playables::Playable value)  {
::cordl_internals::setInstanceField<UnityEngine::Playables::Playable, 0x8>(this->__instance, std::forward<UnityEngine::Playables::Playable>(value));
}
constexpr UnityEngine::Playables::Playable System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::Playables::Playable>::__get_value() const {
return ::cordl_internals::getInstanceField<UnityEngine::Playables::Playable, 0x8>(this->__instance);
}
 void System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::Playables::Playable>::_ctor(TKey key, UnityEngine::Playables::Playable value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::Playables::Playable>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::Playable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value);
}
 TKey System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::Playables::Playable>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::Playables::Playable>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 UnityEngine::Playables::Playable System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::Playables::Playable>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::Playables::Playable>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Playables::Playable, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::Playables::Playable>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::Playables::Playable>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("csnull") }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: Some("{}") }]
constexpr System::Collections::Generic::KeyValuePair_2<TKey,TValue>::KeyValuePair_2(TKey key, TValue value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,TValue>::__set_key(TKey value)  {
::cordl_internals::setInstanceField<TKey, 0x0>(this->__instance, std::forward<TKey>(value));
}
constexpr TKey System::Collections::Generic::KeyValuePair_2<TKey,TValue>::__get_key() const {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,TValue>::__set_value(TValue value)  {
::cordl_internals::setInstanceField<TValue, 0x8>(this->__instance, std::forward<TValue>(value));
}
constexpr TValue System::Collections::Generic::KeyValuePair_2<TKey,TValue>::__get_value() const {
return ::cordl_internals::getInstanceField<TValue, 0x8>(this->__instance);
}
 void System::Collections::Generic::KeyValuePair_2<TKey,TValue>::_ctor(TKey key, TValue value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value);
}
 TKey System::Collections::Generic::KeyValuePair_2<TKey,TValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 TValue System::Collections::Generic::KeyValuePair_2<TKey,TValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Collections::Generic::KeyValuePair_2<TKey,TValue>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("csnull") }, CppParam { name: "value", ty: "System::Int32Enum", modifiers: "", def_value: Some("{}") }]
constexpr System::Collections::Generic::KeyValuePair_2<TKey,System::Int32Enum>::KeyValuePair_2(TKey key, System::Int32Enum value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,System::Int32Enum>::__set_key(TKey value)  {
::cordl_internals::setInstanceField<TKey, 0x0>(this->__instance, std::forward<TKey>(value));
}
constexpr TKey System::Collections::Generic::KeyValuePair_2<TKey,System::Int32Enum>::__get_key() const {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,System::Int32Enum>::__set_value(System::Int32Enum value)  {
::cordl_internals::setInstanceField<System::Int32Enum, 0x8>(this->__instance, std::forward<System::Int32Enum>(value));
}
constexpr System::Int32Enum System::Collections::Generic::KeyValuePair_2<TKey,System::Int32Enum>::__get_value() const {
return ::cordl_internals::getInstanceField<System::Int32Enum, 0x8>(this->__instance);
}
 void System::Collections::Generic::KeyValuePair_2<TKey,System::Int32Enum>::_ctor(TKey key, System::Int32Enum value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,System::Int32Enum>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Int32Enum>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value);
}
 TKey System::Collections::Generic::KeyValuePair_2<TKey,System::Int32Enum>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,System::Int32Enum>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 System::Int32Enum System::Collections::Generic::KeyValuePair_2<TKey,System::Int32Enum>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,System::Int32Enum>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Int32Enum, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Collections::Generic::KeyValuePair_2<TKey,System::Int32Enum>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,System::Int32Enum>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("csnull") }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: Some("{}") }]
constexpr System::Collections::Generic::KeyValuePair_2<TKey,TValue>::KeyValuePair_2(TKey key, TValue value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,TValue>::__set_key(TKey value)  {
::cordl_internals::setInstanceField<TKey, 0x0>(this->__instance, std::forward<TKey>(value));
}
constexpr TKey System::Collections::Generic::KeyValuePair_2<TKey,TValue>::__get_key() const {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,TValue>::__set_value(TValue value)  {
::cordl_internals::setInstanceField<TValue, 0x8>(this->__instance, std::forward<TValue>(value));
}
constexpr TValue System::Collections::Generic::KeyValuePair_2<TKey,TValue>::__get_value() const {
return ::cordl_internals::getInstanceField<TValue, 0x8>(this->__instance);
}
 void System::Collections::Generic::KeyValuePair_2<TKey,TValue>::_ctor(TKey key, TValue value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value);
}
 TKey System::Collections::Generic::KeyValuePair_2<TKey,TValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 TValue System::Collections::Generic::KeyValuePair_2<TKey,TValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Collections::Generic::KeyValuePair_2<TKey,TValue>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("csnull") }, CppParam { name: "value", ty: "UnityEngine::Color32", modifiers: "", def_value: Some("{}") }]
constexpr System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::Color32>::KeyValuePair_2(TKey key, UnityEngine::Color32 value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::Color32>::__set_key(TKey value)  {
::cordl_internals::setInstanceField<TKey, 0x0>(this->__instance, std::forward<TKey>(value));
}
constexpr TKey System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::Color32>::__get_key() const {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::Color32>::__set_value(UnityEngine::Color32 value)  {
::cordl_internals::setInstanceField<UnityEngine::Color32, 0x8>(this->__instance, std::forward<UnityEngine::Color32>(value));
}
constexpr UnityEngine::Color32 System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::Color32>::__get_value() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color32, 0x8>(this->__instance);
}
 void System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::Color32>::_ctor(TKey key, UnityEngine::Color32 value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::Color32>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color32>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value);
}
 TKey System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::Color32>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::Color32>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 UnityEngine::Color32 System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::Color32>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::Color32>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Color32, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::Color32>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::Color32>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("csnull") }, CppParam { name: "value", ty: "UnityEngine::Color", modifiers: "", def_value: Some("{}") }]
constexpr System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::Color>::KeyValuePair_2(TKey key, UnityEngine::Color value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::Color>::__set_key(TKey value)  {
::cordl_internals::setInstanceField<TKey, 0x0>(this->__instance, std::forward<TKey>(value));
}
constexpr TKey System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::Color>::__get_key() const {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::Color>::__set_value(UnityEngine::Color value)  {
::cordl_internals::setInstanceField<UnityEngine::Color, 0x8>(this->__instance, std::forward<UnityEngine::Color>(value));
}
constexpr UnityEngine::Color System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::Color>::__get_value() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color, 0x8>(this->__instance);
}
 void System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::Color>::_ctor(TKey key, UnityEngine::Color value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::Color>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value);
}
 TKey System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::Color>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::Color>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 UnityEngine::Color System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::Color>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::Color>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Color, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::Color>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::Color>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("csnull") }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: Some("{}") }]
constexpr System::Collections::Generic::KeyValuePair_2<TKey,TValue>::KeyValuePair_2(TKey key, TValue value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,TValue>::__set_key(TKey value)  {
::cordl_internals::setInstanceField<TKey, 0x0>(this->__instance, std::forward<TKey>(value));
}
constexpr TKey System::Collections::Generic::KeyValuePair_2<TKey,TValue>::__get_key() const {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,TValue>::__set_value(TValue value)  {
::cordl_internals::setInstanceField<TValue, 0x8>(this->__instance, std::forward<TValue>(value));
}
constexpr TValue System::Collections::Generic::KeyValuePair_2<TKey,TValue>::__get_value() const {
return ::cordl_internals::getInstanceField<TValue, 0x8>(this->__instance);
}
 void System::Collections::Generic::KeyValuePair_2<TKey,TValue>::_ctor(TKey key, TValue value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value);
}
 TKey System::Collections::Generic::KeyValuePair_2<TKey,TValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 TValue System::Collections::Generic::KeyValuePair_2<TKey,TValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Collections::Generic::KeyValuePair_2<TKey,TValue>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("csnull") }, CppParam { name: "value", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr System::Collections::Generic::KeyValuePair_2<TKey,bool>::KeyValuePair_2(TKey key, bool value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,bool>::__set_key(TKey value)  {
::cordl_internals::setInstanceField<TKey, 0x0>(this->__instance, std::forward<TKey>(value));
}
constexpr TKey System::Collections::Generic::KeyValuePair_2<TKey,bool>::__get_key() const {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,bool>::__set_value(bool value)  {
::cordl_internals::setInstanceField<bool, 0x8>(this->__instance, std::forward<bool>(value));
}
constexpr bool System::Collections::Generic::KeyValuePair_2<TKey,bool>::__get_value() const {
return ::cordl_internals::getInstanceField<bool, 0x8>(this->__instance);
}
 void System::Collections::Generic::KeyValuePair_2<TKey,bool>::_ctor(TKey key, bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,bool>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value);
}
 TKey System::Collections::Generic::KeyValuePair_2<TKey,bool>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,bool>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool System::Collections::Generic::KeyValuePair_2<TKey,bool>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,bool>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Collections::Generic::KeyValuePair_2<TKey,bool>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,bool>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("csnull") }, CppParam { name: "value", ty: "System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>", modifiers: "", def_value: Some("{}") }]
constexpr System::Collections::Generic::KeyValuePair_2<TKey,System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>::KeyValuePair_2(TKey key, System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>::__set_key(TKey value)  {
::cordl_internals::setInstanceField<TKey, 0x0>(this->__instance, std::forward<TKey>(value));
}
constexpr TKey System::Collections::Generic::KeyValuePair_2<TKey,System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>::__get_key() const {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>::__set_value(System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> value)  {
::cordl_internals::setInstanceField<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>, 0x8>(this->__instance, std::forward<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>(value));
}
constexpr System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> System::Collections::Generic::KeyValuePair_2<TKey,System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>::__get_value() const {
return ::cordl_internals::getInstanceField<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>, 0x8>(this->__instance);
}
 void System::Collections::Generic::KeyValuePair_2<TKey,System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>::_ctor(TKey key, System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value);
}
 TKey System::Collections::Generic::KeyValuePair_2<TKey,System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> System::Collections::Generic::KeyValuePair_2<TKey,System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Collections::Generic::KeyValuePair_2<TKey,System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("csnull") }, CppParam { name: "value", ty: "System::ValueTuple_2<::bs_hook::Il2CppWrapperType,bool>", modifiers: "", def_value: Some("{}") }]
constexpr System::Collections::Generic::KeyValuePair_2<TKey,System::ValueTuple_2<::bs_hook::Il2CppWrapperType,bool>>::KeyValuePair_2(TKey key, System::ValueTuple_2<::bs_hook::Il2CppWrapperType,bool> value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,System::ValueTuple_2<::bs_hook::Il2CppWrapperType,bool>>::__set_key(TKey value)  {
::cordl_internals::setInstanceField<TKey, 0x0>(this->__instance, std::forward<TKey>(value));
}
constexpr TKey System::Collections::Generic::KeyValuePair_2<TKey,System::ValueTuple_2<::bs_hook::Il2CppWrapperType,bool>>::__get_key() const {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,System::ValueTuple_2<::bs_hook::Il2CppWrapperType,bool>>::__set_value(System::ValueTuple_2<::bs_hook::Il2CppWrapperType,bool> value)  {
::cordl_internals::setInstanceField<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,bool>, 0x8>(this->__instance, std::forward<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,bool>>(value));
}
constexpr System::ValueTuple_2<::bs_hook::Il2CppWrapperType,bool> System::Collections::Generic::KeyValuePair_2<TKey,System::ValueTuple_2<::bs_hook::Il2CppWrapperType,bool>>::__get_value() const {
return ::cordl_internals::getInstanceField<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,bool>, 0x8>(this->__instance);
}
 void System::Collections::Generic::KeyValuePair_2<TKey,System::ValueTuple_2<::bs_hook::Il2CppWrapperType,bool>>::_ctor(TKey key, System::ValueTuple_2<::bs_hook::Il2CppWrapperType,bool> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,System::ValueTuple_2<::bs_hook::Il2CppWrapperType,bool>>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value);
}
 TKey System::Collections::Generic::KeyValuePair_2<TKey,System::ValueTuple_2<::bs_hook::Il2CppWrapperType,bool>>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,System::ValueTuple_2<::bs_hook::Il2CppWrapperType,bool>>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 System::ValueTuple_2<::bs_hook::Il2CppWrapperType,bool> System::Collections::Generic::KeyValuePair_2<TKey,System::ValueTuple_2<::bs_hook::Il2CppWrapperType,bool>>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,System::ValueTuple_2<::bs_hook::Il2CppWrapperType,bool>>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,bool>, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Collections::Generic::KeyValuePair_2<TKey,System::ValueTuple_2<::bs_hook::Il2CppWrapperType,bool>>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,System::ValueTuple_2<::bs_hook::Il2CppWrapperType,bool>>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("csnull") }, CppParam { name: "value", ty: "UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::bs_hook::Il2CppWrapperType>", modifiers: "", def_value: Some("{}") }]
constexpr System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::bs_hook::Il2CppWrapperType>>::KeyValuePair_2(TKey key, UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::bs_hook::Il2CppWrapperType> value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::bs_hook::Il2CppWrapperType>>::__set_key(TKey value)  {
::cordl_internals::setInstanceField<TKey, 0x0>(this->__instance, std::forward<TKey>(value));
}
constexpr TKey System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::bs_hook::Il2CppWrapperType>>::__get_key() const {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::bs_hook::Il2CppWrapperType>>::__set_value(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::bs_hook::Il2CppWrapperType> value)  {
::cordl_internals::setInstanceField<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::bs_hook::Il2CppWrapperType>, 0x8>(this->__instance, std::forward<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::bs_hook::Il2CppWrapperType>>(value));
}
constexpr UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::bs_hook::Il2CppWrapperType> System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::bs_hook::Il2CppWrapperType>>::__get_value() const {
return ::cordl_internals::getInstanceField<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::bs_hook::Il2CppWrapperType>, 0x8>(this->__instance);
}
 void System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::bs_hook::Il2CppWrapperType>>::_ctor(TKey key, UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::bs_hook::Il2CppWrapperType> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::bs_hook::Il2CppWrapperType>>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value);
}
 TKey System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::bs_hook::Il2CppWrapperType>>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::bs_hook::Il2CppWrapperType>>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::bs_hook::Il2CppWrapperType> System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::bs_hook::Il2CppWrapperType>>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::bs_hook::Il2CppWrapperType>>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::bs_hook::Il2CppWrapperType>, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::bs_hook::Il2CppWrapperType>>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::bs_hook::Il2CppWrapperType>>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "UnityEngine::InputSystem::Utilities::InternedString", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: Some("csnull") }]
constexpr System::Collections::Generic::KeyValuePair_2<UnityEngine::InputSystem::Utilities::InternedString,TValue>::KeyValuePair_2(UnityEngine::InputSystem::Utilities::InternedString key, TValue value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Collections::Generic::KeyValuePair_2<UnityEngine::InputSystem::Utilities::InternedString,TValue>::__set_key(UnityEngine::InputSystem::Utilities::InternedString value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::Utilities::InternedString, 0x0>(this->__instance, std::forward<UnityEngine::InputSystem::Utilities::InternedString>(value));
}
constexpr UnityEngine::InputSystem::Utilities::InternedString System::Collections::Generic::KeyValuePair_2<UnityEngine::InputSystem::Utilities::InternedString,TValue>::__get_key() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::Utilities::InternedString, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<UnityEngine::InputSystem::Utilities::InternedString,TValue>::__set_value(TValue value)  {
::cordl_internals::setInstanceField<TValue, 0x8>(this->__instance, std::forward<TValue>(value));
}
constexpr TValue System::Collections::Generic::KeyValuePair_2<UnityEngine::InputSystem::Utilities::InternedString,TValue>::__get_value() const {
return ::cordl_internals::getInstanceField<TValue, 0x8>(this->__instance);
}
 void System::Collections::Generic::KeyValuePair_2<UnityEngine::InputSystem::Utilities::InternedString,TValue>::_ctor(UnityEngine::InputSystem::Utilities::InternedString key, TValue value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<UnityEngine::InputSystem::Utilities::InternedString,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value);
}
 UnityEngine::InputSystem::Utilities::InternedString System::Collections::Generic::KeyValuePair_2<UnityEngine::InputSystem::Utilities::InternedString,TValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<UnityEngine::InputSystem::Utilities::InternedString,TValue>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Utilities::InternedString, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 TValue System::Collections::Generic::KeyValuePair_2<UnityEngine::InputSystem::Utilities::InternedString,TValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<UnityEngine::InputSystem::Utilities::InternedString,TValue>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Collections::Generic::KeyValuePair_2<UnityEngine::InputSystem::Utilities::InternedString,TValue>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<UnityEngine::InputSystem::Utilities::InternedString,TValue>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "UnityEngine::ProBuilder::IntVec3", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: Some("csnull") }]
constexpr System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::IntVec3,TValue>::KeyValuePair_2(UnityEngine::ProBuilder::IntVec3 key, TValue value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::IntVec3,TValue>::__set_key(UnityEngine::ProBuilder::IntVec3 value)  {
::cordl_internals::setInstanceField<UnityEngine::ProBuilder::IntVec3, 0x0>(this->__instance, std::forward<UnityEngine::ProBuilder::IntVec3>(value));
}
constexpr UnityEngine::ProBuilder::IntVec3 System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::IntVec3,TValue>::__get_key() const {
return ::cordl_internals::getInstanceField<UnityEngine::ProBuilder::IntVec3, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::IntVec3,TValue>::__set_value(TValue value)  {
::cordl_internals::setInstanceField<TValue, 0x8>(this->__instance, std::forward<TValue>(value));
}
constexpr TValue System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::IntVec3,TValue>::__get_value() const {
return ::cordl_internals::getInstanceField<TValue, 0x8>(this->__instance);
}
 void System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::IntVec3,TValue>::_ctor(UnityEngine::ProBuilder::IntVec3 key, TValue value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::IntVec3,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::IntVec3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value);
}
 UnityEngine::ProBuilder::IntVec3 System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::IntVec3,TValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::IntVec3,TValue>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ProBuilder::IntVec3, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 TValue System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::IntVec3,TValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::IntVec3,TValue>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::IntVec3,TValue>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::IntVec3,TValue>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: Some("csnull") }]
constexpr System::Collections::Generic::KeyValuePair_2<TKey,TValue>::KeyValuePair_2(TKey key, TValue value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,TValue>::__set_key(TKey value)  {
::cordl_internals::setInstanceField<TKey, 0x0>(this->__instance, std::forward<TKey>(value));
}
constexpr TKey System::Collections::Generic::KeyValuePair_2<TKey,TValue>::__get_key() const {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,TValue>::__set_value(TValue value)  {
::cordl_internals::setInstanceField<TValue, 0x8>(this->__instance, std::forward<TValue>(value));
}
constexpr TValue System::Collections::Generic::KeyValuePair_2<TKey,TValue>::__get_value() const {
return ::cordl_internals::getInstanceField<TValue, 0x8>(this->__instance);
}
 void System::Collections::Generic::KeyValuePair_2<TKey,TValue>::_ctor(TKey key, TValue value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value);
}
 TKey System::Collections::Generic::KeyValuePair_2<TKey,TValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 TValue System::Collections::Generic::KeyValuePair_2<TKey,TValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Collections::Generic::KeyValuePair_2<TKey,TValue>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
//  Writing Method size for method: System::Collections::Generic::KeyValuePair_2<System::Int32Enum,float_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Generic::KeyValuePair_2<System::Int32Enum,float_t>::*)(System::Int32Enum, float_t)>(&System::Collections::Generic::KeyValuePair_2<System::Int32Enum,float_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<System::Int32Enum,float_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Int32Enum>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Generic::KeyValuePair_2<System::Int32Enum,float_t>.get_Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Int32Enum (System::Collections::Generic::KeyValuePair_2<System::Int32Enum,float_t>::*)()>(&System::Collections::Generic::KeyValuePair_2<System::Int32Enum,float_t>::get_Key)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<System::Int32Enum,float_t>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Generic::KeyValuePair_2<System::Int32Enum,float_t>.get_Value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (System::Collections::Generic::KeyValuePair_2<System::Int32Enum,float_t>::*)()>(&System::Collections::Generic::KeyValuePair_2<System::Int32Enum,float_t>::get_Value)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<System::Int32Enum,float_t>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Generic::KeyValuePair_2<System::Int32Enum,float_t>.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Collections::Generic::KeyValuePair_2<System::Int32Enum,float_t>::*)()>(&System::Collections::Generic::KeyValuePair_2<System::Int32Enum,float_t>::ToString)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Collections::Generic::KeyValuePair_2<System::Int32Enum,float_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "key", ty: "System::Int32Enum", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Collections::Generic::KeyValuePair_2<System::Int32Enum,float_t>::KeyValuePair_2(System::Int32Enum key, float_t value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Collections::Generic::KeyValuePair_2<System::Int32Enum,float_t>::__set_key(System::Int32Enum value)  {
::cordl_internals::setInstanceField<System::Int32Enum, 0x0>(this->__instance, std::forward<System::Int32Enum>(value));
}
constexpr System::Int32Enum System::Collections::Generic::KeyValuePair_2<System::Int32Enum,float_t>::__get_key() const {
return ::cordl_internals::getInstanceField<System::Int32Enum, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<System::Int32Enum,float_t>::__set_value(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x8>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t System::Collections::Generic::KeyValuePair_2<System::Int32Enum,float_t>::__get_value() const {
return ::cordl_internals::getInstanceField<float_t, 0x8>(this->__instance);
}
 void System::Collections::Generic::KeyValuePair_2<System::Int32Enum,float_t>::_ctor(System::Int32Enum key, float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<System::Int32Enum,float_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Int32Enum>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value);
}
 System::Int32Enum System::Collections::Generic::KeyValuePair_2<System::Int32Enum,float_t>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<System::Int32Enum,float_t>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Int32Enum, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 float_t System::Collections::Generic::KeyValuePair_2<System::Int32Enum,float_t>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<System::Int32Enum,float_t>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Collections::Generic::KeyValuePair_2<System::Int32Enum,float_t>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<System::Int32Enum,float_t>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "System::Int32Enum", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: Some("csnull") }]
constexpr System::Collections::Generic::KeyValuePair_2<System::Int32Enum,TValue>::KeyValuePair_2(System::Int32Enum key, TValue value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Collections::Generic::KeyValuePair_2<System::Int32Enum,TValue>::__set_key(System::Int32Enum value)  {
::cordl_internals::setInstanceField<System::Int32Enum, 0x0>(this->__instance, std::forward<System::Int32Enum>(value));
}
constexpr System::Int32Enum System::Collections::Generic::KeyValuePair_2<System::Int32Enum,TValue>::__get_key() const {
return ::cordl_internals::getInstanceField<System::Int32Enum, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<System::Int32Enum,TValue>::__set_value(TValue value)  {
::cordl_internals::setInstanceField<TValue, 0x8>(this->__instance, std::forward<TValue>(value));
}
constexpr TValue System::Collections::Generic::KeyValuePair_2<System::Int32Enum,TValue>::__get_value() const {
return ::cordl_internals::getInstanceField<TValue, 0x8>(this->__instance);
}
 void System::Collections::Generic::KeyValuePair_2<System::Int32Enum,TValue>::_ctor(System::Int32Enum key, TValue value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<System::Int32Enum,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Int32Enum>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value);
}
 System::Int32Enum System::Collections::Generic::KeyValuePair_2<System::Int32Enum,TValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<System::Int32Enum,TValue>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Int32Enum, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 TValue System::Collections::Generic::KeyValuePair_2<System::Int32Enum,TValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<System::Int32Enum,TValue>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Collections::Generic::KeyValuePair_2<System::Int32Enum,TValue>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<System::Int32Enum,TValue>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
//  Writing Method size for method: System::Collections::Generic::KeyValuePair_2<System::Int32Enum,System::Int32Enum>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Generic::KeyValuePair_2<System::Int32Enum,System::Int32Enum>::*)(System::Int32Enum, System::Int32Enum)>(&System::Collections::Generic::KeyValuePair_2<System::Int32Enum,System::Int32Enum>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<System::Int32Enum,System::Int32Enum>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Int32Enum>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Int32Enum>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Generic::KeyValuePair_2<System::Int32Enum,System::Int32Enum>.get_Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Int32Enum (System::Collections::Generic::KeyValuePair_2<System::Int32Enum,System::Int32Enum>::*)()>(&System::Collections::Generic::KeyValuePair_2<System::Int32Enum,System::Int32Enum>::get_Key)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<System::Int32Enum,System::Int32Enum>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Generic::KeyValuePair_2<System::Int32Enum,System::Int32Enum>.get_Value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Int32Enum (System::Collections::Generic::KeyValuePair_2<System::Int32Enum,System::Int32Enum>::*)()>(&System::Collections::Generic::KeyValuePair_2<System::Int32Enum,System::Int32Enum>::get_Value)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<System::Int32Enum,System::Int32Enum>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Generic::KeyValuePair_2<System::Int32Enum,System::Int32Enum>.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Collections::Generic::KeyValuePair_2<System::Int32Enum,System::Int32Enum>::*)()>(&System::Collections::Generic::KeyValuePair_2<System::Int32Enum,System::Int32Enum>::ToString)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Collections::Generic::KeyValuePair_2<System::Int32Enum,System::Int32Enum>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "key", ty: "System::Int32Enum", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "System::Int32Enum", modifiers: "", def_value: Some("{}") }]
constexpr System::Collections::Generic::KeyValuePair_2<System::Int32Enum,System::Int32Enum>::KeyValuePair_2(System::Int32Enum key, System::Int32Enum value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Collections::Generic::KeyValuePair_2<System::Int32Enum,System::Int32Enum>::__set_key(System::Int32Enum value)  {
::cordl_internals::setInstanceField<System::Int32Enum, 0x0>(this->__instance, std::forward<System::Int32Enum>(value));
}
constexpr System::Int32Enum System::Collections::Generic::KeyValuePair_2<System::Int32Enum,System::Int32Enum>::__get_key() const {
return ::cordl_internals::getInstanceField<System::Int32Enum, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<System::Int32Enum,System::Int32Enum>::__set_value(System::Int32Enum value)  {
::cordl_internals::setInstanceField<System::Int32Enum, 0x8>(this->__instance, std::forward<System::Int32Enum>(value));
}
constexpr System::Int32Enum System::Collections::Generic::KeyValuePair_2<System::Int32Enum,System::Int32Enum>::__get_value() const {
return ::cordl_internals::getInstanceField<System::Int32Enum, 0x8>(this->__instance);
}
 void System::Collections::Generic::KeyValuePair_2<System::Int32Enum,System::Int32Enum>::_ctor(System::Int32Enum key, System::Int32Enum value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<System::Int32Enum,System::Int32Enum>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Int32Enum>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Int32Enum>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value);
}
 System::Int32Enum System::Collections::Generic::KeyValuePair_2<System::Int32Enum,System::Int32Enum>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<System::Int32Enum,System::Int32Enum>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Int32Enum, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 System::Int32Enum System::Collections::Generic::KeyValuePair_2<System::Int32Enum,System::Int32Enum>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<System::Int32Enum,System::Int32Enum>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Int32Enum, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Collections::Generic::KeyValuePair_2<System::Int32Enum,System::Int32Enum>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<System::Int32Enum,System::Int32Enum>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "System::Int32Enum", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: Some("{}") }]
constexpr System::Collections::Generic::KeyValuePair_2<System::Int32Enum,TValue>::KeyValuePair_2(System::Int32Enum key, TValue value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Collections::Generic::KeyValuePair_2<System::Int32Enum,TValue>::__set_key(System::Int32Enum value)  {
::cordl_internals::setInstanceField<System::Int32Enum, 0x0>(this->__instance, std::forward<System::Int32Enum>(value));
}
constexpr System::Int32Enum System::Collections::Generic::KeyValuePair_2<System::Int32Enum,TValue>::__get_key() const {
return ::cordl_internals::getInstanceField<System::Int32Enum, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<System::Int32Enum,TValue>::__set_value(TValue value)  {
::cordl_internals::setInstanceField<TValue, 0x8>(this->__instance, std::forward<TValue>(value));
}
constexpr TValue System::Collections::Generic::KeyValuePair_2<System::Int32Enum,TValue>::__get_value() const {
return ::cordl_internals::getInstanceField<TValue, 0x8>(this->__instance);
}
 void System::Collections::Generic::KeyValuePair_2<System::Int32Enum,TValue>::_ctor(System::Int32Enum key, TValue value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<System::Int32Enum,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Int32Enum>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value);
}
 System::Int32Enum System::Collections::Generic::KeyValuePair_2<System::Int32Enum,TValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<System::Int32Enum,TValue>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Int32Enum, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 TValue System::Collections::Generic::KeyValuePair_2<System::Int32Enum,TValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<System::Int32Enum,TValue>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Collections::Generic::KeyValuePair_2<System::Int32Enum,TValue>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<System::Int32Enum,TValue>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }]
constexpr System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::Vector3>::KeyValuePair_2(TKey key, UnityEngine::Vector3 value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::Vector3>::__set_key(TKey value)  {
::cordl_internals::setInstanceField<TKey, 0x0>(this->__instance, std::forward<TKey>(value));
}
constexpr TKey System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::Vector3>::__get_key() const {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::Vector3>::__set_value(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x8>(this->__instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::Vector3>::__get_value() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x8>(this->__instance);
}
 void System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::Vector3>::_ctor(TKey key, UnityEngine::Vector3 value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::Vector3>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value);
}
 TKey System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::Vector3>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::Vector3>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 UnityEngine::Vector3 System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::Vector3>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::Vector3>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector3, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::Vector3>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::Vector3>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: Some("csnull") }]
constexpr System::Collections::Generic::KeyValuePair_2<TKey,TValue>::KeyValuePair_2(TKey key, TValue value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,TValue>::__set_key(TKey value)  {
::cordl_internals::setInstanceField<TKey, 0x0>(this->__instance, std::forward<TKey>(value));
}
constexpr TKey System::Collections::Generic::KeyValuePair_2<TKey,TValue>::__get_key() const {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,TValue>::__set_value(TValue value)  {
::cordl_internals::setInstanceField<TValue, 0x8>(this->__instance, std::forward<TValue>(value));
}
constexpr TValue System::Collections::Generic::KeyValuePair_2<TKey,TValue>::__get_value() const {
return ::cordl_internals::getInstanceField<TValue, 0x8>(this->__instance);
}
 void System::Collections::Generic::KeyValuePair_2<TKey,TValue>::_ctor(TKey key, TValue value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value);
}
 TKey System::Collections::Generic::KeyValuePair_2<TKey,TValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 TValue System::Collections::Generic::KeyValuePair_2<TKey,TValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Collections::Generic::KeyValuePair_2<TKey,TValue>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "System::Int32Enum", modifiers: "", def_value: Some("{}") }]
constexpr System::Collections::Generic::KeyValuePair_2<TKey,System::Int32Enum>::KeyValuePair_2(TKey key, System::Int32Enum value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,System::Int32Enum>::__set_key(TKey value)  {
::cordl_internals::setInstanceField<TKey, 0x0>(this->__instance, std::forward<TKey>(value));
}
constexpr TKey System::Collections::Generic::KeyValuePair_2<TKey,System::Int32Enum>::__get_key() const {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,System::Int32Enum>::__set_value(System::Int32Enum value)  {
::cordl_internals::setInstanceField<System::Int32Enum, 0x8>(this->__instance, std::forward<System::Int32Enum>(value));
}
constexpr System::Int32Enum System::Collections::Generic::KeyValuePair_2<TKey,System::Int32Enum>::__get_value() const {
return ::cordl_internals::getInstanceField<System::Int32Enum, 0x8>(this->__instance);
}
 void System::Collections::Generic::KeyValuePair_2<TKey,System::Int32Enum>::_ctor(TKey key, System::Int32Enum value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,System::Int32Enum>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Int32Enum>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value);
}
 TKey System::Collections::Generic::KeyValuePair_2<TKey,System::Int32Enum>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,System::Int32Enum>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 System::Int32Enum System::Collections::Generic::KeyValuePair_2<TKey,System::Int32Enum>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,System::Int32Enum>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Int32Enum, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Collections::Generic::KeyValuePair_2<TKey,System::Int32Enum>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,System::Int32Enum>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "UnityEngine::ProBuilder::SimpleTuple_3<UnityEngine::Vector3,UnityEngine::Vector3,::bs_hook::Il2CppWrapperType>", modifiers: "", def_value: Some("{}") }]
constexpr System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::ProBuilder::SimpleTuple_3<UnityEngine::Vector3,UnityEngine::Vector3,::bs_hook::Il2CppWrapperType>>::KeyValuePair_2(TKey key, UnityEngine::ProBuilder::SimpleTuple_3<UnityEngine::Vector3,UnityEngine::Vector3,::bs_hook::Il2CppWrapperType> value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::ProBuilder::SimpleTuple_3<UnityEngine::Vector3,UnityEngine::Vector3,::bs_hook::Il2CppWrapperType>>::__set_key(TKey value)  {
::cordl_internals::setInstanceField<TKey, 0x0>(this->__instance, std::forward<TKey>(value));
}
constexpr TKey System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::ProBuilder::SimpleTuple_3<UnityEngine::Vector3,UnityEngine::Vector3,::bs_hook::Il2CppWrapperType>>::__get_key() const {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::ProBuilder::SimpleTuple_3<UnityEngine::Vector3,UnityEngine::Vector3,::bs_hook::Il2CppWrapperType>>::__set_value(UnityEngine::ProBuilder::SimpleTuple_3<UnityEngine::Vector3,UnityEngine::Vector3,::bs_hook::Il2CppWrapperType> value)  {
::cordl_internals::setInstanceField<UnityEngine::ProBuilder::SimpleTuple_3<UnityEngine::Vector3,UnityEngine::Vector3,::bs_hook::Il2CppWrapperType>, 0x8>(this->__instance, std::forward<UnityEngine::ProBuilder::SimpleTuple_3<UnityEngine::Vector3,UnityEngine::Vector3,::bs_hook::Il2CppWrapperType>>(value));
}
constexpr UnityEngine::ProBuilder::SimpleTuple_3<UnityEngine::Vector3,UnityEngine::Vector3,::bs_hook::Il2CppWrapperType> System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::ProBuilder::SimpleTuple_3<UnityEngine::Vector3,UnityEngine::Vector3,::bs_hook::Il2CppWrapperType>>::__get_value() const {
return ::cordl_internals::getInstanceField<UnityEngine::ProBuilder::SimpleTuple_3<UnityEngine::Vector3,UnityEngine::Vector3,::bs_hook::Il2CppWrapperType>, 0x8>(this->__instance);
}
 void System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::ProBuilder::SimpleTuple_3<UnityEngine::Vector3,UnityEngine::Vector3,::bs_hook::Il2CppWrapperType>>::_ctor(TKey key, UnityEngine::ProBuilder::SimpleTuple_3<UnityEngine::Vector3,UnityEngine::Vector3,::bs_hook::Il2CppWrapperType> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::ProBuilder::SimpleTuple_3<UnityEngine::Vector3,UnityEngine::Vector3,::bs_hook::Il2CppWrapperType>>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::SimpleTuple_3<UnityEngine::Vector3,UnityEngine::Vector3,::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value);
}
 TKey System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::ProBuilder::SimpleTuple_3<UnityEngine::Vector3,UnityEngine::Vector3,::bs_hook::Il2CppWrapperType>>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::ProBuilder::SimpleTuple_3<UnityEngine::Vector3,UnityEngine::Vector3,::bs_hook::Il2CppWrapperType>>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 UnityEngine::ProBuilder::SimpleTuple_3<UnityEngine::Vector3,UnityEngine::Vector3,::bs_hook::Il2CppWrapperType> System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::ProBuilder::SimpleTuple_3<UnityEngine::Vector3,UnityEngine::Vector3,::bs_hook::Il2CppWrapperType>>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::ProBuilder::SimpleTuple_3<UnityEngine::Vector3,UnityEngine::Vector3,::bs_hook::Il2CppWrapperType>>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ProBuilder::SimpleTuple_3<UnityEngine::Vector3,UnityEngine::Vector3,::bs_hook::Il2CppWrapperType>, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::ProBuilder::SimpleTuple_3<UnityEngine::Vector3,UnityEngine::Vector3,::bs_hook::Il2CppWrapperType>>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::ProBuilder::SimpleTuple_3<UnityEngine::Vector3,UnityEngine::Vector3,::bs_hook::Il2CppWrapperType>>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "System::Guid", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: Some("csnull") }]
constexpr System::Collections::Generic::KeyValuePair_2<System::Guid,TValue>::KeyValuePair_2(System::Guid key, TValue value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Collections::Generic::KeyValuePair_2<System::Guid,TValue>::__set_key(System::Guid value)  {
::cordl_internals::setInstanceField<System::Guid, 0x0>(this->__instance, std::forward<System::Guid>(value));
}
constexpr System::Guid System::Collections::Generic::KeyValuePair_2<System::Guid,TValue>::__get_key() const {
return ::cordl_internals::getInstanceField<System::Guid, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<System::Guid,TValue>::__set_value(TValue value)  {
::cordl_internals::setInstanceField<TValue, 0x8>(this->__instance, std::forward<TValue>(value));
}
constexpr TValue System::Collections::Generic::KeyValuePair_2<System::Guid,TValue>::__get_value() const {
return ::cordl_internals::getInstanceField<TValue, 0x8>(this->__instance);
}
 void System::Collections::Generic::KeyValuePair_2<System::Guid,TValue>::_ctor(System::Guid key, TValue value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<System::Guid,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Guid>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value);
}
 System::Guid System::Collections::Generic::KeyValuePair_2<System::Guid,TValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<System::Guid,TValue>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Guid, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 TValue System::Collections::Generic::KeyValuePair_2<System::Guid,TValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<System::Guid,TValue>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Collections::Generic::KeyValuePair_2<System::Guid,TValue>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<System::Guid,TValue>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "UnityEngine::ProBuilder::EdgeLookup", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: Some("csnull") }]
constexpr System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::EdgeLookup,TValue>::KeyValuePair_2(UnityEngine::ProBuilder::EdgeLookup key, TValue value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::EdgeLookup,TValue>::__set_key(UnityEngine::ProBuilder::EdgeLookup value)  {
::cordl_internals::setInstanceField<UnityEngine::ProBuilder::EdgeLookup, 0x0>(this->__instance, std::forward<UnityEngine::ProBuilder::EdgeLookup>(value));
}
constexpr UnityEngine::ProBuilder::EdgeLookup System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::EdgeLookup,TValue>::__get_key() const {
return ::cordl_internals::getInstanceField<UnityEngine::ProBuilder::EdgeLookup, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::EdgeLookup,TValue>::__set_value(TValue value)  {
::cordl_internals::setInstanceField<TValue, 0x8>(this->__instance, std::forward<TValue>(value));
}
constexpr TValue System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::EdgeLookup,TValue>::__get_value() const {
return ::cordl_internals::getInstanceField<TValue, 0x8>(this->__instance);
}
 void System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::EdgeLookup,TValue>::_ctor(UnityEngine::ProBuilder::EdgeLookup key, TValue value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::EdgeLookup,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::EdgeLookup>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value);
}
 UnityEngine::ProBuilder::EdgeLookup System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::EdgeLookup,TValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::EdgeLookup,TValue>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ProBuilder::EdgeLookup, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 TValue System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::EdgeLookup,TValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::EdgeLookup,TValue>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::EdgeLookup,TValue>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::EdgeLookup,TValue>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "UnityEngine::ProBuilder::Edge", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: Some("csnull") }]
constexpr System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::Edge,TValue>::KeyValuePair_2(UnityEngine::ProBuilder::Edge key, TValue value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::Edge,TValue>::__set_key(UnityEngine::ProBuilder::Edge value)  {
::cordl_internals::setInstanceField<UnityEngine::ProBuilder::Edge, 0x0>(this->__instance, std::forward<UnityEngine::ProBuilder::Edge>(value));
}
constexpr UnityEngine::ProBuilder::Edge System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::Edge,TValue>::__get_key() const {
return ::cordl_internals::getInstanceField<UnityEngine::ProBuilder::Edge, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::Edge,TValue>::__set_value(TValue value)  {
::cordl_internals::setInstanceField<TValue, 0x8>(this->__instance, std::forward<TValue>(value));
}
constexpr TValue System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::Edge,TValue>::__get_value() const {
return ::cordl_internals::getInstanceField<TValue, 0x8>(this->__instance);
}
 void System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::Edge,TValue>::_ctor(UnityEngine::ProBuilder::Edge key, TValue value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::Edge,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::Edge>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value);
}
 UnityEngine::ProBuilder::Edge System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::Edge,TValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::Edge,TValue>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ProBuilder::Edge, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 TValue System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::Edge,TValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::Edge,TValue>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::Edge,TValue>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::Edge,TValue>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "char16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: Some("csnull") }]
constexpr System::Collections::Generic::KeyValuePair_2<char16_t,TValue>::KeyValuePair_2(char16_t key, TValue value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Collections::Generic::KeyValuePair_2<char16_t,TValue>::__set_key(char16_t value)  {
::cordl_internals::setInstanceField<char16_t, 0x0>(this->__instance, std::forward<char16_t>(value));
}
constexpr char16_t System::Collections::Generic::KeyValuePair_2<char16_t,TValue>::__get_key() const {
return ::cordl_internals::getInstanceField<char16_t, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<char16_t,TValue>::__set_value(TValue value)  {
::cordl_internals::setInstanceField<TValue, 0x8>(this->__instance, std::forward<TValue>(value));
}
constexpr TValue System::Collections::Generic::KeyValuePair_2<char16_t,TValue>::__get_value() const {
return ::cordl_internals::getInstanceField<TValue, 0x8>(this->__instance);
}
 void System::Collections::Generic::KeyValuePair_2<char16_t,TValue>::_ctor(char16_t key, TValue value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<char16_t,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value);
}
 char16_t System::Collections::Generic::KeyValuePair_2<char16_t,TValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<char16_t,TValue>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<char16_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 TValue System::Collections::Generic::KeyValuePair_2<char16_t,TValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<char16_t,TValue>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Collections::Generic::KeyValuePair_2<char16_t,TValue>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<char16_t,TValue>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: Some("csnull") }]
constexpr System::Collections::Generic::KeyValuePair_2<TKey,TValue>::KeyValuePair_2(TKey key, TValue value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,TValue>::__set_key(TKey value)  {
::cordl_internals::setInstanceField<TKey, 0x0>(this->__instance, std::forward<TKey>(value));
}
constexpr TKey System::Collections::Generic::KeyValuePair_2<TKey,TValue>::__get_key() const {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,TValue>::__set_value(TValue value)  {
::cordl_internals::setInstanceField<TValue, 0x8>(this->__instance, std::forward<TValue>(value));
}
constexpr TValue System::Collections::Generic::KeyValuePair_2<TKey,TValue>::__get_value() const {
return ::cordl_internals::getInstanceField<TValue, 0x8>(this->__instance);
}
 void System::Collections::Generic::KeyValuePair_2<TKey,TValue>::_ctor(TKey key, TValue value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value);
}
 TKey System::Collections::Generic::KeyValuePair_2<TKey,TValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 TValue System::Collections::Generic::KeyValuePair_2<TKey,TValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Collections::Generic::KeyValuePair_2<TKey,TValue>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "Zenject::BindingId", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: Some("csnull") }]
constexpr System::Collections::Generic::KeyValuePair_2<Zenject::BindingId,TValue>::KeyValuePair_2(Zenject::BindingId key, TValue value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Collections::Generic::KeyValuePair_2<Zenject::BindingId,TValue>::__set_key(Zenject::BindingId value)  {
::cordl_internals::setInstanceField<Zenject::BindingId, 0x0>(this->__instance, std::forward<Zenject::BindingId>(value));
}
constexpr Zenject::BindingId System::Collections::Generic::KeyValuePair_2<Zenject::BindingId,TValue>::__get_key() const {
return ::cordl_internals::getInstanceField<Zenject::BindingId, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<Zenject::BindingId,TValue>::__set_value(TValue value)  {
::cordl_internals::setInstanceField<TValue, 0x8>(this->__instance, std::forward<TValue>(value));
}
constexpr TValue System::Collections::Generic::KeyValuePair_2<Zenject::BindingId,TValue>::__get_value() const {
return ::cordl_internals::getInstanceField<TValue, 0x8>(this->__instance);
}
 void System::Collections::Generic::KeyValuePair_2<Zenject::BindingId,TValue>::_ctor(Zenject::BindingId key, TValue value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<Zenject::BindingId,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::BindingId>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value);
}
 Zenject::BindingId System::Collections::Generic::KeyValuePair_2<Zenject::BindingId,TValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<Zenject::BindingId,TValue>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::BindingId, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 TValue System::Collections::Generic::KeyValuePair_2<Zenject::BindingId,TValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<Zenject::BindingId,TValue>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Collections::Generic::KeyValuePair_2<Zenject::BindingId,TValue>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<Zenject::BindingId,TValue>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "System::ValueTuple_3<int32_t,::bs_hook::Il2CppWrapperType,int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: Some("csnull") }]
constexpr System::Collections::Generic::KeyValuePair_2<System::ValueTuple_3<int32_t,::bs_hook::Il2CppWrapperType,int32_t>,TValue>::KeyValuePair_2(System::ValueTuple_3<int32_t,::bs_hook::Il2CppWrapperType,int32_t> key, TValue value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Collections::Generic::KeyValuePair_2<System::ValueTuple_3<int32_t,::bs_hook::Il2CppWrapperType,int32_t>,TValue>::__set_key(System::ValueTuple_3<int32_t,::bs_hook::Il2CppWrapperType,int32_t> value)  {
::cordl_internals::setInstanceField<System::ValueTuple_3<int32_t,::bs_hook::Il2CppWrapperType,int32_t>, 0x0>(this->__instance, std::forward<System::ValueTuple_3<int32_t,::bs_hook::Il2CppWrapperType,int32_t>>(value));
}
constexpr System::ValueTuple_3<int32_t,::bs_hook::Il2CppWrapperType,int32_t> System::Collections::Generic::KeyValuePair_2<System::ValueTuple_3<int32_t,::bs_hook::Il2CppWrapperType,int32_t>,TValue>::__get_key() const {
return ::cordl_internals::getInstanceField<System::ValueTuple_3<int32_t,::bs_hook::Il2CppWrapperType,int32_t>, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<System::ValueTuple_3<int32_t,::bs_hook::Il2CppWrapperType,int32_t>,TValue>::__set_value(TValue value)  {
::cordl_internals::setInstanceField<TValue, 0x8>(this->__instance, std::forward<TValue>(value));
}
constexpr TValue System::Collections::Generic::KeyValuePair_2<System::ValueTuple_3<int32_t,::bs_hook::Il2CppWrapperType,int32_t>,TValue>::__get_value() const {
return ::cordl_internals::getInstanceField<TValue, 0x8>(this->__instance);
}
 void System::Collections::Generic::KeyValuePair_2<System::ValueTuple_3<int32_t,::bs_hook::Il2CppWrapperType,int32_t>,TValue>::_ctor(System::ValueTuple_3<int32_t,::bs_hook::Il2CppWrapperType,int32_t> key, TValue value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<System::ValueTuple_3<int32_t,::bs_hook::Il2CppWrapperType,int32_t>,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ValueTuple_3<int32_t,::bs_hook::Il2CppWrapperType,int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value);
}
 System::ValueTuple_3<int32_t,::bs_hook::Il2CppWrapperType,int32_t> System::Collections::Generic::KeyValuePair_2<System::ValueTuple_3<int32_t,::bs_hook::Il2CppWrapperType,int32_t>,TValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<System::ValueTuple_3<int32_t,::bs_hook::Il2CppWrapperType,int32_t>,TValue>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::ValueTuple_3<int32_t,::bs_hook::Il2CppWrapperType,int32_t>, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 TValue System::Collections::Generic::KeyValuePair_2<System::ValueTuple_3<int32_t,::bs_hook::Il2CppWrapperType,int32_t>,TValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<System::ValueTuple_3<int32_t,::bs_hook::Il2CppWrapperType,int32_t>,TValue>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Collections::Generic::KeyValuePair_2<System::ValueTuple_3<int32_t,::bs_hook::Il2CppWrapperType,int32_t>,TValue>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<System::ValueTuple_3<int32_t,::bs_hook::Il2CppWrapperType,int32_t>,TValue>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: Some("csnull") }]
constexpr System::Collections::Generic::KeyValuePair_2<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>,TValue>::KeyValuePair_2(System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> key, TValue value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Collections::Generic::KeyValuePair_2<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>,TValue>::__set_key(System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> value)  {
::cordl_internals::setInstanceField<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>, 0x0>(this->__instance, std::forward<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>(value));
}
constexpr System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> System::Collections::Generic::KeyValuePair_2<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>,TValue>::__get_key() const {
return ::cordl_internals::getInstanceField<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>,TValue>::__set_value(TValue value)  {
::cordl_internals::setInstanceField<TValue, 0x8>(this->__instance, std::forward<TValue>(value));
}
constexpr TValue System::Collections::Generic::KeyValuePair_2<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>,TValue>::__get_value() const {
return ::cordl_internals::getInstanceField<TValue, 0x8>(this->__instance);
}
 void System::Collections::Generic::KeyValuePair_2<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>,TValue>::_ctor(System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> key, TValue value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value);
}
 System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> System::Collections::Generic::KeyValuePair_2<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>,TValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>,TValue>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 TValue System::Collections::Generic::KeyValuePair_2<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>,TValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>,TValue>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Collections::Generic::KeyValuePair_2<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>,TValue>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>,TValue>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: Some("csnull") }]
constexpr System::Collections::Generic::KeyValuePair_2<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int32_t>,TValue>::KeyValuePair_2(System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int32_t> key, TValue value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Collections::Generic::KeyValuePair_2<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int32_t>,TValue>::__set_key(System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int32_t> value)  {
::cordl_internals::setInstanceField<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int32_t>, 0x0>(this->__instance, std::forward<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int32_t>>(value));
}
constexpr System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int32_t> System::Collections::Generic::KeyValuePair_2<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int32_t>,TValue>::__get_key() const {
return ::cordl_internals::getInstanceField<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int32_t>, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int32_t>,TValue>::__set_value(TValue value)  {
::cordl_internals::setInstanceField<TValue, 0x8>(this->__instance, std::forward<TValue>(value));
}
constexpr TValue System::Collections::Generic::KeyValuePair_2<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int32_t>,TValue>::__get_value() const {
return ::cordl_internals::getInstanceField<TValue, 0x8>(this->__instance);
}
 void System::Collections::Generic::KeyValuePair_2<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int32_t>,TValue>::_ctor(System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int32_t> key, TValue value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int32_t>,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value);
}
 System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int32_t> System::Collections::Generic::KeyValuePair_2<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int32_t>,TValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int32_t>,TValue>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int32_t>, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 TValue System::Collections::Generic::KeyValuePair_2<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int32_t>,TValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int32_t>,TValue>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Collections::Generic::KeyValuePair_2<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int32_t>,TValue>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int32_t>,TValue>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "System::ValueTuple_2<System::Int32Enum,::bs_hook::Il2CppWrapperType>", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: Some("csnull") }]
constexpr System::Collections::Generic::KeyValuePair_2<System::ValueTuple_2<System::Int32Enum,::bs_hook::Il2CppWrapperType>,TValue>::KeyValuePair_2(System::ValueTuple_2<System::Int32Enum,::bs_hook::Il2CppWrapperType> key, TValue value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Collections::Generic::KeyValuePair_2<System::ValueTuple_2<System::Int32Enum,::bs_hook::Il2CppWrapperType>,TValue>::__set_key(System::ValueTuple_2<System::Int32Enum,::bs_hook::Il2CppWrapperType> value)  {
::cordl_internals::setInstanceField<System::ValueTuple_2<System::Int32Enum,::bs_hook::Il2CppWrapperType>, 0x0>(this->__instance, std::forward<System::ValueTuple_2<System::Int32Enum,::bs_hook::Il2CppWrapperType>>(value));
}
constexpr System::ValueTuple_2<System::Int32Enum,::bs_hook::Il2CppWrapperType> System::Collections::Generic::KeyValuePair_2<System::ValueTuple_2<System::Int32Enum,::bs_hook::Il2CppWrapperType>,TValue>::__get_key() const {
return ::cordl_internals::getInstanceField<System::ValueTuple_2<System::Int32Enum,::bs_hook::Il2CppWrapperType>, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<System::ValueTuple_2<System::Int32Enum,::bs_hook::Il2CppWrapperType>,TValue>::__set_value(TValue value)  {
::cordl_internals::setInstanceField<TValue, 0x8>(this->__instance, std::forward<TValue>(value));
}
constexpr TValue System::Collections::Generic::KeyValuePair_2<System::ValueTuple_2<System::Int32Enum,::bs_hook::Il2CppWrapperType>,TValue>::__get_value() const {
return ::cordl_internals::getInstanceField<TValue, 0x8>(this->__instance);
}
 void System::Collections::Generic::KeyValuePair_2<System::ValueTuple_2<System::Int32Enum,::bs_hook::Il2CppWrapperType>,TValue>::_ctor(System::ValueTuple_2<System::Int32Enum,::bs_hook::Il2CppWrapperType> key, TValue value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<System::ValueTuple_2<System::Int32Enum,::bs_hook::Il2CppWrapperType>,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ValueTuple_2<System::Int32Enum,::bs_hook::Il2CppWrapperType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value);
}
 System::ValueTuple_2<System::Int32Enum,::bs_hook::Il2CppWrapperType> System::Collections::Generic::KeyValuePair_2<System::ValueTuple_2<System::Int32Enum,::bs_hook::Il2CppWrapperType>,TValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<System::ValueTuple_2<System::Int32Enum,::bs_hook::Il2CppWrapperType>,TValue>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::ValueTuple_2<System::Int32Enum,::bs_hook::Il2CppWrapperType>, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 TValue System::Collections::Generic::KeyValuePair_2<System::ValueTuple_2<System::Int32Enum,::bs_hook::Il2CppWrapperType>,TValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<System::ValueTuple_2<System::Int32Enum,::bs_hook::Il2CppWrapperType>,TValue>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Collections::Generic::KeyValuePair_2<System::ValueTuple_2<System::Int32Enum,::bs_hook::Il2CppWrapperType>,TValue>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<System::ValueTuple_2<System::Int32Enum,::bs_hook::Il2CppWrapperType>,TValue>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: Some("{}") }]
constexpr System::Collections::Generic::KeyValuePair_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,TValue>::KeyValuePair_2(UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair key, TValue value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Collections::Generic::KeyValuePair_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,TValue>::__set_key(UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair, 0x0>(this->__instance, std::forward<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair>(value));
}
constexpr UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair System::Collections::Generic::KeyValuePair_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,TValue>::__get_key() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,TValue>::__set_value(TValue value)  {
::cordl_internals::setInstanceField<TValue, 0x8>(this->__instance, std::forward<TValue>(value));
}
constexpr TValue System::Collections::Generic::KeyValuePair_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,TValue>::__get_value() const {
return ::cordl_internals::getInstanceField<TValue, 0x8>(this->__instance);
}
 void System::Collections::Generic::KeyValuePair_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,TValue>::_ctor(UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair key, TValue value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value);
}
 UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair System::Collections::Generic::KeyValuePair_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,TValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,TValue>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 TValue System::Collections::Generic::KeyValuePair_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,TValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,TValue>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Collections::Generic::KeyValuePair_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,TValue>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,TValue>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
//  Writing Method size for method: System::Collections::Generic::KeyValuePair_2<MS::Internal::Xml::Cache::XPathNodeRef,MS::Internal::Xml::Cache::XPathNodeRef>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Generic::KeyValuePair_2<MS::Internal::Xml::Cache::XPathNodeRef,MS::Internal::Xml::Cache::XPathNodeRef>::*)(MS::Internal::Xml::Cache::XPathNodeRef, MS::Internal::Xml::Cache::XPathNodeRef)>(&System::Collections::Generic::KeyValuePair_2<MS::Internal::Xml::Cache::XPathNodeRef,MS::Internal::Xml::Cache::XPathNodeRef>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<MS::Internal::Xml::Cache::XPathNodeRef,MS::Internal::Xml::Cache::XPathNodeRef>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<MS::Internal::Xml::Cache::XPathNodeRef>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<MS::Internal::Xml::Cache::XPathNodeRef>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Generic::KeyValuePair_2<MS::Internal::Xml::Cache::XPathNodeRef,MS::Internal::Xml::Cache::XPathNodeRef>.get_Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<MS::Internal::Xml::Cache::XPathNodeRef (System::Collections::Generic::KeyValuePair_2<MS::Internal::Xml::Cache::XPathNodeRef,MS::Internal::Xml::Cache::XPathNodeRef>::*)()>(&System::Collections::Generic::KeyValuePair_2<MS::Internal::Xml::Cache::XPathNodeRef,MS::Internal::Xml::Cache::XPathNodeRef>::get_Key)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<MS::Internal::Xml::Cache::XPathNodeRef,MS::Internal::Xml::Cache::XPathNodeRef>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Generic::KeyValuePair_2<MS::Internal::Xml::Cache::XPathNodeRef,MS::Internal::Xml::Cache::XPathNodeRef>.get_Value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<MS::Internal::Xml::Cache::XPathNodeRef (System::Collections::Generic::KeyValuePair_2<MS::Internal::Xml::Cache::XPathNodeRef,MS::Internal::Xml::Cache::XPathNodeRef>::*)()>(&System::Collections::Generic::KeyValuePair_2<MS::Internal::Xml::Cache::XPathNodeRef,MS::Internal::Xml::Cache::XPathNodeRef>::get_Value)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<MS::Internal::Xml::Cache::XPathNodeRef,MS::Internal::Xml::Cache::XPathNodeRef>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Generic::KeyValuePair_2<MS::Internal::Xml::Cache::XPathNodeRef,MS::Internal::Xml::Cache::XPathNodeRef>.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Collections::Generic::KeyValuePair_2<MS::Internal::Xml::Cache::XPathNodeRef,MS::Internal::Xml::Cache::XPathNodeRef>::*)()>(&System::Collections::Generic::KeyValuePair_2<MS::Internal::Xml::Cache::XPathNodeRef,MS::Internal::Xml::Cache::XPathNodeRef>::ToString)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Collections::Generic::KeyValuePair_2<MS::Internal::Xml::Cache::XPathNodeRef,MS::Internal::Xml::Cache::XPathNodeRef>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "key", ty: "MS::Internal::Xml::Cache::XPathNodeRef", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "MS::Internal::Xml::Cache::XPathNodeRef", modifiers: "", def_value: Some("{}") }]
constexpr System::Collections::Generic::KeyValuePair_2<MS::Internal::Xml::Cache::XPathNodeRef,MS::Internal::Xml::Cache::XPathNodeRef>::KeyValuePair_2(MS::Internal::Xml::Cache::XPathNodeRef key, MS::Internal::Xml::Cache::XPathNodeRef value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Collections::Generic::KeyValuePair_2<MS::Internal::Xml::Cache::XPathNodeRef,MS::Internal::Xml::Cache::XPathNodeRef>::__set_key(MS::Internal::Xml::Cache::XPathNodeRef value)  {
::cordl_internals::setInstanceField<MS::Internal::Xml::Cache::XPathNodeRef, 0x0>(this->__instance, std::forward<MS::Internal::Xml::Cache::XPathNodeRef>(value));
}
constexpr MS::Internal::Xml::Cache::XPathNodeRef System::Collections::Generic::KeyValuePair_2<MS::Internal::Xml::Cache::XPathNodeRef,MS::Internal::Xml::Cache::XPathNodeRef>::__get_key() const {
return ::cordl_internals::getInstanceField<MS::Internal::Xml::Cache::XPathNodeRef, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<MS::Internal::Xml::Cache::XPathNodeRef,MS::Internal::Xml::Cache::XPathNodeRef>::__set_value(MS::Internal::Xml::Cache::XPathNodeRef value)  {
::cordl_internals::setInstanceField<MS::Internal::Xml::Cache::XPathNodeRef, 0x8>(this->__instance, std::forward<MS::Internal::Xml::Cache::XPathNodeRef>(value));
}
constexpr MS::Internal::Xml::Cache::XPathNodeRef System::Collections::Generic::KeyValuePair_2<MS::Internal::Xml::Cache::XPathNodeRef,MS::Internal::Xml::Cache::XPathNodeRef>::__get_value() const {
return ::cordl_internals::getInstanceField<MS::Internal::Xml::Cache::XPathNodeRef, 0x8>(this->__instance);
}
 void System::Collections::Generic::KeyValuePair_2<MS::Internal::Xml::Cache::XPathNodeRef,MS::Internal::Xml::Cache::XPathNodeRef>::_ctor(MS::Internal::Xml::Cache::XPathNodeRef key, MS::Internal::Xml::Cache::XPathNodeRef value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<MS::Internal::Xml::Cache::XPathNodeRef,MS::Internal::Xml::Cache::XPathNodeRef>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<MS::Internal::Xml::Cache::XPathNodeRef>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<MS::Internal::Xml::Cache::XPathNodeRef>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value);
}
 MS::Internal::Xml::Cache::XPathNodeRef System::Collections::Generic::KeyValuePair_2<MS::Internal::Xml::Cache::XPathNodeRef,MS::Internal::Xml::Cache::XPathNodeRef>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<MS::Internal::Xml::Cache::XPathNodeRef,MS::Internal::Xml::Cache::XPathNodeRef>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<MS::Internal::Xml::Cache::XPathNodeRef, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 MS::Internal::Xml::Cache::XPathNodeRef System::Collections::Generic::KeyValuePair_2<MS::Internal::Xml::Cache::XPathNodeRef,MS::Internal::Xml::Cache::XPathNodeRef>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<MS::Internal::Xml::Cache::XPathNodeRef,MS::Internal::Xml::Cache::XPathNodeRef>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<MS::Internal::Xml::Cache::XPathNodeRef, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Collections::Generic::KeyValuePair_2<MS::Internal::Xml::Cache::XPathNodeRef,MS::Internal::Xml::Cache::XPathNodeRef>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<MS::Internal::Xml::Cache::XPathNodeRef,MS::Internal::Xml::Cache::XPathNodeRef>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__SingleAnchorDelegatePair", modifiers: "", def_value: Some("{}") }]
constexpr System::Collections::Generic::KeyValuePair_2<TKey,GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__SingleAnchorDelegatePair>::KeyValuePair_2(TKey key, GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__SingleAnchorDelegatePair value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__SingleAnchorDelegatePair>::__set_key(TKey value)  {
::cordl_internals::setInstanceField<TKey, 0x0>(this->__instance, std::forward<TKey>(value));
}
constexpr TKey System::Collections::Generic::KeyValuePair_2<TKey,GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__SingleAnchorDelegatePair>::__get_key() const {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__SingleAnchorDelegatePair>::__set_value(GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__SingleAnchorDelegatePair value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__SingleAnchorDelegatePair, 0x8>(this->__instance, std::forward<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__SingleAnchorDelegatePair>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__SingleAnchorDelegatePair System::Collections::Generic::KeyValuePair_2<TKey,GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__SingleAnchorDelegatePair>::__get_value() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__SingleAnchorDelegatePair, 0x8>(this->__instance);
}
 void System::Collections::Generic::KeyValuePair_2<TKey,GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__SingleAnchorDelegatePair>::_ctor(TKey key, GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__SingleAnchorDelegatePair value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__SingleAnchorDelegatePair>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__SingleAnchorDelegatePair>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value);
}
 TKey System::Collections::Generic::KeyValuePair_2<TKey,GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__SingleAnchorDelegatePair>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__SingleAnchorDelegatePair>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__SingleAnchorDelegatePair System::Collections::Generic::KeyValuePair_2<TKey,GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__SingleAnchorDelegatePair>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__SingleAnchorDelegatePair>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__SingleAnchorDelegatePair, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Collections::Generic::KeyValuePair_2<TKey,GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__SingleAnchorDelegatePair>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__SingleAnchorDelegatePair>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__MultiAnchorDelegatePair", modifiers: "", def_value: Some("{}") }]
constexpr System::Collections::Generic::KeyValuePair_2<TKey,GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__MultiAnchorDelegatePair>::KeyValuePair_2(TKey key, GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__MultiAnchorDelegatePair value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__MultiAnchorDelegatePair>::__set_key(TKey value)  {
::cordl_internals::setInstanceField<TKey, 0x0>(this->__instance, std::forward<TKey>(value));
}
constexpr TKey System::Collections::Generic::KeyValuePair_2<TKey,GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__MultiAnchorDelegatePair>::__get_key() const {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__MultiAnchorDelegatePair>::__set_value(GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__MultiAnchorDelegatePair value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__MultiAnchorDelegatePair, 0x8>(this->__instance, std::forward<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__MultiAnchorDelegatePair>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__MultiAnchorDelegatePair System::Collections::Generic::KeyValuePair_2<TKey,GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__MultiAnchorDelegatePair>::__get_value() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__MultiAnchorDelegatePair, 0x8>(this->__instance);
}
 void System::Collections::Generic::KeyValuePair_2<TKey,GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__MultiAnchorDelegatePair>::_ctor(TKey key, GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__MultiAnchorDelegatePair value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__MultiAnchorDelegatePair>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__MultiAnchorDelegatePair>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value);
}
 TKey System::Collections::Generic::KeyValuePair_2<TKey,GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__MultiAnchorDelegatePair>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__MultiAnchorDelegatePair>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__MultiAnchorDelegatePair System::Collections::Generic::KeyValuePair_2<TKey,GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__MultiAnchorDelegatePair>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__MultiAnchorDelegatePair>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__MultiAnchorDelegatePair, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Collections::Generic::KeyValuePair_2<TKey,GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__MultiAnchorDelegatePair>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__MultiAnchorDelegatePair>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: Some("{}") }]
constexpr System::Collections::Generic::KeyValuePair_2<TKey,TValue>::KeyValuePair_2(TKey key, TValue value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,TValue>::__set_key(TKey value)  {
::cordl_internals::setInstanceField<TKey, 0x0>(this->__instance, std::forward<TKey>(value));
}
constexpr TKey System::Collections::Generic::KeyValuePair_2<TKey,TValue>::__get_key() const {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,TValue>::__set_value(TValue value)  {
::cordl_internals::setInstanceField<TValue, 0x8>(this->__instance, std::forward<TValue>(value));
}
constexpr TValue System::Collections::Generic::KeyValuePair_2<TKey,TValue>::__get_value() const {
return ::cordl_internals::getInstanceField<TValue, 0x8>(this->__instance);
}
 void System::Collections::Generic::KeyValuePair_2<TKey,TValue>::_ctor(TKey key, TValue value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value);
}
 TKey System::Collections::Generic::KeyValuePair_2<TKey,TValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 TValue System::Collections::Generic::KeyValuePair_2<TKey,TValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Collections::Generic::KeyValuePair_2<TKey,TValue>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord", modifiers: "", def_value: Some("{}") }]
constexpr System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>::KeyValuePair_2(TKey key, UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>::__set_key(TKey value)  {
::cordl_internals::setInstanceField<TKey, 0x0>(this->__instance, std::forward<TKey>(value));
}
constexpr TKey System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>::__get_key() const {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>::__set_value(UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord value)  {
::cordl_internals::setInstanceField<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord, 0x8>(this->__instance, std::forward<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>(value));
}
constexpr UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>::__get_value() const {
return ::cordl_internals::getInstanceField<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord, 0x8>(this->__instance);
}
 void System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>::_ctor(TKey key, UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value);
}
 TKey System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: Some("{}") }]
constexpr System::Collections::Generic::KeyValuePair_2<TKey,TValue>::KeyValuePair_2(TKey key, TValue value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,TValue>::__set_key(TKey value)  {
::cordl_internals::setInstanceField<TKey, 0x0>(this->__instance, std::forward<TKey>(value));
}
constexpr TKey System::Collections::Generic::KeyValuePair_2<TKey,TValue>::__get_key() const {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,TValue>::__set_value(TValue value)  {
::cordl_internals::setInstanceField<TValue, 0x8>(this->__instance, std::forward<TValue>(value));
}
constexpr TValue System::Collections::Generic::KeyValuePair_2<TKey,TValue>::__get_value() const {
return ::cordl_internals::getInstanceField<TValue, 0x8>(this->__instance);
}
 void System::Collections::Generic::KeyValuePair_2<TKey,TValue>::_ctor(TKey key, TValue value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value);
}
 TKey System::Collections::Generic::KeyValuePair_2<TKey,TValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 TValue System::Collections::Generic::KeyValuePair_2<TKey,TValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Collections::Generic::KeyValuePair_2<TKey,TValue>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("csnull") }, CppParam { name: "value", ty: "UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle", modifiers: "", def_value: Some("{}") }]
constexpr System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::KeyValuePair_2(TKey key, UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::__set_key(TKey value)  {
::cordl_internals::setInstanceField<TKey, 0x0>(this->__instance, std::forward<TKey>(value));
}
constexpr TKey System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::__get_key() const {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::__set_value(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle value)  {
::cordl_internals::setInstanceField<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, 0x8>(this->__instance, std::forward<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(value));
}
constexpr UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::__get_value() const {
return ::cordl_internals::getInstanceField<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, 0x8>(this->__instance);
}
 void System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::_ctor(TKey key, UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value);
}
 TKey System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
//  Writing Method size for method: System::Collections::Generic::KeyValuePair_2<GlobalNamespace::OVRSpace,GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryResult>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Generic::KeyValuePair_2<GlobalNamespace::OVRSpace,GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryResult>::*)(GlobalNamespace::OVRSpace, GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryResult)>(&System::Collections::Generic::KeyValuePair_2<GlobalNamespace::OVRSpace,GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryResult>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<GlobalNamespace::OVRSpace,GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryResult>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::OVRSpace>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryResult>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Generic::KeyValuePair_2<GlobalNamespace::OVRSpace,GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryResult>.get_Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRSpace (System::Collections::Generic::KeyValuePair_2<GlobalNamespace::OVRSpace,GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryResult>::*)()>(&System::Collections::Generic::KeyValuePair_2<GlobalNamespace::OVRSpace,GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryResult>::get_Key)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<GlobalNamespace::OVRSpace,GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryResult>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Generic::KeyValuePair_2<GlobalNamespace::OVRSpace,GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryResult>.get_Value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryResult (System::Collections::Generic::KeyValuePair_2<GlobalNamespace::OVRSpace,GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryResult>::*)()>(&System::Collections::Generic::KeyValuePair_2<GlobalNamespace::OVRSpace,GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryResult>::get_Value)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<GlobalNamespace::OVRSpace,GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryResult>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Generic::KeyValuePair_2<GlobalNamespace::OVRSpace,GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryResult>.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Collections::Generic::KeyValuePair_2<GlobalNamespace::OVRSpace,GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryResult>::*)()>(&System::Collections::Generic::KeyValuePair_2<GlobalNamespace::OVRSpace,GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryResult>::ToString)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Collections::Generic::KeyValuePair_2<GlobalNamespace::OVRSpace,GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryResult>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "key", ty: "GlobalNamespace::OVRSpace", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryResult", modifiers: "", def_value: Some("{}") }]
constexpr System::Collections::Generic::KeyValuePair_2<GlobalNamespace::OVRSpace,GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryResult>::KeyValuePair_2(GlobalNamespace::OVRSpace key, GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryResult value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Collections::Generic::KeyValuePair_2<GlobalNamespace::OVRSpace,GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryResult>::__set_key(GlobalNamespace::OVRSpace value)  {
::cordl_internals::setInstanceField<GlobalNamespace::OVRSpace, 0x0>(this->__instance, std::forward<GlobalNamespace::OVRSpace>(value));
}
constexpr GlobalNamespace::OVRSpace System::Collections::Generic::KeyValuePair_2<GlobalNamespace::OVRSpace,GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryResult>::__get_key() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::OVRSpace, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<GlobalNamespace::OVRSpace,GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryResult>::__set_value(GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryResult value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryResult, 0x8>(this->__instance, std::forward<GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryResult>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryResult System::Collections::Generic::KeyValuePair_2<GlobalNamespace::OVRSpace,GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryResult>::__get_value() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryResult, 0x8>(this->__instance);
}
 void System::Collections::Generic::KeyValuePair_2<GlobalNamespace::OVRSpace,GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryResult>::_ctor(GlobalNamespace::OVRSpace key, GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryResult value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<GlobalNamespace::OVRSpace,GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryResult>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::OVRSpace>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value);
}
 GlobalNamespace::OVRSpace System::Collections::Generic::KeyValuePair_2<GlobalNamespace::OVRSpace,GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryResult>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<GlobalNamespace::OVRSpace,GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryResult>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::OVRSpace, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryResult System::Collections::Generic::KeyValuePair_2<GlobalNamespace::OVRSpace,GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryResult>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<GlobalNamespace::OVRSpace,GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryResult>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryResult, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Collections::Generic::KeyValuePair_2<GlobalNamespace::OVRSpace,GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryResult>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<GlobalNamespace::OVRSpace,GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryResult>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "GlobalNamespace::OVRSpace", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: Some("{}") }]
constexpr System::Collections::Generic::KeyValuePair_2<GlobalNamespace::OVRSpace,TValue>::KeyValuePair_2(GlobalNamespace::OVRSpace key, TValue value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Collections::Generic::KeyValuePair_2<GlobalNamespace::OVRSpace,TValue>::__set_key(GlobalNamespace::OVRSpace value)  {
::cordl_internals::setInstanceField<GlobalNamespace::OVRSpace, 0x0>(this->__instance, std::forward<GlobalNamespace::OVRSpace>(value));
}
constexpr GlobalNamespace::OVRSpace System::Collections::Generic::KeyValuePair_2<GlobalNamespace::OVRSpace,TValue>::__get_key() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::OVRSpace, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<GlobalNamespace::OVRSpace,TValue>::__set_value(TValue value)  {
::cordl_internals::setInstanceField<TValue, 0x8>(this->__instance, std::forward<TValue>(value));
}
constexpr TValue System::Collections::Generic::KeyValuePair_2<GlobalNamespace::OVRSpace,TValue>::__get_value() const {
return ::cordl_internals::getInstanceField<TValue, 0x8>(this->__instance);
}
 void System::Collections::Generic::KeyValuePair_2<GlobalNamespace::OVRSpace,TValue>::_ctor(GlobalNamespace::OVRSpace key, TValue value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<GlobalNamespace::OVRSpace,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::OVRSpace>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value);
}
 GlobalNamespace::OVRSpace System::Collections::Generic::KeyValuePair_2<GlobalNamespace::OVRSpace,TValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<GlobalNamespace::OVRSpace,TValue>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::OVRSpace, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 TValue System::Collections::Generic::KeyValuePair_2<GlobalNamespace::OVRSpace,TValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<GlobalNamespace::OVRSpace,TValue>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Collections::Generic::KeyValuePair_2<GlobalNamespace::OVRSpace,TValue>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<GlobalNamespace::OVRSpace,TValue>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
//  Writing Method size for method: System::Collections::Generic::KeyValuePair_2<UnityEngine::InputSystem::Utilities::InternedString,GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__PrecompiledLayout>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Generic::KeyValuePair_2<UnityEngine::InputSystem::Utilities::InternedString,GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__PrecompiledLayout>::*)(UnityEngine::InputSystem::Utilities::InternedString, GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__PrecompiledLayout)>(&System::Collections::Generic::KeyValuePair_2<UnityEngine::InputSystem::Utilities::InternedString,GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__PrecompiledLayout>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<UnityEngine::InputSystem::Utilities::InternedString,GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__PrecompiledLayout>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__PrecompiledLayout>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Generic::KeyValuePair_2<UnityEngine::InputSystem::Utilities::InternedString,GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__PrecompiledLayout>.get_Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Utilities::InternedString (System::Collections::Generic::KeyValuePair_2<UnityEngine::InputSystem::Utilities::InternedString,GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__PrecompiledLayout>::*)()>(&System::Collections::Generic::KeyValuePair_2<UnityEngine::InputSystem::Utilities::InternedString,GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__PrecompiledLayout>::get_Key)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<UnityEngine::InputSystem::Utilities::InternedString,GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__PrecompiledLayout>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Generic::KeyValuePair_2<UnityEngine::InputSystem::Utilities::InternedString,GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__PrecompiledLayout>.get_Value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__PrecompiledLayout (System::Collections::Generic::KeyValuePair_2<UnityEngine::InputSystem::Utilities::InternedString,GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__PrecompiledLayout>::*)()>(&System::Collections::Generic::KeyValuePair_2<UnityEngine::InputSystem::Utilities::InternedString,GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__PrecompiledLayout>::get_Value)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<UnityEngine::InputSystem::Utilities::InternedString,GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__PrecompiledLayout>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Generic::KeyValuePair_2<UnityEngine::InputSystem::Utilities::InternedString,GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__PrecompiledLayout>.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Collections::Generic::KeyValuePair_2<UnityEngine::InputSystem::Utilities::InternedString,GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__PrecompiledLayout>::*)()>(&System::Collections::Generic::KeyValuePair_2<UnityEngine::InputSystem::Utilities::InternedString,GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__PrecompiledLayout>::ToString)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Collections::Generic::KeyValuePair_2<UnityEngine::InputSystem::Utilities::InternedString,GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__PrecompiledLayout>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "key", ty: "UnityEngine::InputSystem::Utilities::InternedString", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__PrecompiledLayout", modifiers: "", def_value: Some("{}") }]
constexpr System::Collections::Generic::KeyValuePair_2<UnityEngine::InputSystem::Utilities::InternedString,GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__PrecompiledLayout>::KeyValuePair_2(UnityEngine::InputSystem::Utilities::InternedString key, GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__PrecompiledLayout value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Collections::Generic::KeyValuePair_2<UnityEngine::InputSystem::Utilities::InternedString,GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__PrecompiledLayout>::__set_key(UnityEngine::InputSystem::Utilities::InternedString value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::Utilities::InternedString, 0x0>(this->__instance, std::forward<UnityEngine::InputSystem::Utilities::InternedString>(value));
}
constexpr UnityEngine::InputSystem::Utilities::InternedString System::Collections::Generic::KeyValuePair_2<UnityEngine::InputSystem::Utilities::InternedString,GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__PrecompiledLayout>::__get_key() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::Utilities::InternedString, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<UnityEngine::InputSystem::Utilities::InternedString,GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__PrecompiledLayout>::__set_value(GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__PrecompiledLayout value)  {
::cordl_internals::setInstanceField<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__PrecompiledLayout, 0x8>(this->__instance, std::forward<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__PrecompiledLayout>(value));
}
constexpr GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__PrecompiledLayout System::Collections::Generic::KeyValuePair_2<UnityEngine::InputSystem::Utilities::InternedString,GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__PrecompiledLayout>::__get_value() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__PrecompiledLayout, 0x8>(this->__instance);
}
 void System::Collections::Generic::KeyValuePair_2<UnityEngine::InputSystem::Utilities::InternedString,GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__PrecompiledLayout>::_ctor(UnityEngine::InputSystem::Utilities::InternedString key, GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__PrecompiledLayout value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<UnityEngine::InputSystem::Utilities::InternedString,GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__PrecompiledLayout>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__PrecompiledLayout>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value);
}
 UnityEngine::InputSystem::Utilities::InternedString System::Collections::Generic::KeyValuePair_2<UnityEngine::InputSystem::Utilities::InternedString,GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__PrecompiledLayout>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<UnityEngine::InputSystem::Utilities::InternedString,GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__PrecompiledLayout>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Utilities::InternedString, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__PrecompiledLayout System::Collections::Generic::KeyValuePair_2<UnityEngine::InputSystem::Utilities::InternedString,GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__PrecompiledLayout>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<UnityEngine::InputSystem::Utilities::InternedString,GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__PrecompiledLayout>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__PrecompiledLayout, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Collections::Generic::KeyValuePair_2<UnityEngine::InputSystem::Utilities::InternedString,GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__PrecompiledLayout>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<UnityEngine::InputSystem::Utilities::InternedString,GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__PrecompiledLayout>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
//  Writing Method size for method: System::Collections::Generic::KeyValuePair_2<UnityEngine::InputSystem::Utilities::InternedString,UnityEngine::InputSystem::Utilities::InternedString>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Generic::KeyValuePair_2<UnityEngine::InputSystem::Utilities::InternedString,UnityEngine::InputSystem::Utilities::InternedString>::*)(UnityEngine::InputSystem::Utilities::InternedString, UnityEngine::InputSystem::Utilities::InternedString)>(&System::Collections::Generic::KeyValuePair_2<UnityEngine::InputSystem::Utilities::InternedString,UnityEngine::InputSystem::Utilities::InternedString>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<UnityEngine::InputSystem::Utilities::InternedString,UnityEngine::InputSystem::Utilities::InternedString>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Generic::KeyValuePair_2<UnityEngine::InputSystem::Utilities::InternedString,UnityEngine::InputSystem::Utilities::InternedString>.get_Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Utilities::InternedString (System::Collections::Generic::KeyValuePair_2<UnityEngine::InputSystem::Utilities::InternedString,UnityEngine::InputSystem::Utilities::InternedString>::*)()>(&System::Collections::Generic::KeyValuePair_2<UnityEngine::InputSystem::Utilities::InternedString,UnityEngine::InputSystem::Utilities::InternedString>::get_Key)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<UnityEngine::InputSystem::Utilities::InternedString,UnityEngine::InputSystem::Utilities::InternedString>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Generic::KeyValuePair_2<UnityEngine::InputSystem::Utilities::InternedString,UnityEngine::InputSystem::Utilities::InternedString>.get_Value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Utilities::InternedString (System::Collections::Generic::KeyValuePair_2<UnityEngine::InputSystem::Utilities::InternedString,UnityEngine::InputSystem::Utilities::InternedString>::*)()>(&System::Collections::Generic::KeyValuePair_2<UnityEngine::InputSystem::Utilities::InternedString,UnityEngine::InputSystem::Utilities::InternedString>::get_Value)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<UnityEngine::InputSystem::Utilities::InternedString,UnityEngine::InputSystem::Utilities::InternedString>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Generic::KeyValuePair_2<UnityEngine::InputSystem::Utilities::InternedString,UnityEngine::InputSystem::Utilities::InternedString>.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Collections::Generic::KeyValuePair_2<UnityEngine::InputSystem::Utilities::InternedString,UnityEngine::InputSystem::Utilities::InternedString>::*)()>(&System::Collections::Generic::KeyValuePair_2<UnityEngine::InputSystem::Utilities::InternedString,UnityEngine::InputSystem::Utilities::InternedString>::ToString)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Collections::Generic::KeyValuePair_2<UnityEngine::InputSystem::Utilities::InternedString,UnityEngine::InputSystem::Utilities::InternedString>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "key", ty: "UnityEngine::InputSystem::Utilities::InternedString", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "UnityEngine::InputSystem::Utilities::InternedString", modifiers: "", def_value: Some("{}") }]
constexpr System::Collections::Generic::KeyValuePair_2<UnityEngine::InputSystem::Utilities::InternedString,UnityEngine::InputSystem::Utilities::InternedString>::KeyValuePair_2(UnityEngine::InputSystem::Utilities::InternedString key, UnityEngine::InputSystem::Utilities::InternedString value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Collections::Generic::KeyValuePair_2<UnityEngine::InputSystem::Utilities::InternedString,UnityEngine::InputSystem::Utilities::InternedString>::__set_key(UnityEngine::InputSystem::Utilities::InternedString value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::Utilities::InternedString, 0x0>(this->__instance, std::forward<UnityEngine::InputSystem::Utilities::InternedString>(value));
}
constexpr UnityEngine::InputSystem::Utilities::InternedString System::Collections::Generic::KeyValuePair_2<UnityEngine::InputSystem::Utilities::InternedString,UnityEngine::InputSystem::Utilities::InternedString>::__get_key() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::Utilities::InternedString, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<UnityEngine::InputSystem::Utilities::InternedString,UnityEngine::InputSystem::Utilities::InternedString>::__set_value(UnityEngine::InputSystem::Utilities::InternedString value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::Utilities::InternedString, 0x8>(this->__instance, std::forward<UnityEngine::InputSystem::Utilities::InternedString>(value));
}
constexpr UnityEngine::InputSystem::Utilities::InternedString System::Collections::Generic::KeyValuePair_2<UnityEngine::InputSystem::Utilities::InternedString,UnityEngine::InputSystem::Utilities::InternedString>::__get_value() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::Utilities::InternedString, 0x8>(this->__instance);
}
 void System::Collections::Generic::KeyValuePair_2<UnityEngine::InputSystem::Utilities::InternedString,UnityEngine::InputSystem::Utilities::InternedString>::_ctor(UnityEngine::InputSystem::Utilities::InternedString key, UnityEngine::InputSystem::Utilities::InternedString value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<UnityEngine::InputSystem::Utilities::InternedString,UnityEngine::InputSystem::Utilities::InternedString>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value);
}
 UnityEngine::InputSystem::Utilities::InternedString System::Collections::Generic::KeyValuePair_2<UnityEngine::InputSystem::Utilities::InternedString,UnityEngine::InputSystem::Utilities::InternedString>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<UnityEngine::InputSystem::Utilities::InternedString,UnityEngine::InputSystem::Utilities::InternedString>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Utilities::InternedString, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 UnityEngine::InputSystem::Utilities::InternedString System::Collections::Generic::KeyValuePair_2<UnityEngine::InputSystem::Utilities::InternedString,UnityEngine::InputSystem::Utilities::InternedString>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<UnityEngine::InputSystem::Utilities::InternedString,UnityEngine::InputSystem::Utilities::InternedString>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Utilities::InternedString, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Collections::Generic::KeyValuePair_2<UnityEngine::InputSystem::Utilities::InternedString,UnityEngine::InputSystem::Utilities::InternedString>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<UnityEngine::InputSystem::Utilities::InternedString,UnityEngine::InputSystem::Utilities::InternedString>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "UnityEngine::UIElements::ComputedStyle", modifiers: "", def_value: Some("{}") }]
constexpr System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::UIElements::ComputedStyle>::KeyValuePair_2(TKey key, UnityEngine::UIElements::ComputedStyle value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::UIElements::ComputedStyle>::__set_key(TKey value)  {
::cordl_internals::setInstanceField<TKey, 0x0>(this->__instance, std::forward<TKey>(value));
}
constexpr TKey System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::UIElements::ComputedStyle>::__get_key() const {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::UIElements::ComputedStyle>::__set_value(UnityEngine::UIElements::ComputedStyle value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::ComputedStyle, 0x8>(this->__instance, std::forward<UnityEngine::UIElements::ComputedStyle>(value));
}
constexpr UnityEngine::UIElements::ComputedStyle System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::UIElements::ComputedStyle>::__get_value() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::ComputedStyle, 0x8>(this->__instance);
}
 void System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::UIElements::ComputedStyle>::_ctor(TKey key, UnityEngine::UIElements::ComputedStyle value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::UIElements::ComputedStyle>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::ComputedStyle>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value);
}
 TKey System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::UIElements::ComputedStyle>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::UIElements::ComputedStyle>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 UnityEngine::UIElements::ComputedStyle System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::UIElements::ComputedStyle>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::UIElements::ComputedStyle>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::ComputedStyle, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::UIElements::ComputedStyle>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::UIElements::ComputedStyle>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "UnityEngine::TextCore::Text::UnityEngine__TextCore__Text__TextResourceManager__FontAssetRef", modifiers: "", def_value: Some("{}") }]
constexpr System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::TextCore::Text::UnityEngine__TextCore__Text__TextResourceManager__FontAssetRef>::KeyValuePair_2(TKey key, UnityEngine::TextCore::Text::UnityEngine__TextCore__Text__TextResourceManager__FontAssetRef value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::TextCore::Text::UnityEngine__TextCore__Text__TextResourceManager__FontAssetRef>::__set_key(TKey value)  {
::cordl_internals::setInstanceField<TKey, 0x0>(this->__instance, std::forward<TKey>(value));
}
constexpr TKey System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::TextCore::Text::UnityEngine__TextCore__Text__TextResourceManager__FontAssetRef>::__get_key() const {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::TextCore::Text::UnityEngine__TextCore__Text__TextResourceManager__FontAssetRef>::__set_value(UnityEngine::TextCore::Text::UnityEngine__TextCore__Text__TextResourceManager__FontAssetRef value)  {
::cordl_internals::setInstanceField<UnityEngine::TextCore::Text::UnityEngine__TextCore__Text__TextResourceManager__FontAssetRef, 0x8>(this->__instance, std::forward<UnityEngine::TextCore::Text::UnityEngine__TextCore__Text__TextResourceManager__FontAssetRef>(value));
}
constexpr UnityEngine::TextCore::Text::UnityEngine__TextCore__Text__TextResourceManager__FontAssetRef System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::TextCore::Text::UnityEngine__TextCore__Text__TextResourceManager__FontAssetRef>::__get_value() const {
return ::cordl_internals::getInstanceField<UnityEngine::TextCore::Text::UnityEngine__TextCore__Text__TextResourceManager__FontAssetRef, 0x8>(this->__instance);
}
 void System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::TextCore::Text::UnityEngine__TextCore__Text__TextResourceManager__FontAssetRef>::_ctor(TKey key, UnityEngine::TextCore::Text::UnityEngine__TextCore__Text__TextResourceManager__FontAssetRef value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::TextCore::Text::UnityEngine__TextCore__Text__TextResourceManager__FontAssetRef>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::TextCore::Text::UnityEngine__TextCore__Text__TextResourceManager__FontAssetRef>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value);
}
 TKey System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::TextCore::Text::UnityEngine__TextCore__Text__TextResourceManager__FontAssetRef>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::TextCore::Text::UnityEngine__TextCore__Text__TextResourceManager__FontAssetRef>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 UnityEngine::TextCore::Text::UnityEngine__TextCore__Text__TextResourceManager__FontAssetRef System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::TextCore::Text::UnityEngine__TextCore__Text__TextResourceManager__FontAssetRef>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::TextCore::Text::UnityEngine__TextCore__Text__TextResourceManager__FontAssetRef>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::TextCore::Text::UnityEngine__TextCore__Text__TextResourceManager__FontAssetRef, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::TextCore::Text::UnityEngine__TextCore__Text__TextResourceManager__FontAssetRef>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::TextCore::Text::UnityEngine__TextCore__Text__TextResourceManager__FontAssetRef>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: Some("{}") }]
constexpr System::Collections::Generic::KeyValuePair_2<TKey,TValue>::KeyValuePair_2(TKey key, TValue value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,TValue>::__set_key(TKey value)  {
::cordl_internals::setInstanceField<TKey, 0x0>(this->__instance, std::forward<TKey>(value));
}
constexpr TKey System::Collections::Generic::KeyValuePair_2<TKey,TValue>::__get_key() const {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,TValue>::__set_value(TValue value)  {
::cordl_internals::setInstanceField<TValue, 0x8>(this->__instance, std::forward<TValue>(value));
}
constexpr TValue System::Collections::Generic::KeyValuePair_2<TKey,TValue>::__get_value() const {
return ::cordl_internals::getInstanceField<TValue, 0x8>(this->__instance);
}
 void System::Collections::Generic::KeyValuePair_2<TKey,TValue>::_ctor(TKey key, TValue value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value);
}
 TKey System::Collections::Generic::KeyValuePair_2<TKey,TValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 TValue System::Collections::Generic::KeyValuePair_2<TKey,TValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Collections::Generic::KeyValuePair_2<TKey,TValue>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "IgnoranceCore::IgnoranceClientStats", modifiers: "", def_value: Some("{}") }]
constexpr System::Collections::Generic::KeyValuePair_2<TKey,IgnoranceCore::IgnoranceClientStats>::KeyValuePair_2(TKey key, IgnoranceCore::IgnoranceClientStats value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,IgnoranceCore::IgnoranceClientStats>::__set_key(TKey value)  {
::cordl_internals::setInstanceField<TKey, 0x0>(this->__instance, std::forward<TKey>(value));
}
constexpr TKey System::Collections::Generic::KeyValuePair_2<TKey,IgnoranceCore::IgnoranceClientStats>::__get_key() const {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,IgnoranceCore::IgnoranceClientStats>::__set_value(IgnoranceCore::IgnoranceClientStats value)  {
::cordl_internals::setInstanceField<IgnoranceCore::IgnoranceClientStats, 0x8>(this->__instance, std::forward<IgnoranceCore::IgnoranceClientStats>(value));
}
constexpr IgnoranceCore::IgnoranceClientStats System::Collections::Generic::KeyValuePair_2<TKey,IgnoranceCore::IgnoranceClientStats>::__get_value() const {
return ::cordl_internals::getInstanceField<IgnoranceCore::IgnoranceClientStats, 0x8>(this->__instance);
}
 void System::Collections::Generic::KeyValuePair_2<TKey,IgnoranceCore::IgnoranceClientStats>::_ctor(TKey key, IgnoranceCore::IgnoranceClientStats value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,IgnoranceCore::IgnoranceClientStats>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<IgnoranceCore::IgnoranceClientStats>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value);
}
 TKey System::Collections::Generic::KeyValuePair_2<TKey,IgnoranceCore::IgnoranceClientStats>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,IgnoranceCore::IgnoranceClientStats>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 IgnoranceCore::IgnoranceClientStats System::Collections::Generic::KeyValuePair_2<TKey,IgnoranceCore::IgnoranceClientStats>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,IgnoranceCore::IgnoranceClientStats>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<IgnoranceCore::IgnoranceClientStats, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Collections::Generic::KeyValuePair_2<TKey,IgnoranceCore::IgnoranceClientStats>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,IgnoranceCore::IgnoranceClientStats>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent", modifiers: "", def_value: Some("{}") }]
constexpr System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::KeyValuePair_2(TKey key, UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::__set_key(TKey value)  {
::cordl_internals::setInstanceField<TKey, 0x0>(this->__instance, std::forward<TKey>(value));
}
constexpr TKey System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::__get_key() const {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::__set_value(UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent value)  {
::cordl_internals::setInstanceField<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent, 0x8>(this->__instance, std::forward<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>(value));
}
constexpr UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::__get_value() const {
return ::cordl_internals::getInstanceField<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent, 0x8>(this->__instance);
}
 void System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::_ctor(TKey key, UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value);
}
 TKey System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "char16_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Collections::Generic::KeyValuePair_2<TKey,char16_t>::KeyValuePair_2(TKey key, char16_t value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,char16_t>::__set_key(TKey value)  {
::cordl_internals::setInstanceField<TKey, 0x0>(this->__instance, std::forward<TKey>(value));
}
constexpr TKey System::Collections::Generic::KeyValuePair_2<TKey,char16_t>::__get_key() const {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,char16_t>::__set_value(char16_t value)  {
::cordl_internals::setInstanceField<char16_t, 0x8>(this->__instance, std::forward<char16_t>(value));
}
constexpr char16_t System::Collections::Generic::KeyValuePair_2<TKey,char16_t>::__get_value() const {
return ::cordl_internals::getInstanceField<char16_t, 0x8>(this->__instance);
}
 void System::Collections::Generic::KeyValuePair_2<TKey,char16_t>::_ctor(TKey key, char16_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,char16_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value);
}
 TKey System::Collections::Generic::KeyValuePair_2<TKey,char16_t>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,char16_t>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 char16_t System::Collections::Generic::KeyValuePair_2<TKey,char16_t>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,char16_t>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<char16_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Collections::Generic::KeyValuePair_2<TKey,char16_t>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,char16_t>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr System::Collections::Generic::KeyValuePair_2<TKey,bool>::KeyValuePair_2(TKey key, bool value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,bool>::__set_key(TKey value)  {
::cordl_internals::setInstanceField<TKey, 0x0>(this->__instance, std::forward<TKey>(value));
}
constexpr TKey System::Collections::Generic::KeyValuePair_2<TKey,bool>::__get_key() const {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,bool>::__set_value(bool value)  {
::cordl_internals::setInstanceField<bool, 0x8>(this->__instance, std::forward<bool>(value));
}
constexpr bool System::Collections::Generic::KeyValuePair_2<TKey,bool>::__get_value() const {
return ::cordl_internals::getInstanceField<bool, 0x8>(this->__instance);
}
 void System::Collections::Generic::KeyValuePair_2<TKey,bool>::_ctor(TKey key, bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,bool>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value);
}
 TKey System::Collections::Generic::KeyValuePair_2<TKey,bool>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,bool>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool System::Collections::Generic::KeyValuePair_2<TKey,bool>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,bool>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Collections::Generic::KeyValuePair_2<TKey,bool>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,bool>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "System::Guid", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: Some("{}") }]
constexpr System::Collections::Generic::KeyValuePair_2<System::Guid,TValue>::KeyValuePair_2(System::Guid key, TValue value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Collections::Generic::KeyValuePair_2<System::Guid,TValue>::__set_key(System::Guid value)  {
::cordl_internals::setInstanceField<System::Guid, 0x0>(this->__instance, std::forward<System::Guid>(value));
}
constexpr System::Guid System::Collections::Generic::KeyValuePair_2<System::Guid,TValue>::__get_key() const {
return ::cordl_internals::getInstanceField<System::Guid, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<System::Guid,TValue>::__set_value(TValue value)  {
::cordl_internals::setInstanceField<TValue, 0x8>(this->__instance, std::forward<TValue>(value));
}
constexpr TValue System::Collections::Generic::KeyValuePair_2<System::Guid,TValue>::__get_value() const {
return ::cordl_internals::getInstanceField<TValue, 0x8>(this->__instance);
}
 void System::Collections::Generic::KeyValuePair_2<System::Guid,TValue>::_ctor(System::Guid key, TValue value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<System::Guid,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Guid>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value);
}
 System::Guid System::Collections::Generic::KeyValuePair_2<System::Guid,TValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<System::Guid,TValue>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Guid, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 TValue System::Collections::Generic::KeyValuePair_2<System::Guid,TValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<System::Guid,TValue>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Collections::Generic::KeyValuePair_2<System::Guid,TValue>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<System::Guid,TValue>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
//  Writing Method size for method: System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::EdgeLookup,float_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::EdgeLookup,float_t>::*)(UnityEngine::ProBuilder::EdgeLookup, float_t)>(&System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::EdgeLookup,float_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::EdgeLookup,float_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::EdgeLookup>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::EdgeLookup,float_t>.get_Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::EdgeLookup (System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::EdgeLookup,float_t>::*)()>(&System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::EdgeLookup,float_t>::get_Key)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::EdgeLookup,float_t>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::EdgeLookup,float_t>.get_Value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::EdgeLookup,float_t>::*)()>(&System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::EdgeLookup,float_t>::get_Value)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::EdgeLookup,float_t>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::EdgeLookup,float_t>.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::EdgeLookup,float_t>::*)()>(&System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::EdgeLookup,float_t>::ToString)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::EdgeLookup,float_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "key", ty: "UnityEngine::ProBuilder::EdgeLookup", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::EdgeLookup,float_t>::KeyValuePair_2(UnityEngine::ProBuilder::EdgeLookup key, float_t value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::EdgeLookup,float_t>::__set_key(UnityEngine::ProBuilder::EdgeLookup value)  {
::cordl_internals::setInstanceField<UnityEngine::ProBuilder::EdgeLookup, 0x0>(this->__instance, std::forward<UnityEngine::ProBuilder::EdgeLookup>(value));
}
constexpr UnityEngine::ProBuilder::EdgeLookup System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::EdgeLookup,float_t>::__get_key() const {
return ::cordl_internals::getInstanceField<UnityEngine::ProBuilder::EdgeLookup, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::EdgeLookup,float_t>::__set_value(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x8>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::EdgeLookup,float_t>::__get_value() const {
return ::cordl_internals::getInstanceField<float_t, 0x8>(this->__instance);
}
 void System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::EdgeLookup,float_t>::_ctor(UnityEngine::ProBuilder::EdgeLookup key, float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::EdgeLookup,float_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::EdgeLookup>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value);
}
 UnityEngine::ProBuilder::EdgeLookup System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::EdgeLookup,float_t>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::EdgeLookup,float_t>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ProBuilder::EdgeLookup, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 float_t System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::EdgeLookup,float_t>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::EdgeLookup,float_t>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::EdgeLookup,float_t>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::EdgeLookup,float_t>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Collections::Generic::KeyValuePair_2<TKey,float_t>::KeyValuePair_2(TKey key, float_t value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,float_t>::__set_key(TKey value)  {
::cordl_internals::setInstanceField<TKey, 0x0>(this->__instance, std::forward<TKey>(value));
}
constexpr TKey System::Collections::Generic::KeyValuePair_2<TKey,float_t>::__get_key() const {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,float_t>::__set_value(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x8>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t System::Collections::Generic::KeyValuePair_2<TKey,float_t>::__get_value() const {
return ::cordl_internals::getInstanceField<float_t, 0x8>(this->__instance);
}
 void System::Collections::Generic::KeyValuePair_2<TKey,float_t>::_ctor(TKey key, float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,float_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value);
}
 TKey System::Collections::Generic::KeyValuePair_2<TKey,float_t>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,float_t>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 float_t System::Collections::Generic::KeyValuePair_2<TKey,float_t>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,float_t>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Collections::Generic::KeyValuePair_2<TKey,float_t>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,float_t>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: Some("{}") }]
constexpr System::Collections::Generic::KeyValuePair_2<TKey,TValue>::KeyValuePair_2(TKey key, TValue value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,TValue>::__set_key(TKey value)  {
::cordl_internals::setInstanceField<TKey, 0x0>(this->__instance, std::forward<TKey>(value));
}
constexpr TKey System::Collections::Generic::KeyValuePair_2<TKey,TValue>::__get_key() const {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,TValue>::__set_value(TValue value)  {
::cordl_internals::setInstanceField<TValue, 0x8>(this->__instance, std::forward<TValue>(value));
}
constexpr TValue System::Collections::Generic::KeyValuePair_2<TKey,TValue>::__get_value() const {
return ::cordl_internals::getInstanceField<TValue, 0x8>(this->__instance);
}
 void System::Collections::Generic::KeyValuePair_2<TKey,TValue>::_ctor(TKey key, TValue value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value);
}
 TKey System::Collections::Generic::KeyValuePair_2<TKey,TValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 TValue System::Collections::Generic::KeyValuePair_2<TKey,TValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Collections::Generic::KeyValuePair_2<TKey,TValue>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("csnull") }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: Some("csnull") }]
constexpr System::Collections::Generic::KeyValuePair_2<TKey,TValue>::KeyValuePair_2(TKey key, TValue value) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->value = value;
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,TValue>::__set_key(TKey value)  {
::cordl_internals::setInstanceField<TKey, 0x0>(this->__instance, std::forward<TKey>(value));
}
constexpr TKey System::Collections::Generic::KeyValuePair_2<TKey,TValue>::__get_key() const {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::KeyValuePair_2<TKey,TValue>::__set_value(TValue value)  {
::cordl_internals::setInstanceField<TValue, 0x8>(this->__instance, std::forward<TValue>(value));
}
constexpr TValue System::Collections::Generic::KeyValuePair_2<TKey,TValue>::__get_value() const {
return ::cordl_internals::getInstanceField<TValue, 0x8>(this->__instance);
}
 void System::Collections::Generic::KeyValuePair_2<TKey,TValue>::_ctor(TKey key, TValue value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key, value);
}
 TKey System::Collections::Generic::KeyValuePair_2<TKey,TValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 TValue System::Collections::Generic::KeyValuePair_2<TKey,TValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Collections::Generic::KeyValuePair_2<TKey,TValue>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
