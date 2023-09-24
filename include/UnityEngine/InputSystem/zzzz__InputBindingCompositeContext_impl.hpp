#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBindingCompositeContext_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionState_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBindingCompositeContext_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext__PartBinding.get_part
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext__PartBinding::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext__PartBinding::get_part)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c3d94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext__PartBinding>::get(),
                            "get_part",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext__PartBinding.set_part
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext__PartBinding::*)(int32_t)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext__PartBinding::set_part)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c3d9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext__PartBinding>::get(),
                            "set_part",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext__PartBinding.get_control
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::InputControl (UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext__PartBinding::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext__PartBinding::get_control)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c3da4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext__PartBinding>::get(),
                            "get_control",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext__PartBinding.set_control
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext__PartBinding::*)(UnityEngine::InputSystem::InputControl)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext__PartBinding::set_control)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c3dac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext__PartBinding>::get(),
                            "set_control",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "_part_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_control_k__BackingField", ty: "UnityEngine::InputSystem::InputControl", modifiers: "", def_value: Some("csnull") }]
constexpr UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext__PartBinding::UnityEngine__InputSystem__InputBindingCompositeContext__PartBinding(int32_t _part_k__BackingField, UnityEngine::InputSystem::InputControl _control_k__BackingField) noexcept : ::bs_hook::ValueTypeWrapper() {this->_part_k__BackingField = _part_k__BackingField;
this->_control_k__BackingField = _control_k__BackingField;
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext__PartBinding::__set__part_k__BackingField(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext__PartBinding::__get__part_k__BackingField() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext__PartBinding::__set__control_k__BackingField(UnityEngine::InputSystem::InputControl value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::InputControl, 0x8>(this->__instance, std::forward<UnityEngine::InputSystem::InputControl>(value));
}
constexpr UnityEngine::InputSystem::InputControl UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext__PartBinding::__get__control_k__BackingField() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::InputControl, 0x8>(this->__instance);
}
 int32_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext__PartBinding::get_part()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext__PartBinding>::get(),
                            "get_part",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext__PartBinding::set_part(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext__PartBinding>::get(),
                            "set_part",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 UnityEngine::InputSystem::InputControl UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext__PartBinding::get_control()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext__PartBinding>::get(),
                            "get_control",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::InputControl, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext__PartBinding::set_control(UnityEngine::InputSystem::InputControl value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext__PartBinding>::get(),
                            "set_control",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2::*)(int32_t)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x28c3c48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x28c3db4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2::MoveNext)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x28c3db8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2.System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputBindingCompositeContext_PartBinding__get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext__PartBinding (UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2::System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputBindingCompositeContext_PartBinding__get_Current)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x28c3eb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2>::get(),
                            "System.Collections.Generic.IEnumerator<UnityEngine.InputSystem.InputBindingCompositeContext.PartBinding>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x28c3ec4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x28c3f04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2.System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_InputBindingCompositeContext_PartBinding__GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerator_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext__PartBinding> (UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2::System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_InputBindingCompositeContext_PartBinding__GetEnumerator)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x28c3f60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2>::get(),
                            "System.Collections.Generic.IEnumerable<UnityEngine.InputSystem.InputBindingCompositeContext.PartBinding>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2.System_Collections_IEnumerable_GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator (UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x28c4010;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext__PartBinding>
constexpr  UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2::operator System::Collections::Generic::IEnumerable_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext__PartBinding>() const noexcept {
return System::Collections::Generic::IEnumerable_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext__PartBinding>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerable
constexpr  UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2::operator System::Collections::IEnumerable() const noexcept {
return System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext__PartBinding>
constexpr  UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2::operator System::Collections::Generic::IEnumerator_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext__PartBinding>() const noexcept {
return System::Collections::Generic::IEnumerator_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext__PartBinding>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerator
constexpr  UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2::operator System::Collections::IEnumerator() const noexcept {
return System::Collections::IEnumerator(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IDisposable
constexpr  UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2::__set___2__current(UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext__PartBinding value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext__PartBinding, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext__PartBinding>(value));
}
constexpr UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext__PartBinding UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2::__get___2__current() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext__PartBinding, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2::__set___l__initialThreadId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2::__get___l__initialThreadId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2::__set___4__this(UnityEngine::InputSystem::InputBindingCompositeContext value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::InputBindingCompositeContext, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::InputSystem::InputBindingCompositeContext>(value));
}
constexpr UnityEngine::InputSystem::InputBindingCompositeContext UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2::__get___4__this() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::InputBindingCompositeContext, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2::__set___3____4__this(UnityEngine::InputSystem::InputBindingCompositeContext value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::InputBindingCompositeContext, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::InputSystem::InputBindingCompositeContext>(value));
}
constexpr UnityEngine::InputSystem::InputBindingCompositeContext UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2::__get___3____4__this() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::InputBindingCompositeContext, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2::__set__totalBindingCount_5__2(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2::__get__totalBindingCount_5__2() const {
return ::cordl_internals::getInstanceField<int32_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2::__set__bindingIndex_5__3(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x54>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2::__get__bindingIndex_5__3() const {
return ::cordl_internals::getInstanceField<int32_t, 0x54>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2::__set__bindingState_5__4(UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState>(value));
}
constexpr UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2::__get__bindingState_5__4() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2::__set__controlStartIndex_5__5(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2::__get__controlStartIndex_5__5() const {
return ::cordl_internals::getInstanceField<int32_t, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2::__set__i_5__6(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x7c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2::__get__i_5__6() const {
return ::cordl_internals::getInstanceField<int32_t, 0x7c>(this->::bs_hook::Il2CppWrapperType::instance);
}
 UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2 UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2::New_ctor(int32_t __1__state)  {
UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2 o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2>(__1__state))};
return o;
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2::_ctor(int32_t __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, __1__state);
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext__PartBinding UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2::System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputBindingCompositeContext_PartBinding__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2>::get(),
                            "System.Collections.Generic.IEnumerator<UnityEngine.InputSystem.InputBindingCompositeContext.PartBinding>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext__PartBinding, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::IEnumerator_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext__PartBinding> UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2::System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_InputBindingCompositeContext_PartBinding__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2>::get(),
                            "System.Collections.Generic.IEnumerable<UnityEngine.InputSystem.InputBindingCompositeContext.PartBinding>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerator_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext__PartBinding>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::IEnumerator UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: UnityEngine::InputSystem::InputBindingCompositeContext.get_controls
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext__PartBinding> (UnityEngine::InputSystem::InputBindingCompositeContext::*)()>(&UnityEngine::InputSystem::InputBindingCompositeContext::get_controls)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x28c3bcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputBindingCompositeContext>::get(),
                            "get_controls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputBindingCompositeContext.EvaluateMagnitude
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (UnityEngine::InputSystem::InputBindingCompositeContext::*)(int32_t)>(&UnityEngine::InputSystem::InputBindingCompositeContext::EvaluateMagnitude)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x28c3c7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputBindingCompositeContext>::get(),
                            "EvaluateMagnitude",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputBindingCompositeContext.ReadValueAsButton
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::InputBindingCompositeContext::*)(int32_t)>(&UnityEngine::InputSystem::InputBindingCompositeContext::ReadValueAsButton)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x28c3ca0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputBindingCompositeContext>::get(),
                            "ReadValueAsButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputBindingCompositeContext.ReadValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputBindingCompositeContext::*)(int32_t, void*, int32_t)>(&UnityEngine::InputSystem::InputBindingCompositeContext::ReadValue)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x28c3d28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputBindingCompositeContext>::get(),
                            "ReadValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputBindingCompositeContext.ReadValueAsObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (UnityEngine::InputSystem::InputBindingCompositeContext::*)(int32_t)>(&UnityEngine::InputSystem::InputBindingCompositeContext::ReadValueAsObject)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x28c3d4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputBindingCompositeContext>::get(),
                            "ReadValueAsObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputBindingCompositeContext.GetPressTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (UnityEngine::InputSystem::InputBindingCompositeContext::*)(int32_t)>(&UnityEngine::InputSystem::InputBindingCompositeContext::GetPressTime)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x28c3d70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputBindingCompositeContext>::get(),
                            "GetPressTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "m_State", ty: "UnityEngine::InputSystem::InputActionState", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_BindingIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::InputSystem::InputBindingCompositeContext::InputBindingCompositeContext(UnityEngine::InputSystem::InputActionState m_State, int32_t m_BindingIndex) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_State = m_State;
this->m_BindingIndex = m_BindingIndex;
}
constexpr void UnityEngine::InputSystem::InputBindingCompositeContext::__set_m_State(UnityEngine::InputSystem::InputActionState value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::InputActionState, 0x0>(this->__instance, std::forward<UnityEngine::InputSystem::InputActionState>(value));
}
constexpr UnityEngine::InputSystem::InputActionState UnityEngine::InputSystem::InputBindingCompositeContext::__get_m_State() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::InputActionState, 0x0>(this->__instance);
}
constexpr void UnityEngine::InputSystem::InputBindingCompositeContext::__set_m_BindingIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::InputBindingCompositeContext::__get_m_BindingIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
 System::Collections::Generic::IEnumerable_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext__PartBinding> UnityEngine::InputSystem::InputBindingCompositeContext::get_controls()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputBindingCompositeContext>::get(),
                            "get_controls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerable_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext__PartBinding>, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 float_t UnityEngine::InputSystem::InputBindingCompositeContext::EvaluateMagnitude(int32_t partNumber)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputBindingCompositeContext>::get(),
                            "EvaluateMagnitude",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, partNumber);
}
template<typename TValue>
 TValue UnityEngine::InputSystem::InputBindingCompositeContext::ReadValue(int32_t partNumber)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputBindingCompositeContext>::get(),
                        "ReadValue",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, partNumber);
}
template<typename TValue>
 TValue UnityEngine::InputSystem::InputBindingCompositeContext::ReadValue(int32_t partNumber, ByRef<UnityEngine::InputSystem::InputControl> sourceControl)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputBindingCompositeContext>::get(),
                        "ReadValue",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::InputControl>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, partNumber, sourceControl);
}
/// @param comparer: TComparer (default: csnull)
template<typename TValue,typename TComparer>
 TValue UnityEngine::InputSystem::InputBindingCompositeContext::ReadValue(int32_t partNumber, TComparer comparer)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputBindingCompositeContext>::get(),
                        "ReadValue",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TComparer>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TComparer>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TComparer>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, partNumber, comparer);
}
/// @param comparer: TComparer (default: csnull)
template<typename TValue,typename TComparer>
 TValue UnityEngine::InputSystem::InputBindingCompositeContext::ReadValue(int32_t partNumber, ByRef<UnityEngine::InputSystem::InputControl> sourceControl, TComparer comparer)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputBindingCompositeContext>::get(),
                        "ReadValue",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TComparer>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::InputControl>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TComparer>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TComparer>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, partNumber, sourceControl, comparer);
}
 bool UnityEngine::InputSystem::InputBindingCompositeContext::ReadValueAsButton(int32_t partNumber)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputBindingCompositeContext>::get(),
                            "ReadValueAsButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, partNumber);
}
 void UnityEngine::InputSystem::InputBindingCompositeContext::ReadValue(int32_t partNumber, void* buffer, int32_t bufferSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputBindingCompositeContext>::get(),
                            "ReadValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, partNumber, buffer, bufferSize);
}
 ::bs_hook::Il2CppWrapperType UnityEngine::InputSystem::InputBindingCompositeContext::ReadValueAsObject(int32_t partNumber)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputBindingCompositeContext>::get(),
                            "ReadValueAsObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, partNumber);
}
 double_t UnityEngine::InputSystem::InputBindingCompositeContext::GetPressTime(int32_t partNumber)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputBindingCompositeContext>::get(),
                            "GetPressTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, partNumber);
}
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext__DefaultComparer_1<float_t>.Compare
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext__DefaultComparer_1<float_t>::*)(float_t, float_t)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext__DefaultComparer_1<float_t>::Compare)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext__DefaultComparer_1<float_t>>::get(),
                            "Compare",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Collections::Generic::IComparer_1<float_t>
constexpr  UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext__DefaultComparer_1<float_t>::operator System::Collections::Generic::IComparer_1<float_t>() const {
return System::Collections::Generic::IComparer_1<float_t>(::cordl_internals::Box(this).convert());
}
 int32_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext__DefaultComparer_1<float_t>::Compare(float_t x, float_t y)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext__DefaultComparer_1<float_t>>::get(),
                            "Compare",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, x, y);
}
/// @brief Convert operator to System::Collections::Generic::IComparer_1<TValue>
constexpr  UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext__DefaultComparer_1<TValue>::operator System::Collections::Generic::IComparer_1<TValue>() const {
return System::Collections::Generic::IComparer_1<TValue>(::cordl_internals::Box(this).convert());
}
 int32_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext__DefaultComparer_1<TValue>::Compare(TValue x, TValue y)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext__DefaultComparer_1<TValue>>::get(),
                            "Compare",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, x, y);
}
