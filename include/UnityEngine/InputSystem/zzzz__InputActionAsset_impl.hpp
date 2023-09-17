#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
namespace {
#include "UnityEngine/InputSystem/zzzz__InputActionAsset_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlScheme_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionState_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ReadOnlyArray_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__IInputActionCollection_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionRebindingExtensions_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "UnityEngine/InputSystem/zzzz__IInputActionCollection2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBinding_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlScheme_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_def.hpp"
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "maps", ty: "::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteMapJson>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "controlSchemes", ty: "::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__SchemeJson>", modifiers: "", def_value: Some("csnull") }]
constexpr ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset__WriteFileJson::____UnityEngine__InputSystem__InputActionAsset__WriteFileJson(::StringW name, ::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteMapJson> maps, ::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__SchemeJson> controlSchemes) noexcept : ::bs_hook::ValueTypeWrapper() {this->name = name;
this->maps = maps;
this->controlSchemes = controlSchemes;
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset__WriteFileJson::__set_name(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x0>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset__WriteFileJson::__get_name() const {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset__WriteFileJson::__set_maps(::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteMapJson> value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteMapJson>, 0x8>(this->__instance, std::forward<::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteMapJson>>(value));
}
constexpr ::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteMapJson> ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset__WriteFileJson::__get_maps() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteMapJson>, 0x8>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset__WriteFileJson::__set_controlSchemes(::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__SchemeJson> value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__SchemeJson>, 0x10>(this->__instance, std::forward<::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__SchemeJson>>(value));
}
constexpr ::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__SchemeJson> ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset__WriteFileJson::__get_controlSchemes() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__SchemeJson>, 0x10>(this->__instance);
}
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset__ReadFileJson.ToAsset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset__ReadFileJson::*)(::UnityEngine::InputSystem::InputActionAsset)>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset__ReadFileJson::ToAsset)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x28a7284;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset__ReadFileJson>::get(),
                            "ToAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionAsset>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "maps", ty: "::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadMapJson>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "controlSchemes", ty: "::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__SchemeJson>", modifiers: "", def_value: Some("csnull") }]
constexpr ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset__ReadFileJson::____UnityEngine__InputSystem__InputActionAsset__ReadFileJson(::StringW name, ::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadMapJson> maps, ::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__SchemeJson> controlSchemes) noexcept : ::bs_hook::ValueTypeWrapper() {this->name = name;
this->maps = maps;
this->controlSchemes = controlSchemes;
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset__ReadFileJson::__set_name(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x0>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset__ReadFileJson::__get_name() const {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset__ReadFileJson::__set_maps(::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadMapJson> value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadMapJson>, 0x8>(this->__instance, std::forward<::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadMapJson>>(value));
}
constexpr ::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadMapJson> ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset__ReadFileJson::__get_maps() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadMapJson>, 0x8>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset__ReadFileJson::__set_controlSchemes(::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__SchemeJson> value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__SchemeJson>, 0x10>(this->__instance, std::forward<::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__SchemeJson>>(value));
}
constexpr ::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__SchemeJson> ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset__ReadFileJson::__get_controlSchemes() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__SchemeJson>, 0x10>(this->__instance);
}
 void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset__ReadFileJson::ToAsset(::UnityEngine::InputSystem::InputActionAsset asset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset__ReadFileJson>::get(),
                            "ToAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionAsset>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, asset);
}
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___get_bindings_d__8._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___get_bindings_d__8::*)(int32_t)>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___get_bindings_d__8::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x28a6570;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___get_bindings_d__8>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___get_bindings_d__8.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___get_bindings_d__8::*)()>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___get_bindings_d__8::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x28a9924;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___get_bindings_d__8>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___get_bindings_d__8.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___get_bindings_d__8::*)()>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___get_bindings_d__8::MoveNext)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x28a9928;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___get_bindings_d__8>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___get_bindings_d__8.System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputBinding__get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputBinding (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___get_bindings_d__8::*)()>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___get_bindings_d__8::System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputBinding__get_Current)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x28a9a74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___get_bindings_d__8>::get(),
                            "System.Collections.Generic.IEnumerator<UnityEngine.InputSystem.InputBinding>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___get_bindings_d__8.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___get_bindings_d__8::*)()>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___get_bindings_d__8::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x28a9a84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___get_bindings_d__8>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___get_bindings_d__8.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___get_bindings_d__8::*)()>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___get_bindings_d__8::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x28a9ac4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___get_bindings_d__8>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___get_bindings_d__8.System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_InputBinding__GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputBinding> (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___get_bindings_d__8::*)()>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___get_bindings_d__8::System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_InputBinding__GetEnumerator)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x28a9b28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___get_bindings_d__8>::get(),
                            "System.Collections.Generic.IEnumerable<UnityEngine.InputSystem.InputBinding>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___get_bindings_d__8.System_Collections_IEnumerable_GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___get_bindings_d__8::*)()>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___get_bindings_d__8::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x28a9bcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___get_bindings_d__8>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>
constexpr  ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___get_bindings_d__8::operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>() const noexcept {
return ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr  ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___get_bindings_d__8::operator ::System::Collections::IEnumerable() const noexcept {
return ::System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputBinding>
constexpr  ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___get_bindings_d__8::operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputBinding>() const noexcept {
return ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputBinding>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr  ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___get_bindings_d__8::operator ::System::Collections::IEnumerator() const noexcept {
return ::System::Collections::IEnumerator(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::IDisposable
constexpr  ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___get_bindings_d__8::operator ::System::IDisposable() const noexcept {
return ::System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___get_bindings_d__8::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___get_bindings_d__8::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___get_bindings_d__8::__set___2__current(::UnityEngine::InputSystem::InputBinding value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::InputBinding, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::InputSystem::InputBinding>(value));
}
constexpr ::UnityEngine::InputSystem::InputBinding ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___get_bindings_d__8::__get___2__current() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputBinding, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___get_bindings_d__8::__set___l__initialThreadId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___get_bindings_d__8::__get___l__initialThreadId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___get_bindings_d__8::__set___4__this(::UnityEngine::InputSystem::InputActionAsset value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::InputActionAsset, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::InputSystem::InputActionAsset>(value));
}
constexpr ::UnityEngine::InputSystem::InputActionAsset ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___get_bindings_d__8::__get___4__this() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputActionAsset, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___get_bindings_d__8::__set__numActionMaps_5__2(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___get_bindings_d__8::__get__numActionMaps_5__2() const {
return ::cordl_internals::getInstanceField<int32_t, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___get_bindings_d__8::__set__i_5__3(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x84>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___get_bindings_d__8::__get__i_5__3() const {
return ::cordl_internals::getInstanceField<int32_t, 0x84>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___get_bindings_d__8::__set__bindings_5__4(::ArrayW<::UnityEngine::InputSystem::InputBinding> value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::InputSystem::InputBinding>, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::UnityEngine::InputSystem::InputBinding>>(value));
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputBinding> ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___get_bindings_d__8::__get__bindings_5__4() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::InputSystem::InputBinding>, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___get_bindings_d__8::__set__numBindings_5__5(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___get_bindings_d__8::__get__numBindings_5__5() const {
return ::cordl_internals::getInstanceField<int32_t, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___get_bindings_d__8::__set__n_5__6(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x94>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___get_bindings_d__8::__get__n_5__6() const {
return ::cordl_internals::getInstanceField<int32_t, 0x94>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___get_bindings_d__8::____UnityEngine__InputSystem__InputActionAsset___get_bindings_d__8(int32_t __1__state)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____UnityEngine__InputSystem__InputActionAsset___get_bindings_d__8>(__1__state))) {}
 void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___get_bindings_d__8::_ctor(int32_t __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___get_bindings_d__8>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, __1__state);
}
 void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___get_bindings_d__8::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___get_bindings_d__8>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___get_bindings_d__8::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___get_bindings_d__8>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::InputSystem::InputBinding ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___get_bindings_d__8::System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputBinding__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___get_bindings_d__8>::get(),
                            "System.Collections.Generic.IEnumerator<UnityEngine.InputSystem.InputBinding>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputBinding, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___get_bindings_d__8::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___get_bindings_d__8>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___get_bindings_d__8::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___get_bindings_d__8>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputBinding> ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___get_bindings_d__8::System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_InputBinding__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___get_bindings_d__8>::get(),
                            "System.Collections.Generic.IEnumerable<UnityEngine.InputSystem.InputBinding>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputBinding>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::IEnumerator ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___get_bindings_d__8::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___get_bindings_d__8>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___GetEnumerator_d__31._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___GetEnumerator_d__31::*)(int32_t)>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___GetEnumerator_d__31::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x28a82fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___GetEnumerator_d__31>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___GetEnumerator_d__31.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___GetEnumerator_d__31::*)()>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___GetEnumerator_d__31::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x28a9bd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___GetEnumerator_d__31>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___GetEnumerator_d__31.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___GetEnumerator_d__31::*)()>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___GetEnumerator_d__31::MoveNext)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x28a9bd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___GetEnumerator_d__31>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___GetEnumerator_d__31.System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputAction__get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputAction (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___GetEnumerator_d__31::*)()>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___GetEnumerator_d__31::System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputAction__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28a9d50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___GetEnumerator_d__31>::get(),
                            "System.Collections.Generic.IEnumerator<UnityEngine.InputSystem.InputAction>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___GetEnumerator_d__31.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___GetEnumerator_d__31::*)()>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___GetEnumerator_d__31::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x28a9d58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___GetEnumerator_d__31>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___GetEnumerator_d__31.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___GetEnumerator_d__31::*)()>(&::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___GetEnumerator_d__31::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28a9d98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___GetEnumerator_d__31>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputAction>
constexpr  ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___GetEnumerator_d__31::operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputAction>() const noexcept {
return ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputAction>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr  ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___GetEnumerator_d__31::operator ::System::Collections::IEnumerator() const noexcept {
return ::System::Collections::IEnumerator(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::IDisposable
constexpr  ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___GetEnumerator_d__31::operator ::System::IDisposable() const noexcept {
return ::System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___GetEnumerator_d__31::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___GetEnumerator_d__31::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___GetEnumerator_d__31::__set___2__current(::UnityEngine::InputSystem::InputAction value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::InputAction, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::InputSystem::InputAction>(value));
}
constexpr ::UnityEngine::InputSystem::InputAction ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___GetEnumerator_d__31::__get___2__current() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputAction, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___GetEnumerator_d__31::__set___4__this(::UnityEngine::InputSystem::InputActionAsset value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::InputActionAsset, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::InputSystem::InputActionAsset>(value));
}
constexpr ::UnityEngine::InputSystem::InputActionAsset ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___GetEnumerator_d__31::__get___4__this() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputActionAsset, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___GetEnumerator_d__31::__set__i_5__2(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___GetEnumerator_d__31::__get__i_5__2() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___GetEnumerator_d__31::__set__actions_5__3(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputAction> value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputAction>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputAction>>(value));
}
constexpr ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputAction> ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___GetEnumerator_d__31::__get__actions_5__3() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputAction>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___GetEnumerator_d__31::__set__actionCount_5__4(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___GetEnumerator_d__31::__get__actionCount_5__4() const {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___GetEnumerator_d__31::__set__n_5__5(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x44>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___GetEnumerator_d__31::__get__n_5__5() const {
return ::cordl_internals::getInstanceField<int32_t, 0x44>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___GetEnumerator_d__31::____UnityEngine__InputSystem__InputActionAsset___GetEnumerator_d__31(int32_t __1__state)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____UnityEngine__InputSystem__InputActionAsset___GetEnumerator_d__31>(__1__state))) {}
 void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___GetEnumerator_d__31::_ctor(int32_t __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___GetEnumerator_d__31>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, __1__state);
}
 void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___GetEnumerator_d__31::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___GetEnumerator_d__31>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___GetEnumerator_d__31::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___GetEnumerator_d__31>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::InputSystem::InputAction ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___GetEnumerator_d__31::System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputAction__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___GetEnumerator_d__31>::get(),
                            "System.Collections.Generic.IEnumerator<UnityEngine.InputSystem.InputAction>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputAction, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___GetEnumerator_d__31::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___GetEnumerator_d__31>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___GetEnumerator_d__31::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___GetEnumerator_d__31>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.get_enabled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputActionAsset::*)()>(&::UnityEngine::InputSystem::InputActionAsset::get_enabled)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x28a6290;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset>::get(),
                            "get_enabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.get_actionMaps
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputActionMap> (::UnityEngine::InputSystem::InputActionAsset::*)()>(&::UnityEngine::InputSystem::InputActionAsset::get_actionMaps)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x28a6428;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset>::get(),
                            "get_actionMaps",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.get_controlSchemes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControlScheme> (::UnityEngine::InputSystem::InputActionAsset::*)()>(&::UnityEngine::InputSystem::InputActionAsset::get_controlSchemes)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x28a6498;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset>::get(),
                            "get_controlSchemes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.get_bindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding> (::UnityEngine::InputSystem::InputActionAsset::*)()>(&::UnityEngine::InputSystem::InputActionAsset::get_bindings)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x28a64f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset>::get(),
                            "get_bindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.get_bindingMask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> (::UnityEngine::InputSystem::InputActionAsset::*)()>(&::UnityEngine::InputSystem::InputActionAsset::get_bindingMask)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x28a65a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset>::get(),
                            "get_bindingMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.set_bindingMask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionAsset::*)(::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>)>(&::UnityEngine::InputSystem::InputActionAsset::set_bindingMask)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x28a65b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset>::get(),
                            "set_bindingMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.get_devices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice>> (::UnityEngine::InputSystem::InputActionAsset::*)()>(&::UnityEngine::InputSystem::InputActionAsset::get_devices)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x28a6730;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset>::get(),
                            "get_devices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.set_devices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionAsset::*)(::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice>>)>(&::UnityEngine::InputSystem::InputActionAsset::set_devices)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x28a680c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset>::get(),
                            "set_devices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.get_Item
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputAction (::UnityEngine::InputSystem::InputActionAsset::*)(::StringW)>(&::UnityEngine::InputSystem::InputActionAsset::get_Item)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x28a69cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.ToJson
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::InputActionAsset::*)()>(&::UnityEngine::InputSystem::InputActionAsset::ToJson)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x28a6d84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset>::get(),
                            "ToJson",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.LoadFromJson
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionAsset::*)(::StringW)>(&::UnityEngine::InputSystem::InputActionAsset::LoadFromJson)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x28a71a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset>::get(),
                            "LoadFromJson",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.FromJson
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputActionAsset (*)(::StringW)>(&::UnityEngine::InputSystem::InputActionAsset::FromJson)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x28a7328;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset>::get(),
                            "FromJson",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.FindAction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputAction (::UnityEngine::InputSystem::InputActionAsset::*)(::StringW, bool)>(&::UnityEngine::InputSystem::InputActionAsset::FindAction)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x28a6a54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset>::get(),
                            "FindAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.FindBinding
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::InputActionAsset::*)(::UnityEngine::InputSystem::InputBinding, ByRef<::UnityEngine::InputSystem::InputAction>)>(&::UnityEngine::InputSystem::InputActionAsset::FindBinding)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x28a7500;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset>::get(),
                            "FindBinding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::InputAction>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.FindActionMap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputActionMap (::UnityEngine::InputSystem::InputActionAsset::*)(::StringW, bool)>(&::UnityEngine::InputSystem::InputActionAsset::FindActionMap)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x28a76cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset>::get(),
                            "FindActionMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.FindActionMap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputActionMap (::UnityEngine::InputSystem::InputActionAsset::*)(::System::Guid)>(&::UnityEngine::InputSystem::InputActionAsset::FindActionMap)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x28a78e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset>::get(),
                            "FindActionMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.FindAction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputAction (::UnityEngine::InputSystem::InputActionAsset::*)(::System::Guid)>(&::UnityEngine::InputSystem::InputActionAsset::FindAction)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x28a796c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset>::get(),
                            "FindAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.FindControlSchemeIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::InputActionAsset::*)(::StringW)>(&::UnityEngine::InputSystem::InputActionAsset::FindControlSchemeIndex)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x28a7a30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset>::get(),
                            "FindControlSchemeIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.FindControlScheme
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::UnityEngine::InputSystem::InputControlScheme> (::UnityEngine::InputSystem::InputActionAsset::*)(::StringW)>(&::UnityEngine::InputSystem::InputActionAsset::FindControlScheme)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x28a7b0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset>::get(),
                            "FindControlScheme",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.IsUsableWithDevice
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputActionAsset::*)(::UnityEngine::InputSystem::InputDevice)>(&::UnityEngine::InputSystem::InputActionAsset::IsUsableWithDevice)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x28a7c3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset>::get(),
                            "IsUsableWithDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.Enable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionAsset::*)()>(&::UnityEngine::InputSystem::InputActionAsset::Enable)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x28a7ec8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset>::get(),
                            "Enable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.Disable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionAsset::*)()>(&::UnityEngine::InputSystem::InputActionAsset::Disable)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x28a8074;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset>::get(),
                            "Disable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.Contains
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputActionAsset::*)(::UnityEngine::InputSystem::InputAction)>(&::UnityEngine::InputSystem::InputActionAsset::Contains)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x28a8208;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset>::get(),
                            "Contains",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputAction> (::UnityEngine::InputSystem::InputActionAsset::*)()>(&::UnityEngine::InputSystem::InputActionAsset::GetEnumerator)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x28a8294;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.System_Collections_IEnumerable_GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator (::UnityEngine::InputSystem::InputActionAsset::*)()>(&::UnityEngine::InputSystem::InputActionAsset::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x28a8324;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.MarkAsDirty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionAsset::*)()>(&::UnityEngine::InputSystem::InputActionAsset::MarkAsDirty)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x28a8328;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset>::get(),
                            "MarkAsDirty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.OnWantToChangeSetup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionAsset::*)()>(&::UnityEngine::InputSystem::InputActionAsset::OnWantToChangeSetup)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x28a832c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset>::get(),
                            "OnWantToChangeSetup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.OnSetupChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionAsset::*)()>(&::UnityEngine::InputSystem::InputActionAsset::OnSetupChanged)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x28a8648;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset>::get(),
                            "OnSetupChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.ReResolveIfNecessary
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionAsset::*)(bool)>(&::UnityEngine::InputSystem::InputActionAsset::ReResolveIfNecessary)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x28a66f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset>::get(),
                            "ReResolveIfNecessary",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.ResolveBindingsIfNecessary
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionAsset::*)()>(&::UnityEngine::InputSystem::InputActionAsset::ResolveBindingsIfNecessary)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x28a88a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset>::get(),
                            "ResolveBindingsIfNecessary",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionAsset::*)()>(&::UnityEngine::InputSystem::InputActionAsset::OnDestroy)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x28a8944;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionAsset::*)()>(&::UnityEngine::InputSystem::InputActionAsset::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28a896c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::UnityEngine::InputSystem::IInputActionCollection2
constexpr  ::UnityEngine::InputSystem::InputActionAsset::operator ::UnityEngine::InputSystem::IInputActionCollection2() const noexcept {
return ::UnityEngine::InputSystem::IInputActionCollection2(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::UnityEngine::InputSystem::IInputActionCollection
constexpr  ::UnityEngine::InputSystem::InputActionAsset::operator ::UnityEngine::InputSystem::IInputActionCollection() const noexcept {
return ::UnityEngine::InputSystem::IInputActionCollection(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputAction>
constexpr  ::UnityEngine::InputSystem::InputActionAsset::operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputAction>() const noexcept {
return ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputAction>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr  ::UnityEngine::InputSystem::InputActionAsset::operator ::System::Collections::IEnumerable() const noexcept {
return ::System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::InputActionAsset::__set_m_ActionMaps(::ArrayW<::UnityEngine::InputSystem::InputActionMap> value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::InputSystem::InputActionMap>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::UnityEngine::InputSystem::InputActionMap>>(value));
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputActionMap> ::UnityEngine::InputSystem::InputActionAsset::__get_m_ActionMaps() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::InputSystem::InputActionMap>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::InputActionAsset::__set_m_ControlSchemes(::ArrayW<::UnityEngine::InputSystem::InputControlScheme> value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::InputSystem::InputControlScheme>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::UnityEngine::InputSystem::InputControlScheme>>(value));
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputControlScheme> ::UnityEngine::InputSystem::InputActionAsset::__get_m_ControlSchemes() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::InputSystem::InputControlScheme>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::InputActionAsset::__set_m_SharedStateForAllMaps(::UnityEngine::InputSystem::InputActionState value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::InputActionState, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::InputSystem::InputActionState>(value));
}
constexpr ::UnityEngine::InputSystem::InputActionState ::UnityEngine::InputSystem::InputActionAsset::__get_m_SharedStateForAllMaps() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputActionState, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::InputActionAsset::__set_m_BindingMask(::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> value)  {
::cordl_internals::setInstanceField<::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>>(value));
}
constexpr ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> ::UnityEngine::InputSystem::InputActionAsset::__get_m_BindingMask() const {
return ::cordl_internals::getInstanceField<::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::InputActionAsset::__set_m_ParameterOverridesCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::InputSystem::InputActionAsset::__get_m_ParameterOverridesCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::InputActionAsset::__set_m_ParameterOverrides(::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride> value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride>, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride>>(value));
}
constexpr ::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride> ::UnityEngine::InputSystem::InputActionAsset::__get_m_ParameterOverrides() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride>, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::InputActionAsset::__set_m_Devices(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__DeviceArray value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__DeviceArray, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__DeviceArray>(value));
}
constexpr ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__DeviceArray ::UnityEngine::InputSystem::InputActionAsset::__get_m_Devices() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__DeviceArray, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
 bool ::UnityEngine::InputSystem::InputActionAsset::get_enabled()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset>::get(),
                            "get_enabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputActionMap> ::UnityEngine::InputSystem::InputActionAsset::get_actionMaps()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset>::get(),
                            "get_actionMaps",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputActionMap>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControlScheme> ::UnityEngine::InputSystem::InputActionAsset::get_controlSchemes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset>::get(),
                            "get_controlSchemes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControlScheme>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding> ::UnityEngine::InputSystem::InputActionAsset::get_bindings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset>::get(),
                            "get_bindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> ::UnityEngine::InputSystem::InputActionAsset::get_bindingMask()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset>::get(),
                            "get_bindingMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::InputSystem::InputActionAsset::set_bindingMask(::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset>::get(),
                            "set_bindingMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice>> ::UnityEngine::InputSystem::InputActionAsset::get_devices()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset>::get(),
                            "get_devices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice>>, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::InputSystem::InputActionAsset::set_devices(::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice>> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset>::get(),
                            "set_devices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::UnityEngine::InputSystem::InputAction ::UnityEngine::InputSystem::InputActionAsset::get_Item(::StringW actionNameOrId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputAction, false>(const_cast<void*>(instance), ___internal_method, actionNameOrId);
}
 ::StringW ::UnityEngine::InputSystem::InputActionAsset::ToJson()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset>::get(),
                            "ToJson",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::InputSystem::InputActionAsset::LoadFromJson(::StringW json)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset>::get(),
                            "LoadFromJson",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, json);
}
 ::UnityEngine::InputSystem::InputActionAsset ::UnityEngine::InputSystem::InputActionAsset::FromJson(::StringW json)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset>::get(),
                            "FromJson",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionAsset, false>(nullptr, ___internal_method, json);
}
/// @param throwIfNotFound: bool (default: false)
 ::UnityEngine::InputSystem::InputAction ::UnityEngine::InputSystem::InputActionAsset::FindAction(::StringW actionNameOrId, bool throwIfNotFound)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset>::get(),
                            "FindAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputAction, false>(const_cast<void*>(instance), ___internal_method, actionNameOrId, throwIfNotFound);
}
 int32_t ::UnityEngine::InputSystem::InputActionAsset::FindBinding(::UnityEngine::InputSystem::InputBinding mask, ByRef<::UnityEngine::InputSystem::InputAction> action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset>::get(),
                            "FindBinding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::InputAction>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, mask, action);
}
/// @param throwIfNotFound: bool (default: false)
 ::UnityEngine::InputSystem::InputActionMap ::UnityEngine::InputSystem::InputActionAsset::FindActionMap(::StringW nameOrId, bool throwIfNotFound)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset>::get(),
                            "FindActionMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionMap, false>(const_cast<void*>(instance), ___internal_method, nameOrId, throwIfNotFound);
}
 ::UnityEngine::InputSystem::InputActionMap ::UnityEngine::InputSystem::InputActionAsset::FindActionMap(::System::Guid id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset>::get(),
                            "FindActionMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionMap, false>(const_cast<void*>(instance), ___internal_method, id);
}
 ::UnityEngine::InputSystem::InputAction ::UnityEngine::InputSystem::InputActionAsset::FindAction(::System::Guid guid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset>::get(),
                            "FindAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputAction, false>(const_cast<void*>(instance), ___internal_method, guid);
}
 int32_t ::UnityEngine::InputSystem::InputActionAsset::FindControlSchemeIndex(::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset>::get(),
                            "FindControlSchemeIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, name);
}
 ::System::Nullable_1<::UnityEngine::InputSystem::InputControlScheme> ::UnityEngine::InputSystem::InputActionAsset::FindControlScheme(::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset>::get(),
                            "FindControlScheme",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::InputSystem::InputControlScheme>, false>(const_cast<void*>(instance), ___internal_method, name);
}
 bool ::UnityEngine::InputSystem::InputActionAsset::IsUsableWithDevice(::UnityEngine::InputSystem::InputDevice device)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset>::get(),
                            "IsUsableWithDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, device);
}
 void ::UnityEngine::InputSystem::InputActionAsset::Enable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset>::get(),
                            "Enable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::InputSystem::InputActionAsset::Disable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset>::get(),
                            "Disable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::UnityEngine::InputSystem::InputActionAsset::Contains(::UnityEngine::InputSystem::InputAction action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset>::get(),
                            "Contains",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, action);
}
 ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputAction> ::UnityEngine::InputSystem::InputActionAsset::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputAction>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::IEnumerator ::UnityEngine::InputSystem::InputActionAsset::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::InputSystem::InputActionAsset::MarkAsDirty()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset>::get(),
                            "MarkAsDirty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::InputSystem::InputActionAsset::OnWantToChangeSetup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset>::get(),
                            "OnWantToChangeSetup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::InputSystem::InputActionAsset::OnSetupChanged()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset>::get(),
                            "OnSetupChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::InputSystem::InputActionAsset::ReResolveIfNecessary(bool fullResolve)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset>::get(),
                            "ReResolveIfNecessary",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, fullResolve);
}
 void ::UnityEngine::InputSystem::InputActionAsset::ResolveBindingsIfNecessary()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset>::get(),
                            "ResolveBindingsIfNecessary",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::InputSystem::InputActionAsset::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::UnityEngine::InputSystem::InputActionAsset::InputActionAsset()  : ::UnityEngine::ScriptableObject(THROW_UNLESS(::il2cpp_utils::New<InputActionAsset>())) {}
 void ::UnityEngine::InputSystem::InputActionAsset::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
