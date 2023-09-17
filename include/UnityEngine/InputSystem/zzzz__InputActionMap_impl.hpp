#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "UnityEngine/InputSystem/zzzz__InputActionMap_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionState_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlScheme_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionRebindingExtensions_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionAsset_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "UnityEngine/InputSystem/zzzz__IInputActionCollection_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
#include "UnityEngine/InputSystem/zzzz__IInputActionCollection2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ReadOnlyArray_1_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBinding_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__CallbackArray_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__Flags::____UnityEngine__InputSystem__InputActionMap__Flags(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__Flags::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__Flags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__Flags  ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__Flags::NeedToResolveBindings{1};
constexpr ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__Flags  ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__Flags::BindingResolutionNeedsFullReResolve{2};
constexpr ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__Flags  ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__Flags::ControlsForEachActionInitialized{4};
constexpr ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__Flags  ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__Flags::BindingsForEachActionInitialized{8};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__DeviceArray.IndexOf
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__DeviceArray::*)(::UnityEngine::InputSystem::InputDevice)>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__DeviceArray::IndexOf)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x28ac1c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__DeviceArray>::get(),
                            "IndexOf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__DeviceArray.Remove
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__DeviceArray::*)(::UnityEngine::InputSystem::InputDevice)>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__DeviceArray::Remove)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x28ac224;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__DeviceArray>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__DeviceArray.Get
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice>> (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__DeviceArray::*)()>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__DeviceArray::Get)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x28a6764;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__DeviceArray>::get(),
                            "Get",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__DeviceArray.Set
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__DeviceArray::*)(::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice>>)>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__DeviceArray::Set)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x28a6850;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__DeviceArray>::get(),
                            "Set",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice>>>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "m_HaveValue", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DeviceCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DeviceArray", ty: "::ArrayW<::UnityEngine::InputSystem::InputDevice>", modifiers: "", def_value: Some("csnull") }]
constexpr ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__DeviceArray::____UnityEngine__InputSystem__InputActionMap__DeviceArray(bool m_HaveValue, int32_t m_DeviceCount, ::ArrayW<::UnityEngine::InputSystem::InputDevice> m_DeviceArray) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_HaveValue = m_HaveValue;
this->m_DeviceCount = m_DeviceCount;
this->m_DeviceArray = m_DeviceArray;
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__DeviceArray::__set_m_HaveValue(bool value)  {
::cordl_internals::setInstanceField<bool, 0x0>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__DeviceArray::__get_m_HaveValue() const {
return ::cordl_internals::getInstanceField<bool, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__DeviceArray::__set_m_DeviceCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x4>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__DeviceArray::__get_m_DeviceCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__DeviceArray::__set_m_DeviceArray(::ArrayW<::UnityEngine::InputSystem::InputDevice> value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::InputSystem::InputDevice>, 0x8>(this->__instance, std::forward<::ArrayW<::UnityEngine::InputSystem::InputDevice>>(value));
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputDevice> ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__DeviceArray::__get_m_DeviceArray() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::InputSystem::InputDevice>, 0x8>(this->__instance);
}
 int32_t ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__DeviceArray::IndexOf(::UnityEngine::InputSystem::InputDevice device)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__DeviceArray>::get(),
                            "IndexOf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, device);
}
 bool ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__DeviceArray::Remove(::UnityEngine::InputSystem::InputDevice device)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__DeviceArray>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, device);
}
 ::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice>> ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__DeviceArray::Get()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__DeviceArray>::get(),
                            "Get",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice>>, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__DeviceArray::Set(::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice>> devices)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__DeviceArray>::get(),
                            "Set",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, devices);
}
// Ctor Parameters [CppParam { name: "bindings", ty: "::System::Collections::Generic::List_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingOverrideJson>", modifiers: "", def_value: Some("csnull") }]
constexpr ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingOverrideListJson::____UnityEngine__InputSystem__InputActionMap__BindingOverrideListJson(::System::Collections::Generic::List_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingOverrideJson> bindings) noexcept : ::bs_hook::ValueTypeWrapper() {this->bindings = bindings;
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingOverrideListJson::__set_bindings(::System::Collections::Generic::List_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingOverrideJson> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingOverrideJson>, 0x0>(this->__instance, std::forward<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingOverrideJson>>(value));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingOverrideJson> ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingOverrideListJson::__get_bindings() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingOverrideJson>, 0x0>(this->__instance);
}
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingOverrideJson.FromBinding
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingOverrideJson (*)(::UnityEngine::InputSystem::InputBinding)>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingOverrideJson::FromBinding)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x28ac298;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingOverrideJson>::get(),
                            "FromBinding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "action", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "id", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "interactions", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "processors", ty: "::StringW", modifiers: "", def_value: Some("csnull") }]
constexpr ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingOverrideJson::____UnityEngine__InputSystem__InputActionMap__BindingOverrideJson(::StringW action, ::StringW id, ::StringW path, ::StringW interactions, ::StringW processors) noexcept : ::bs_hook::ValueTypeWrapper() {this->action = action;
this->id = id;
this->path = path;
this->interactions = interactions;
this->processors = processors;
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingOverrideJson::__set_action(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x0>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingOverrideJson::__get_action() const {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingOverrideJson::__set_id(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x8>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingOverrideJson::__get_id() const {
return ::cordl_internals::getInstanceField<::StringW, 0x8>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingOverrideJson::__set_path(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingOverrideJson::__get_path() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingOverrideJson::__set_interactions(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingOverrideJson::__get_interactions() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingOverrideJson::__set_processors(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingOverrideJson::__get_processors() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->__instance);
}
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingOverrideJson ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingOverrideJson::FromBinding(::UnityEngine::InputSystem::InputBinding binding)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingOverrideJson>::get(),
                            "FromBinding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingOverrideJson, false>(nullptr, ___internal_method, binding);
}
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingJson.ToBinding
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputBinding (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingJson::*)()>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingJson::ToBinding)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x28ac2b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingJson>::get(),
                            "ToBinding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingJson.FromBinding
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingJson (*)(ByRef<::UnityEngine::InputSystem::InputBinding>)>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingJson::FromBinding)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x28ac3d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingJson>::get(),
                            "FromBinding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::InputBinding>>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "id", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "interactions", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "processors", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "groups", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "action", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "isComposite", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "isPartOfComposite", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingJson::____UnityEngine__InputSystem__InputActionMap__BindingJson(::StringW name, ::StringW id, ::StringW path, ::StringW interactions, ::StringW processors, ::StringW groups, ::StringW action, bool isComposite, bool isPartOfComposite) noexcept : ::bs_hook::ValueTypeWrapper() {this->name = name;
this->id = id;
this->path = path;
this->interactions = interactions;
this->processors = processors;
this->groups = groups;
this->action = action;
this->isComposite = isComposite;
this->isPartOfComposite = isPartOfComposite;
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingJson::__set_name(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x0>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingJson::__get_name() const {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingJson::__set_id(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x8>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingJson::__get_id() const {
return ::cordl_internals::getInstanceField<::StringW, 0x8>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingJson::__set_path(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingJson::__get_path() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingJson::__set_interactions(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingJson::__get_interactions() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingJson::__set_processors(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingJson::__get_processors() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingJson::__set_groups(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingJson::__get_groups() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingJson::__set_action(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingJson::__get_action() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingJson::__set_isComposite(bool value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingJson::__get_isComposite() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingJson::__set_isPartOfComposite(bool value)  {
::cordl_internals::setInstanceField<bool, 0x39>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingJson::__get_isPartOfComposite() const {
return ::cordl_internals::getInstanceField<bool, 0x39>(this->__instance);
}
 ::UnityEngine::InputSystem::InputBinding ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingJson::ToBinding()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingJson>::get(),
                            "ToBinding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputBinding, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingJson ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingJson::FromBinding(ByRef<::UnityEngine::InputSystem::InputBinding> binding)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingJson>::get(),
                            "FromBinding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::InputBinding>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingJson, false>(nullptr, ___internal_method, binding);
}
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadActionJson.ToAction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputAction (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadActionJson::*)(::StringW)>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadActionJson::ToAction)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x28ac460;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadActionJson>::get(),
                            "ToAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "type", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "id", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "expectedControlType", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "expectedControlLayout", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "processors", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "interactions", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "passThrough", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "initialStateCheck", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "bindings", ty: "::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingJson>", modifiers: "", def_value: Some("csnull") }]
constexpr ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadActionJson::____UnityEngine__InputSystem__InputActionMap__ReadActionJson(::StringW name, ::StringW type, ::StringW id, ::StringW expectedControlType, ::StringW expectedControlLayout, ::StringW processors, ::StringW interactions, bool passThrough, bool initialStateCheck, ::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingJson> bindings) noexcept : ::bs_hook::ValueTypeWrapper() {this->name = name;
this->type = type;
this->id = id;
this->expectedControlType = expectedControlType;
this->expectedControlLayout = expectedControlLayout;
this->processors = processors;
this->interactions = interactions;
this->passThrough = passThrough;
this->initialStateCheck = initialStateCheck;
this->bindings = bindings;
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadActionJson::__set_name(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x0>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadActionJson::__get_name() const {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadActionJson::__set_type(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x8>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadActionJson::__get_type() const {
return ::cordl_internals::getInstanceField<::StringW, 0x8>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadActionJson::__set_id(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadActionJson::__get_id() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadActionJson::__set_expectedControlType(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadActionJson::__get_expectedControlType() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadActionJson::__set_expectedControlLayout(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadActionJson::__get_expectedControlLayout() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadActionJson::__set_processors(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadActionJson::__get_processors() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadActionJson::__set_interactions(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadActionJson::__get_interactions() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadActionJson::__set_passThrough(bool value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadActionJson::__get_passThrough() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadActionJson::__set_initialStateCheck(bool value)  {
::cordl_internals::setInstanceField<bool, 0x39>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadActionJson::__get_initialStateCheck() const {
return ::cordl_internals::getInstanceField<bool, 0x39>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadActionJson::__set_bindings(::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingJson> value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingJson>, 0x40>(this->__instance, std::forward<::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingJson>>(value));
}
constexpr ::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingJson> ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadActionJson::__get_bindings() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingJson>, 0x40>(this->__instance);
}
/// @param actionName: ::StringW (default: csnull)
 ::UnityEngine::InputSystem::InputAction ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadActionJson::ToAction(::StringW actionName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadActionJson>::get(),
                            "ToAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputAction, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, actionName);
}
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteActionJson.FromAction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteActionJson (*)(::UnityEngine::InputSystem::InputAction)>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteActionJson::FromAction)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x28ac6bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteActionJson>::get(),
                            "FromAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "type", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "id", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "expectedControlType", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "processors", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "interactions", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "initialStateCheck", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteActionJson::____UnityEngine__InputSystem__InputActionMap__WriteActionJson(::StringW name, ::StringW type, ::StringW id, ::StringW expectedControlType, ::StringW processors, ::StringW interactions, bool initialStateCheck) noexcept : ::bs_hook::ValueTypeWrapper() {this->name = name;
this->type = type;
this->id = id;
this->expectedControlType = expectedControlType;
this->processors = processors;
this->interactions = interactions;
this->initialStateCheck = initialStateCheck;
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteActionJson::__set_name(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x0>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteActionJson::__get_name() const {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteActionJson::__set_type(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x8>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteActionJson::__get_type() const {
return ::cordl_internals::getInstanceField<::StringW, 0x8>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteActionJson::__set_id(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteActionJson::__get_id() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteActionJson::__set_expectedControlType(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteActionJson::__get_expectedControlType() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteActionJson::__set_processors(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteActionJson::__get_processors() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteActionJson::__set_interactions(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteActionJson::__get_interactions() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteActionJson::__set_initialStateCheck(bool value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteActionJson::__get_initialStateCheck() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this->__instance);
}
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteActionJson ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteActionJson::FromAction(::UnityEngine::InputSystem::InputAction action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteActionJson>::get(),
                            "FromAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteActionJson, false>(nullptr, ___internal_method, action);
}
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "id", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "actions", ty: "::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadActionJson>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "bindings", ty: "::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingJson>", modifiers: "", def_value: Some("csnull") }]
constexpr ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadMapJson::____UnityEngine__InputSystem__InputActionMap__ReadMapJson(::StringW name, ::StringW id, ::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadActionJson> actions, ::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingJson> bindings) noexcept : ::bs_hook::ValueTypeWrapper() {this->name = name;
this->id = id;
this->actions = actions;
this->bindings = bindings;
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadMapJson::__set_name(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x0>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadMapJson::__get_name() const {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadMapJson::__set_id(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x8>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadMapJson::__get_id() const {
return ::cordl_internals::getInstanceField<::StringW, 0x8>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadMapJson::__set_actions(::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadActionJson> value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadActionJson>, 0x10>(this->__instance, std::forward<::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadActionJson>>(value));
}
constexpr ::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadActionJson> ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadMapJson::__get_actions() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadActionJson>, 0x10>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadMapJson::__set_bindings(::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingJson> value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingJson>, 0x18>(this->__instance, std::forward<::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingJson>>(value));
}
constexpr ::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingJson> ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadMapJson::__get_bindings() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingJson>, 0x18>(this->__instance);
}
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteMapJson.FromMap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteMapJson (*)(::UnityEngine::InputSystem::InputActionMap)>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteMapJson::FromMap)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x28ac778;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteMapJson>::get(),
                            "FromMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionMap>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "id", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "actions", ty: "::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteActionJson>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "bindings", ty: "::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingJson>", modifiers: "", def_value: Some("csnull") }]
constexpr ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteMapJson::____UnityEngine__InputSystem__InputActionMap__WriteMapJson(::StringW name, ::StringW id, ::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteActionJson> actions, ::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingJson> bindings) noexcept : ::bs_hook::ValueTypeWrapper() {this->name = name;
this->id = id;
this->actions = actions;
this->bindings = bindings;
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteMapJson::__set_name(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x0>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteMapJson::__get_name() const {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteMapJson::__set_id(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x8>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteMapJson::__get_id() const {
return ::cordl_internals::getInstanceField<::StringW, 0x8>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteMapJson::__set_actions(::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteActionJson> value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteActionJson>, 0x10>(this->__instance, std::forward<::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteActionJson>>(value));
}
constexpr ::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteActionJson> ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteMapJson::__get_actions() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteActionJson>, 0x10>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteMapJson::__set_bindings(::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingJson> value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingJson>, 0x18>(this->__instance, std::forward<::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingJson>>(value));
}
constexpr ::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingJson> ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteMapJson::__get_bindings() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingJson>, 0x18>(this->__instance);
}
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteMapJson ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteMapJson::FromMap(::UnityEngine::InputSystem::InputActionMap map)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteMapJson>::get(),
                            "FromMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionMap>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteMapJson, false>(nullptr, ___internal_method, map);
}
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteFileJson.FromMap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteFileJson (*)(::UnityEngine::InputSystem::InputActionMap)>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteFileJson::FromMap)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x28ac0d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteFileJson>::get(),
                            "FromMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionMap>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteFileJson.FromMaps
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteFileJson (*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputActionMap>)>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteFileJson::FromMaps)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x28a6e20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteFileJson>::get(),
                            "FromMaps",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputActionMap>>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "maps", ty: "::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteMapJson>", modifiers: "", def_value: Some("csnull") }]
constexpr ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteFileJson::____UnityEngine__InputSystem__InputActionMap__WriteFileJson(::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteMapJson> maps) noexcept : ::bs_hook::ValueTypeWrapper() {this->maps = maps;
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteFileJson::__set_maps(::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteMapJson> value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteMapJson>, 0x0>(this->__instance, std::forward<::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteMapJson>>(value));
}
constexpr ::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteMapJson> ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteFileJson::__get_maps() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteMapJson>, 0x0>(this->__instance);
}
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteFileJson ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteFileJson::FromMap(::UnityEngine::InputSystem::InputActionMap map)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteFileJson>::get(),
                            "FromMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionMap>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteFileJson, false>(nullptr, ___internal_method, map);
}
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteFileJson ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteFileJson::FromMaps(::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputActionMap> maps)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteFileJson>::get(),
                            "FromMaps",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputActionMap>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteFileJson, false>(nullptr, ___internal_method, maps);
}
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadFileJson.ToMaps
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::InputSystem::InputActionMap> (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadFileJson::*)()>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadFileJson::ToMaps)> {
  constexpr static std::size_t size = 0xfb0;
  constexpr static std::size_t addrs = 0x28a8974;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadFileJson>::get(),
                            "ToMaps",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "actions", ty: "::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadActionJson>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "maps", ty: "::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadMapJson>", modifiers: "", def_value: Some("csnull") }]
constexpr ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadFileJson::____UnityEngine__InputSystem__InputActionMap__ReadFileJson(::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadActionJson> actions, ::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadMapJson> maps) noexcept : ::bs_hook::ValueTypeWrapper() {this->actions = actions;
this->maps = maps;
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadFileJson::__set_actions(::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadActionJson> value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadActionJson>, 0x0>(this->__instance, std::forward<::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadActionJson>>(value));
}
constexpr ::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadActionJson> ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadFileJson::__get_actions() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadActionJson>, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadFileJson::__set_maps(::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadMapJson> value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadMapJson>, 0x8>(this->__instance, std::forward<::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadMapJson>>(value));
}
constexpr ::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadMapJson> ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadFileJson::__get_maps() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadMapJson>, 0x8>(this->__instance);
}
 ::ArrayW<::UnityEngine::InputSystem::InputActionMap> ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadFileJson::ToMaps()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadFileJson>::get(),
                            "ToMaps",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::InputSystem::InputActionMap>, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.get_name
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::get_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28a9da0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "get_name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.get_asset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputActionAsset (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::get_asset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28a9da8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "get_asset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.get_id
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Guid (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::get_id)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x28a9db0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "get_id",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.get_idDontGenerate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Guid (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::get_idDontGenerate)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x28a7898;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "get_idDontGenerate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.get_enabled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::get_enabled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x28a6488;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "get_enabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.get_actions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputAction> (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::get_actions)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x28a9cf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "get_actions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.get_bindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputBinding> (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::get_bindings)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x28a9e48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "get_bindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.UnityEngine_InputSystem_IInputActionCollection2_get_bindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding> (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::UnityEngine_InputSystem_IInputActionCollection2_get_bindings)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x28a9ea8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "UnityEngine.InputSystem.IInputActionCollection2.get_bindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.get_controlSchemes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControlScheme> (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::get_controlSchemes)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x28a9f0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "get_controlSchemes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.get_bindingMask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::get_bindingMask)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x28a9f90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "get_bindingMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.set_bindingMask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)(::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>)>(&::UnityEngine::InputSystem::InputActionMap::set_bindingMask)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x28a9fa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "set_bindingMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.get_devices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice>> (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::get_devices)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x28a55d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "get_devices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.set_devices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)(::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice>>)>(&::UnityEngine::InputSystem::InputActionMap::set_devices)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x28aa0dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "set_devices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.get_Item
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputAction (::UnityEngine::InputSystem::InputActionMap::*)(::StringW)>(&::UnityEngine::InputSystem::InputActionMap::get_Item)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x28aa120;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.add_actionTriggered
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)(::System::Action_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext>)>(&::UnityEngine::InputSystem::InputActionMap::add_actionTriggered)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x28aa208;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "add_actionTriggered",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.remove_actionTriggered
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)(::System::Action_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext>)>(&::UnityEngine::InputSystem::InputActionMap::remove_actionTriggered)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x28aa260;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "remove_actionTriggered",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x28a5490;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)(::StringW)>(&::UnityEngine::InputSystem::InputActionMap::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x28aa2b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::Dispose)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x28aa2e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.FindActionIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::InputActionMap::*)(::StringW)>(&::UnityEngine::InputSystem::InputActionMap::FindActionIndex)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x28aa2fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "FindActionIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.SetUpActionLookupTable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::SetUpActionLookupTable)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x28aa500;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "SetUpActionLookupTable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.ClearActionLookupTable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::ClearActionLookupTable)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x28aa620;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "ClearActionLookupTable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.FindActionIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::InputActionMap::*)(::System::Guid)>(&::UnityEngine::InputSystem::InputActionMap::FindActionIndex)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x28aa678;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "FindActionIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.FindAction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputAction (::UnityEngine::InputSystem::InputActionMap::*)(::StringW, bool)>(&::UnityEngine::InputSystem::InputActionMap::FindAction)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x28a73e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "FindAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.FindAction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputAction (::UnityEngine::InputSystem::InputActionMap::*)(::System::Guid)>(&::UnityEngine::InputSystem::InputActionMap::FindAction)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x28a79e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "FindAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.IsUsableWithDevice
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputActionMap::*)(::UnityEngine::InputSystem::InputDevice)>(&::UnityEngine::InputSystem::InputActionMap::IsUsableWithDevice)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x28a7db0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "IsUsableWithDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.Enable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::Enable)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x28a8028;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "Enable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.Disable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::Disable)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x28a81d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "Disable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.Clone
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputActionMap (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::Clone)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x28aa70c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "Clone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.System_ICloneable_Clone
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::System_ICloneable_Clone)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x28aa928;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "System.ICloneable.Clone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.Contains
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputActionMap::*)(::UnityEngine::InputSystem::InputAction)>(&::UnityEngine::InputSystem::InputActionMap::Contains)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x28aa92c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "Contains",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::ToString)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x28aa958;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::InputSystem::InputActionMap),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputAction> (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::GetEnumerator)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x28aaa20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.System_Collections_IEnumerable_GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x28aaac0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.get_needToResolveBindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::get_needToResolveBindings)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x28aaac4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "get_needToResolveBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.set_needToResolveBindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)(bool)>(&::UnityEngine::InputSystem::InputActionMap::set_needToResolveBindings)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x28aaad0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "set_needToResolveBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.get_bindingResolutionNeedsFullReResolve
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::get_bindingResolutionNeedsFullReResolve)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x28aaaec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "get_bindingResolutionNeedsFullReResolve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.set_bindingResolutionNeedsFullReResolve
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)(bool)>(&::UnityEngine::InputSystem::InputActionMap::set_bindingResolutionNeedsFullReResolve)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x28aaaf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "set_bindingResolutionNeedsFullReResolve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.get_controlsForEachActionInitialized
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::get_controlsForEachActionInitialized)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x28aab14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "get_controlsForEachActionInitialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.set_controlsForEachActionInitialized
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)(bool)>(&::UnityEngine::InputSystem::InputActionMap::set_controlsForEachActionInitialized)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x28aab20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "set_controlsForEachActionInitialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.get_bindingsForEachActionInitialized
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::get_bindingsForEachActionInitialized)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x28aab3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "get_bindingsForEachActionInitialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.set_bindingsForEachActionInitialized
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)(bool)>(&::UnityEngine::InputSystem::InputActionMap::set_bindingsForEachActionInitialized)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x28aab48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "set_bindingsForEachActionInitialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.GetBindingsForSingleAction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputBinding> (::UnityEngine::InputSystem::InputActionMap::*)(::UnityEngine::InputSystem::InputAction)>(&::UnityEngine::InputSystem::InputActionMap::GetBindingsForSingleAction)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x28a431c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "GetBindingsForSingleAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.GetControlsForSingleAction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControl> (::UnityEngine::InputSystem::InputActionMap::*)(::UnityEngine::InputSystem::InputAction)>(&::UnityEngine::InputSystem::InputActionMap::GetControlsForSingleAction)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x28a4414;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "GetControlsForSingleAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.SetUpPerActionControlAndBindingArrays
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::SetUpPerActionControlAndBindingArrays)> {
  constexpr static std::size_t size = 0x5f0;
  constexpr static std::size_t addrs = 0x28aab64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "SetUpPerActionControlAndBindingArrays",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.OnWantToChangeSetup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::OnWantToChangeSetup)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x28a83ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "OnWantToChangeSetup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.OnSetupChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::OnSetupChanged)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x28a86cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "OnSetupChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.OnBindingModified
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::OnBindingModified)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x28ab17c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "OnBindingModified",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.ClearCachedActionData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)(bool)>(&::UnityEngine::InputSystem::InputActionMap::ClearCachedActionData)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x28ab154;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "ClearCachedActionData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.GenerateId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::GenerateId)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x28a9e14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "GenerateId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.LazyResolveBindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputActionMap::*)(bool)>(&::UnityEngine::InputSystem::InputActionMap::LazyResolveBindings)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x28a4248;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "LazyResolveBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.ResolveBindingsIfNecessary
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::ResolveBindingsIfNecessary)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x28a43e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "ResolveBindingsIfNecessary",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.ResolveBindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::ResolveBindings)> {
  constexpr static std::size_t size = 0xbc8;
  constexpr static std::size_t addrs = 0x28ab198;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "ResolveBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.FindBinding
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::InputActionMap::*)(::UnityEngine::InputSystem::InputBinding, ByRef<::UnityEngine::InputSystem::InputAction>)>(&::UnityEngine::InputSystem::InputActionMap::FindBinding)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x28a75ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "FindBinding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::InputAction>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.FindBindingRelativeToMap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::InputActionMap::*)(::UnityEngine::InputSystem::InputBinding)>(&::UnityEngine::InputSystem::InputActionMap::FindBindingRelativeToMap)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x28abe40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "FindBindingRelativeToMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.FromJson
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::InputSystem::InputActionMap> (*)(::StringW)>(&::UnityEngine::InputSystem::InputActionMap::FromJson)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x28abef8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "FromJson",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.ToJson
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputActionMap>)>(&::UnityEngine::InputSystem::InputActionMap::ToJson)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x28abfac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "ToJson",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputActionMap>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.ToJson
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::ToJson)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x28ac064;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "ToJson",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.OnBeforeSerialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::OnBeforeSerialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x28ac160;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "OnBeforeSerialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.OnAfterDeserialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::OnAfterDeserialize)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x28ac164;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "OnAfterDeserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::ICloneable
constexpr  ::UnityEngine::InputSystem::InputActionMap::operator ::System::ICloneable() const noexcept {
return ::System::ICloneable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::UnityEngine::ISerializationCallbackReceiver
constexpr  ::UnityEngine::InputSystem::InputActionMap::operator ::UnityEngine::ISerializationCallbackReceiver() const noexcept {
return ::UnityEngine::ISerializationCallbackReceiver(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::UnityEngine::InputSystem::IInputActionCollection2
constexpr  ::UnityEngine::InputSystem::InputActionMap::operator ::UnityEngine::InputSystem::IInputActionCollection2() const noexcept {
return ::UnityEngine::InputSystem::IInputActionCollection2(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::UnityEngine::InputSystem::IInputActionCollection
constexpr  ::UnityEngine::InputSystem::InputActionMap::operator ::UnityEngine::InputSystem::IInputActionCollection() const noexcept {
return ::UnityEngine::InputSystem::IInputActionCollection(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputAction>
constexpr  ::UnityEngine::InputSystem::InputActionMap::operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputAction>() const noexcept {
return ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputAction>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr  ::UnityEngine::InputSystem::InputActionMap::operator ::System::Collections::IEnumerable() const noexcept {
return ::System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::IDisposable
constexpr  ::UnityEngine::InputSystem::InputActionMap::operator ::System::IDisposable() const noexcept {
return ::System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::InputActionMap::__set_m_Name(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::UnityEngine::InputSystem::InputActionMap::__get_m_Name() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::InputActionMap::__set_m_Id(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::UnityEngine::InputSystem::InputActionMap::__get_m_Id() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::InputActionMap::__set_m_Asset(::UnityEngine::InputSystem::InputActionAsset value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::InputActionAsset, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::InputSystem::InputActionAsset>(value));
}
constexpr ::UnityEngine::InputSystem::InputActionAsset ::UnityEngine::InputSystem::InputActionMap::__get_m_Asset() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputActionAsset, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::InputActionMap::__set_m_Actions(::ArrayW<::UnityEngine::InputSystem::InputAction> value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::InputSystem::InputAction>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::UnityEngine::InputSystem::InputAction>>(value));
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputAction> ::UnityEngine::InputSystem::InputActionMap::__get_m_Actions() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::InputSystem::InputAction>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::InputActionMap::__set_m_Bindings(::ArrayW<::UnityEngine::InputSystem::InputBinding> value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::InputSystem::InputBinding>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::UnityEngine::InputSystem::InputBinding>>(value));
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputBinding> ::UnityEngine::InputSystem::InputActionMap::__get_m_Bindings() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::InputSystem::InputBinding>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::InputActionMap::__set_m_BindingsForEachAction(::ArrayW<::UnityEngine::InputSystem::InputBinding> value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::InputSystem::InputBinding>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::UnityEngine::InputSystem::InputBinding>>(value));
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputBinding> ::UnityEngine::InputSystem::InputActionMap::__get_m_BindingsForEachAction() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::InputSystem::InputBinding>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::InputActionMap::__set_m_ControlsForEachAction(::ArrayW<::UnityEngine::InputSystem::InputControl> value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::InputSystem::InputControl>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::UnityEngine::InputSystem::InputControl>>(value));
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputControl> ::UnityEngine::InputSystem::InputActionMap::__get_m_ControlsForEachAction() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::InputSystem::InputControl>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::InputActionMap::__set_m_EnabledActionsCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::InputSystem::InputActionMap::__get_m_EnabledActionsCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::InputActionMap::__set_m_SingletonAction(::UnityEngine::InputSystem::InputAction value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::InputAction, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::InputSystem::InputAction>(value));
}
constexpr ::UnityEngine::InputSystem::InputAction ::UnityEngine::InputSystem::InputActionMap::__get_m_SingletonAction() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputAction, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::InputActionMap::__set_m_MapIndexInState(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::InputSystem::InputActionMap::__get_m_MapIndexInState() const {
return ::cordl_internals::getInstanceField<int32_t, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::InputActionMap::__set_m_State(::UnityEngine::InputSystem::InputActionState value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::InputActionState, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::InputSystem::InputActionState>(value));
}
constexpr ::UnityEngine::InputSystem::InputActionState ::UnityEngine::InputSystem::InputActionMap::__get_m_State() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputActionState, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::InputActionMap::__set_m_BindingMask(::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> value)  {
::cordl_internals::setInstanceField<::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>>(value));
}
constexpr ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> ::UnityEngine::InputSystem::InputActionMap::__get_m_BindingMask() const {
return ::cordl_internals::getInstanceField<::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::InputActionMap::__set_m_Flags(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__Flags value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__Flags, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__Flags>(value));
}
constexpr ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__Flags ::UnityEngine::InputSystem::InputActionMap::__get_m_Flags() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__Flags, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::InputActionMap::__set_m_ParameterOverridesCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xcc>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::InputSystem::InputActionMap::__get_m_ParameterOverridesCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0xcc>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::InputActionMap::__set_m_ParameterOverrides(::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride> value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride>, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride>>(value));
}
constexpr ::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride> ::UnityEngine::InputSystem::InputActionMap::__get_m_ParameterOverrides() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride>, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::InputActionMap::__set_m_Devices(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__DeviceArray value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__DeviceArray, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__DeviceArray>(value));
}
constexpr ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__DeviceArray ::UnityEngine::InputSystem::InputActionMap::__get_m_Devices() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__DeviceArray, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::InputActionMap::__set_m_ActionCallbacks(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext>> value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext>>, 0xe8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext>>>(value));
}
constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext>> ::UnityEngine::InputSystem::InputActionMap::__get_m_ActionCallbacks() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext>>, 0xe8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::InputActionMap::__set_m_ActionIndexByNameOrId(::System::Collections::Generic::Dictionary_2<::StringW,int32_t> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,int32_t>, 0x138>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::Dictionary_2<::StringW,int32_t>>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t> ::UnityEngine::InputSystem::InputActionMap::__get_m_ActionIndexByNameOrId() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,int32_t>, 0x138>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::UnityEngine::InputSystem::InputActionMap::__set_s_DeferBindingResolution(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "s_DeferBindingResolution", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get>(std::forward<int32_t>(value));
}
 int32_t ::UnityEngine::InputSystem::InputActionMap::__get_s_DeferBindingResolution()  {
return ::cordl_internals::getStaticField<int32_t, "s_DeferBindingResolution", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get>();
}
 ::StringW ::UnityEngine::InputSystem::InputActionMap::get_name()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "get_name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::InputSystem::InputActionAsset ::UnityEngine::InputSystem::InputActionMap::get_asset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "get_asset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionAsset, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Guid ::UnityEngine::InputSystem::InputActionMap::get_id()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "get_id",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Guid, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Guid ::UnityEngine::InputSystem::InputActionMap::get_idDontGenerate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "get_idDontGenerate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Guid, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::UnityEngine::InputSystem::InputActionMap::get_enabled()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "get_enabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputAction> ::UnityEngine::InputSystem::InputActionMap::get_actions()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "get_actions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputAction>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputBinding> ::UnityEngine::InputSystem::InputActionMap::get_bindings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "get_bindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputBinding>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding> ::UnityEngine::InputSystem::InputActionMap::UnityEngine_InputSystem_IInputActionCollection2_get_bindings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "UnityEngine.InputSystem.IInputActionCollection2.get_bindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControlScheme> ::UnityEngine::InputSystem::InputActionMap::get_controlSchemes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "get_controlSchemes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControlScheme>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> ::UnityEngine::InputSystem::InputActionMap::get_bindingMask()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "get_bindingMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::InputSystem::InputActionMap::set_bindingMask(::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "set_bindingMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice>> ::UnityEngine::InputSystem::InputActionMap::get_devices()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "get_devices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice>>, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::InputSystem::InputActionMap::set_devices(::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice>> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "set_devices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::UnityEngine::InputSystem::InputAction ::UnityEngine::InputSystem::InputActionMap::get_Item(::StringW actionNameOrId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputAction, false>(const_cast<void*>(instance), ___internal_method, actionNameOrId);
}
 void ::UnityEngine::InputSystem::InputActionMap::add_actionTriggered(::System::Action_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "add_actionTriggered",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::UnityEngine::InputSystem::InputActionMap::remove_actionTriggered(::System::Action_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "remove_actionTriggered",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
// Ctor Parameters []
 ::UnityEngine::InputSystem::InputActionMap::InputActionMap()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<InputActionMap>())) {}
 void ::UnityEngine::InputSystem::InputActionMap::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }]
 ::UnityEngine::InputSystem::InputActionMap::InputActionMap(::StringW name)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<InputActionMap>(name))) {}
 void ::UnityEngine::InputSystem::InputActionMap::_ctor(::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, name);
}
 void ::UnityEngine::InputSystem::InputActionMap::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::UnityEngine::InputSystem::InputActionMap::FindActionIndex(::StringW nameOrId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "FindActionIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, nameOrId);
}
 void ::UnityEngine::InputSystem::InputActionMap::SetUpActionLookupTable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "SetUpActionLookupTable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::InputSystem::InputActionMap::ClearActionLookupTable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "ClearActionLookupTable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::UnityEngine::InputSystem::InputActionMap::FindActionIndex(::System::Guid id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "FindActionIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, id);
}
/// @param throwIfNotFound: bool (default: false)
 ::UnityEngine::InputSystem::InputAction ::UnityEngine::InputSystem::InputActionMap::FindAction(::StringW actionNameOrId, bool throwIfNotFound)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "FindAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputAction, false>(const_cast<void*>(instance), ___internal_method, actionNameOrId, throwIfNotFound);
}
 ::UnityEngine::InputSystem::InputAction ::UnityEngine::InputSystem::InputActionMap::FindAction(::System::Guid id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "FindAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputAction, false>(const_cast<void*>(instance), ___internal_method, id);
}
 bool ::UnityEngine::InputSystem::InputActionMap::IsUsableWithDevice(::UnityEngine::InputSystem::InputDevice device)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "IsUsableWithDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, device);
}
 void ::UnityEngine::InputSystem::InputActionMap::Enable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "Enable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::InputSystem::InputActionMap::Disable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "Disable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::InputSystem::InputActionMap ::UnityEngine::InputSystem::InputActionMap::Clone()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "Clone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionMap, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType ::UnityEngine::InputSystem::InputActionMap::System_ICloneable_Clone()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "System.ICloneable.Clone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::UnityEngine::InputSystem::InputActionMap::Contains(::UnityEngine::InputSystem::InputAction action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "Contains",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, action);
}
 ::StringW ::UnityEngine::InputSystem::InputActionMap::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputAction> ::UnityEngine::InputSystem::InputActionMap::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputAction>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::IEnumerator ::UnityEngine::InputSystem::InputActionMap::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::UnityEngine::InputSystem::InputActionMap::get_needToResolveBindings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "get_needToResolveBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::InputSystem::InputActionMap::set_needToResolveBindings(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "set_needToResolveBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::UnityEngine::InputSystem::InputActionMap::get_bindingResolutionNeedsFullReResolve()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "get_bindingResolutionNeedsFullReResolve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::InputSystem::InputActionMap::set_bindingResolutionNeedsFullReResolve(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "set_bindingResolutionNeedsFullReResolve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::UnityEngine::InputSystem::InputActionMap::get_controlsForEachActionInitialized()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "get_controlsForEachActionInitialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::InputSystem::InputActionMap::set_controlsForEachActionInitialized(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "set_controlsForEachActionInitialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::UnityEngine::InputSystem::InputActionMap::get_bindingsForEachActionInitialized()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "get_bindingsForEachActionInitialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::InputSystem::InputActionMap::set_bindingsForEachActionInitialized(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "set_bindingsForEachActionInitialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputBinding> ::UnityEngine::InputSystem::InputActionMap::GetBindingsForSingleAction(::UnityEngine::InputSystem::InputAction action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "GetBindingsForSingleAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputBinding>, false>(const_cast<void*>(instance), ___internal_method, action);
}
 ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControl> ::UnityEngine::InputSystem::InputActionMap::GetControlsForSingleAction(::UnityEngine::InputSystem::InputAction action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "GetControlsForSingleAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControl>, false>(const_cast<void*>(instance), ___internal_method, action);
}
 void ::UnityEngine::InputSystem::InputActionMap::SetUpPerActionControlAndBindingArrays()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "SetUpPerActionControlAndBindingArrays",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::InputSystem::InputActionMap::OnWantToChangeSetup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "OnWantToChangeSetup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::InputSystem::InputActionMap::OnSetupChanged()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "OnSetupChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::InputSystem::InputActionMap::OnBindingModified()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "OnBindingModified",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
/// @param onlyControls: bool (default: false)
 void ::UnityEngine::InputSystem::InputActionMap::ClearCachedActionData(bool onlyControls)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "ClearCachedActionData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, onlyControls);
}
 void ::UnityEngine::InputSystem::InputActionMap::GenerateId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "GenerateId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::UnityEngine::InputSystem::InputActionMap::LazyResolveBindings(bool fullResolve)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "LazyResolveBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, fullResolve);
}
 bool ::UnityEngine::InputSystem::InputActionMap::ResolveBindingsIfNecessary()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "ResolveBindingsIfNecessary",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::InputSystem::InputActionMap::ResolveBindings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "ResolveBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::UnityEngine::InputSystem::InputActionMap::FindBinding(::UnityEngine::InputSystem::InputBinding mask, ByRef<::UnityEngine::InputSystem::InputAction> action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "FindBinding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::InputAction>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, mask, action);
}
 int32_t ::UnityEngine::InputSystem::InputActionMap::FindBindingRelativeToMap(::UnityEngine::InputSystem::InputBinding mask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "FindBindingRelativeToMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, mask);
}
 ::ArrayW<::UnityEngine::InputSystem::InputActionMap> ::UnityEngine::InputSystem::InputActionMap::FromJson(::StringW json)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "FromJson",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::InputSystem::InputActionMap>, false>(nullptr, ___internal_method, json);
}
 ::StringW ::UnityEngine::InputSystem::InputActionMap::ToJson(::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputActionMap> maps)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "ToJson",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputActionMap>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, maps);
}
 ::StringW ::UnityEngine::InputSystem::InputActionMap::ToJson()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "ToJson",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::InputSystem::InputActionMap::OnBeforeSerialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "OnBeforeSerialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::InputSystem::InputActionMap::OnAfterDeserialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap>::get(),
                            "OnAfterDeserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
