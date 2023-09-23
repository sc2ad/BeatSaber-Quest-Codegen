#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlExtensions_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventPtr_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_1_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InternedString_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputStateBlock_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__PrimitiveValue_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__Enumerate::UnityEngine__InputSystem__InputControlExtensions__Enumerate(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__Enumerate::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__Enumerate::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__Enumerate  UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__Enumerate::IgnoreControlsInDefaultState{1};
constexpr UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__Enumerate  UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__Enumerate::IgnoreControlsInCurrentState{2};
constexpr UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__Enumerate  UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__Enumerate::IncludeSyntheticControls{4};
constexpr UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__Enumerate  UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__Enumerate::IncludeNoisyControls{8};
constexpr UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__Enumerate  UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__Enumerate::IncludeNonLeafControls{16};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlCollection.get_eventPtr
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::LowLevel::InputEventPtr (UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlCollection::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlCollection::get_eventPtr)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28d2cd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlCollection>::get(),
                            "get_eventPtr",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlCollection.GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator (UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlCollection::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlCollection::GetEnumerator)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x28d25bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlCollection>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlCollection.System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_InputControl__GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerator_1<UnityEngine::InputSystem::InputControl> (UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlCollection::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlCollection::System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_InputControl__GetEnumerator)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x28d2e34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlCollection>::get(),
                            "System.Collections.Generic.IEnumerable<UnityEngine.InputSystem.InputControl>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlCollection.System_Collections_IEnumerable_GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator (UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlCollection::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlCollection::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x28d2ed8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlCollection>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<UnityEngine::InputSystem::InputControl>
constexpr  UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlCollection::operator System::Collections::Generic::IEnumerable_1<UnityEngine::InputSystem::InputControl>() const {
return System::Collections::Generic::IEnumerable_1<UnityEngine::InputSystem::InputControl>(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::Collections::IEnumerable
constexpr  UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlCollection::operator System::Collections::IEnumerable() const {
return System::Collections::IEnumerable(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "m_Device", ty: "UnityEngine::InputSystem::InputDevice", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_EventPtr", ty: "UnityEngine::InputSystem::LowLevel::InputEventPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Flags", ty: "UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__Enumerate", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_MagnitudeThreshold", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlCollection::UnityEngine__InputSystem__InputControlExtensions__InputEventControlCollection(UnityEngine::InputSystem::InputDevice m_Device, UnityEngine::InputSystem::LowLevel::InputEventPtr m_EventPtr, UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__Enumerate m_Flags, float_t m_MagnitudeThreshold) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_Device = m_Device;
this->m_EventPtr = m_EventPtr;
this->m_Flags = m_Flags;
this->m_MagnitudeThreshold = m_MagnitudeThreshold;
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlCollection::__set_m_Device(UnityEngine::InputSystem::InputDevice value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::InputDevice, 0x0>(this->__instance, std::forward<UnityEngine::InputSystem::InputDevice>(value));
}
constexpr UnityEngine::InputSystem::InputDevice UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlCollection::__get_m_Device() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::InputDevice, 0x0>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlCollection::__set_m_EventPtr(UnityEngine::InputSystem::LowLevel::InputEventPtr value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::LowLevel::InputEventPtr, 0x8>(this->__instance, std::forward<UnityEngine::InputSystem::LowLevel::InputEventPtr>(value));
}
constexpr UnityEngine::InputSystem::LowLevel::InputEventPtr UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlCollection::__get_m_EventPtr() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::LowLevel::InputEventPtr, 0x8>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlCollection::__set_m_Flags(UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__Enumerate value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__Enumerate, 0x10>(this->__instance, std::forward<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__Enumerate>(value));
}
constexpr UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__Enumerate UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlCollection::__get_m_Flags() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__Enumerate, 0x10>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlCollection::__set_m_MagnitudeThreshold(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x14>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlCollection::__get_m_MagnitudeThreshold() const {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this->__instance);
}
 UnityEngine::InputSystem::LowLevel::InputEventPtr UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlCollection::get_eventPtr()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlCollection>::get(),
                            "get_eventPtr",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::LowLevel::InputEventPtr, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlCollection::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlCollection>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 System::Collections::Generic::IEnumerator_1<UnityEngine::InputSystem::InputControl> UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlCollection::System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_InputControl__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlCollection>::get(),
                            "System.Collections.Generic.IEnumerable<UnityEngine.InputSystem.InputControl>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerator_1<UnityEngine::InputSystem::InputControl>, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 System::Collections::IEnumerator UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlCollection::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlCollection>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerator, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator::*)(UnityEngine::InputSystem::LowLevel::InputEventPtr, UnityEngine::InputSystem::InputDevice, UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__Enumerate, float_t)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x28d2cd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::InputEventPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__Enumerate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator.CheckDefault
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator::*)(uint32_t)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator::CheckDefault)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x28d33f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator>::get(),
                            "CheckDefault",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator.CheckCurrent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator::*)(uint32_t)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator::CheckCurrent)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x28d3418;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator>::get(),
                            "CheckCurrent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator::MoveNext)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x28d25e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator::Reset)> {
  constexpr static std::size_t size = 0x478;
  constexpr static std::size_t addrs = 0x28d2f7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator::Dispose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28d3454;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator.get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::InputControl (UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator::get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28d345c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator>::get(),
                            "get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28d3464;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<UnityEngine::InputSystem::InputControl>
constexpr  UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator::operator System::Collections::Generic::IEnumerator_1<UnityEngine::InputSystem::InputControl>() const {
return System::Collections::Generic::IEnumerator_1<UnityEngine::InputSystem::InputControl>(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::Collections::IEnumerator
constexpr  UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator::operator System::Collections::IEnumerator() const {
return System::Collections::IEnumerator(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::IDisposable
constexpr  UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator::operator System::IDisposable() const {
return System::IDisposable(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "m_Flags", ty: "UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__Enumerate", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Device", ty: "UnityEngine::InputSystem::InputDevice", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_StateOffsetToControlIndex", ty: "::ArrayW<uint32_t>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_StateOffsetToControlIndexLength", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AllControls", ty: "::ArrayW<UnityEngine::InputSystem::InputControl>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_DefaultState", ty: "void*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_CurrentState", ty: "void*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_NoiseMask", ty: "void*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_EventPtr", ty: "UnityEngine::InputSystem::LowLevel::InputEventPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_CurrentControl", ty: "UnityEngine::InputSystem::InputControl", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_CurrentIndexInStateOffsetToControlIndexMap", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_CurrentControlStateBitOffset", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_EventState", ty: "void*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_CurrentBitOffset", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_EndBitOffset", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_MagnitudeThreshold", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator(UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__Enumerate m_Flags, UnityEngine::InputSystem::InputDevice m_Device, ::ArrayW<uint32_t> m_StateOffsetToControlIndex, int32_t m_StateOffsetToControlIndexLength, ::ArrayW<UnityEngine::InputSystem::InputControl> m_AllControls, void* m_DefaultState, void* m_CurrentState, void* m_NoiseMask, UnityEngine::InputSystem::LowLevel::InputEventPtr m_EventPtr, UnityEngine::InputSystem::InputControl m_CurrentControl, int32_t m_CurrentIndexInStateOffsetToControlIndexMap, uint32_t m_CurrentControlStateBitOffset, void* m_EventState, uint32_t m_CurrentBitOffset, uint32_t m_EndBitOffset, float_t m_MagnitudeThreshold) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_Flags = m_Flags;
this->m_Device = m_Device;
this->m_StateOffsetToControlIndex = m_StateOffsetToControlIndex;
this->m_StateOffsetToControlIndexLength = m_StateOffsetToControlIndexLength;
this->m_AllControls = m_AllControls;
this->m_DefaultState = m_DefaultState;
this->m_CurrentState = m_CurrentState;
this->m_NoiseMask = m_NoiseMask;
this->m_EventPtr = m_EventPtr;
this->m_CurrentControl = m_CurrentControl;
this->m_CurrentIndexInStateOffsetToControlIndexMap = m_CurrentIndexInStateOffsetToControlIndexMap;
this->m_CurrentControlStateBitOffset = m_CurrentControlStateBitOffset;
this->m_EventState = m_EventState;
this->m_CurrentBitOffset = m_CurrentBitOffset;
this->m_EndBitOffset = m_EndBitOffset;
this->m_MagnitudeThreshold = m_MagnitudeThreshold;
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator::__set_m_Flags(UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__Enumerate value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__Enumerate, 0x0>(this->__instance, std::forward<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__Enumerate>(value));
}
constexpr UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__Enumerate UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator::__get_m_Flags() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__Enumerate, 0x0>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator::__set_m_Device(UnityEngine::InputSystem::InputDevice value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::InputDevice, 0x8>(this->__instance, std::forward<UnityEngine::InputSystem::InputDevice>(value));
}
constexpr UnityEngine::InputSystem::InputDevice UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator::__get_m_Device() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::InputDevice, 0x8>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator::__set_m_StateOffsetToControlIndex(::ArrayW<uint32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint32_t>, 0x10>(this->__instance, std::forward<::ArrayW<uint32_t>>(value));
}
constexpr ::ArrayW<uint32_t> UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator::__get_m_StateOffsetToControlIndex() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint32_t>, 0x10>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator::__set_m_StateOffsetToControlIndexLength(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator::__get_m_StateOffsetToControlIndexLength() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator::__set_m_AllControls(::ArrayW<UnityEngine::InputSystem::InputControl> value)  {
::cordl_internals::setInstanceField<::ArrayW<UnityEngine::InputSystem::InputControl>, 0x20>(this->__instance, std::forward<::ArrayW<UnityEngine::InputSystem::InputControl>>(value));
}
constexpr ::ArrayW<UnityEngine::InputSystem::InputControl> UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator::__get_m_AllControls() const {
return ::cordl_internals::getInstanceField<::ArrayW<UnityEngine::InputSystem::InputControl>, 0x20>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator::__set_m_DefaultState(void* value)  {
::cordl_internals::setInstanceField<void*, 0x28>(this->__instance, std::forward<void*>(value));
}
constexpr void* UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator::__get_m_DefaultState() const {
return ::cordl_internals::getInstanceField<void*, 0x28>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator::__set_m_CurrentState(void* value)  {
::cordl_internals::setInstanceField<void*, 0x30>(this->__instance, std::forward<void*>(value));
}
constexpr void* UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator::__get_m_CurrentState() const {
return ::cordl_internals::getInstanceField<void*, 0x30>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator::__set_m_NoiseMask(void* value)  {
::cordl_internals::setInstanceField<void*, 0x38>(this->__instance, std::forward<void*>(value));
}
constexpr void* UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator::__get_m_NoiseMask() const {
return ::cordl_internals::getInstanceField<void*, 0x38>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator::__set_m_EventPtr(UnityEngine::InputSystem::LowLevel::InputEventPtr value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::LowLevel::InputEventPtr, 0x40>(this->__instance, std::forward<UnityEngine::InputSystem::LowLevel::InputEventPtr>(value));
}
constexpr UnityEngine::InputSystem::LowLevel::InputEventPtr UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator::__get_m_EventPtr() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::LowLevel::InputEventPtr, 0x40>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator::__set_m_CurrentControl(UnityEngine::InputSystem::InputControl value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::InputControl, 0x48>(this->__instance, std::forward<UnityEngine::InputSystem::InputControl>(value));
}
constexpr UnityEngine::InputSystem::InputControl UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator::__get_m_CurrentControl() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::InputControl, 0x48>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator::__set_m_CurrentIndexInStateOffsetToControlIndexMap(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x50>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator::__get_m_CurrentIndexInStateOffsetToControlIndexMap() const {
return ::cordl_internals::getInstanceField<int32_t, 0x50>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator::__set_m_CurrentControlStateBitOffset(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x54>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator::__get_m_CurrentControlStateBitOffset() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x54>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator::__set_m_EventState(void* value)  {
::cordl_internals::setInstanceField<void*, 0x58>(this->__instance, std::forward<void*>(value));
}
constexpr void* UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator::__get_m_EventState() const {
return ::cordl_internals::getInstanceField<void*, 0x58>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator::__set_m_CurrentBitOffset(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x60>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator::__get_m_CurrentBitOffset() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x60>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator::__set_m_EndBitOffset(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x64>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator::__get_m_EndBitOffset() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x64>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator::__set_m_MagnitudeThreshold(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x68>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator::__get_m_MagnitudeThreshold() const {
return ::cordl_internals::getInstanceField<float_t, 0x68>(this->__instance);
}
/// @param magnitudeThreshold: float_t (default: 0)
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator::_ctor(UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, UnityEngine::InputSystem::InputDevice device, UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__Enumerate flags, float_t magnitudeThreshold)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::InputEventPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__Enumerate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, eventPtr, device, flags, magnitudeThreshold);
}
 bool UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator::CheckDefault(uint32_t numBits)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator>::get(),
                            "CheckDefault",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, numBits);
}
 bool UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator::CheckCurrent(uint32_t numBits)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator>::get(),
                            "CheckCurrent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, numBits);
}
 bool UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 UnityEngine::InputSystem::InputControl UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator::get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator>::get(),
                            "get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::InputControl, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder.get_control
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::InputControl (UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder::get_control)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28d346c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder>::get(),
                            "get_control",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder.set_control
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder::*)(UnityEngine::InputSystem::InputControl)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder::set_control)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28d3474;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder>::get(),
                            "set_control",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder.At
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder (UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder::*)(UnityEngine::InputSystem::InputDevice, int32_t)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder::At)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x28d347c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder>::get(),
                            "At",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder.WithParent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder (UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder::*)(UnityEngine::InputSystem::InputControl)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder::WithParent)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x28d3504;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder>::get(),
                            "WithParent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder.WithName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder (UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder::*)(::StringW)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder::WithName)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x28d3524;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder>::get(),
                            "WithName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder.WithDisplayName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder (UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder::*)(::StringW)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder::WithDisplayName)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x28d356c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder>::get(),
                            "WithDisplayName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder.WithShortDisplayName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder (UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder::*)(::StringW)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder::WithShortDisplayName)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x28d35bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder>::get(),
                            "WithShortDisplayName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder.WithLayout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder (UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder::*)(UnityEngine::InputSystem::Utilities::InternedString)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder::WithLayout)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x28d360c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder>::get(),
                            "WithLayout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder.WithUsages
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder (UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder::*)(int32_t, int32_t)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder::WithUsages)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x28d362c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder>::get(),
                            "WithUsages",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder.WithAliases
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder (UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder::*)(int32_t, int32_t)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder::WithAliases)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x28d364c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder>::get(),
                            "WithAliases",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder.WithChildren
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder (UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder::*)(int32_t, int32_t)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder::WithChildren)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x28d366c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder>::get(),
                            "WithChildren",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder.WithStateBlock
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder (UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder::*)(UnityEngine::InputSystem::LowLevel::InputStateBlock)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder::WithStateBlock)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x28d368c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder>::get(),
                            "WithStateBlock",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::InputStateBlock>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder.WithDefaultState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder (UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder::*)(UnityEngine::InputSystem::Utilities::PrimitiveValue)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder::WithDefaultState)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x28d36ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder>::get(),
                            "WithDefaultState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::PrimitiveValue>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder.WithMinAndMax
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder (UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder::*)(UnityEngine::InputSystem::Utilities::PrimitiveValue, UnityEngine::InputSystem::Utilities::PrimitiveValue)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder::WithMinAndMax)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x28d3704;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder>::get(),
                            "WithMinAndMax",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::PrimitiveValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::PrimitiveValue>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder.IsNoisy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder (UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder::*)(bool)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder::IsNoisy)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x28d3730;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder>::get(),
                            "IsNoisy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder.IsSynthetic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder (UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder::*)(bool)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder::IsSynthetic)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x28d3758;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder>::get(),
                            "IsSynthetic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder.DontReset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder (UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder::*)(bool)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder::DontReset)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x28d378c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder>::get(),
                            "DontReset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder.IsButton
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder (UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder::*)(bool)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder::IsButton)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x28d37f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder>::get(),
                            "IsButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder.Finish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder::Finish)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x28d3828;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder>::get(),
                            "Finish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "_control_k__BackingField", ty: "UnityEngine::InputSystem::InputControl", modifiers: "", def_value: Some("csnull") }]
constexpr UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder(UnityEngine::InputSystem::InputControl _control_k__BackingField) noexcept : ::bs_hook::ValueTypeWrapper() {this->_control_k__BackingField = _control_k__BackingField;
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder::__set__control_k__BackingField(UnityEngine::InputSystem::InputControl value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::InputControl, 0x0>(this->__instance, std::forward<UnityEngine::InputSystem::InputControl>(value));
}
constexpr UnityEngine::InputSystem::InputControl UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder::__get__control_k__BackingField() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::InputControl, 0x0>(this->__instance);
}
 UnityEngine::InputSystem::InputControl UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder::get_control()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder>::get(),
                            "get_control",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::InputControl, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder::set_control(UnityEngine::InputSystem::InputControl value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder>::get(),
                            "set_control",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder::At(UnityEngine::InputSystem::InputDevice device, int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder>::get(),
                            "At",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, device, index);
}
 UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder::WithParent(UnityEngine::InputSystem::InputControl parent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder>::get(),
                            "WithParent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, parent);
}
 UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder::WithName(::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder>::get(),
                            "WithName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, name);
}
 UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder::WithDisplayName(::StringW displayName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder>::get(),
                            "WithDisplayName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, displayName);
}
 UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder::WithShortDisplayName(::StringW shortDisplayName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder>::get(),
                            "WithShortDisplayName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, shortDisplayName);
}
 UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder::WithLayout(UnityEngine::InputSystem::Utilities::InternedString layout)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder>::get(),
                            "WithLayout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, layout);
}
 UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder::WithUsages(int32_t startIndex, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder>::get(),
                            "WithUsages",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, startIndex, count);
}
 UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder::WithAliases(int32_t startIndex, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder>::get(),
                            "WithAliases",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, startIndex, count);
}
 UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder::WithChildren(int32_t startIndex, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder>::get(),
                            "WithChildren",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, startIndex, count);
}
 UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder::WithStateBlock(UnityEngine::InputSystem::LowLevel::InputStateBlock stateBlock)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder>::get(),
                            "WithStateBlock",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::InputStateBlock>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateBlock);
}
 UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder::WithDefaultState(UnityEngine::InputSystem::Utilities::PrimitiveValue value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder>::get(),
                            "WithDefaultState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::PrimitiveValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder::WithMinAndMax(UnityEngine::InputSystem::Utilities::PrimitiveValue min, UnityEngine::InputSystem::Utilities::PrimitiveValue max)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder>::get(),
                            "WithMinAndMax",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::PrimitiveValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::PrimitiveValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, min, max);
}
template<typename TProcessor,typename TValue>
 UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder::WithProcessor(TProcessor processor)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder>::get(),
                        "WithProcessor",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TProcessor>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TProcessor>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TProcessor>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, processor);
}
 UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder::IsNoisy(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder>::get(),
                            "IsNoisy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder::IsSynthetic(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder>::get(),
                            "IsSynthetic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder::DontReset(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder>::get(),
                            "DontReset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder::IsButton(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder>::get(),
                            "IsButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder::Finish()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder>::get(),
                            "Finish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder.get_device
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::InputDevice (UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder::get_device)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28d384c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder>::get(),
                            "get_device",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder.set_device
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder::*)(UnityEngine::InputSystem::InputDevice)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder::set_device)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28d3854;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder>::get(),
                            "set_device",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder.WithName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder (UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder::*)(::StringW)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder::WithName)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x28d385c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder>::get(),
                            "WithName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder.WithDisplayName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder (UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder::*)(::StringW)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder::WithDisplayName)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x28d38a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder>::get(),
                            "WithDisplayName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder.WithShortDisplayName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder (UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder::*)(::StringW)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder::WithShortDisplayName)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x28d38f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder>::get(),
                            "WithShortDisplayName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder.WithLayout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder (UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder::*)(UnityEngine::InputSystem::Utilities::InternedString)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder::WithLayout)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x28d3944;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder>::get(),
                            "WithLayout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder.WithChildren
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder (UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder::*)(int32_t, int32_t)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder::WithChildren)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x28d3964;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder>::get(),
                            "WithChildren",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder.WithStateBlock
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder (UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder::*)(UnityEngine::InputSystem::LowLevel::InputStateBlock)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder::WithStateBlock)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x28d3984;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder>::get(),
                            "WithStateBlock",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::InputStateBlock>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder.IsNoisy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder (UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder::*)(bool)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder::IsNoisy)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x28d39a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder>::get(),
                            "IsNoisy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder.WithControlUsage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder (UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder::*)(int32_t, UnityEngine::InputSystem::Utilities::InternedString, UnityEngine::InputSystem::InputControl)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder::WithControlUsage)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x28d39cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder>::get(),
                            "WithControlUsage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder.WithControlAlias
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder (UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder::*)(int32_t, UnityEngine::InputSystem::Utilities::InternedString)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder::WithControlAlias)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x28d3a70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder>::get(),
                            "WithControlAlias",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder.WithStateOffsetToControlIndexMap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder (UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder::*)(::ArrayW<uint32_t>)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder::WithStateOffsetToControlIndexMap)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x28d3ab0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder>::get(),
                            "WithStateOffsetToControlIndexMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder.Finish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder::Finish)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x28d3ad0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder>::get(),
                            "Finish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "_device_k__BackingField", ty: "UnityEngine::InputSystem::InputDevice", modifiers: "", def_value: Some("csnull") }]
constexpr UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder(UnityEngine::InputSystem::InputDevice _device_k__BackingField) noexcept : ::bs_hook::ValueTypeWrapper() {this->_device_k__BackingField = _device_k__BackingField;
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder::__set__device_k__BackingField(UnityEngine::InputSystem::InputDevice value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::InputDevice, 0x0>(this->__instance, std::forward<UnityEngine::InputSystem::InputDevice>(value));
}
constexpr UnityEngine::InputSystem::InputDevice UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder::__get__device_k__BackingField() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::InputDevice, 0x0>(this->__instance);
}
 UnityEngine::InputSystem::InputDevice UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder::get_device()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder>::get(),
                            "get_device",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::InputDevice, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder::set_device(UnityEngine::InputSystem::InputDevice value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder>::get(),
                            "set_device",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder::WithName(::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder>::get(),
                            "WithName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, name);
}
 UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder::WithDisplayName(::StringW displayName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder>::get(),
                            "WithDisplayName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, displayName);
}
 UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder::WithShortDisplayName(::StringW shortDisplayName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder>::get(),
                            "WithShortDisplayName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, shortDisplayName);
}
 UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder::WithLayout(UnityEngine::InputSystem::Utilities::InternedString layout)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder>::get(),
                            "WithLayout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, layout);
}
 UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder::WithChildren(int32_t startIndex, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder>::get(),
                            "WithChildren",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, startIndex, count);
}
 UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder::WithStateBlock(UnityEngine::InputSystem::LowLevel::InputStateBlock stateBlock)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder>::get(),
                            "WithStateBlock",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::InputStateBlock>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateBlock);
}
 UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder::IsNoisy(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder>::get(),
                            "IsNoisy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder::WithControlUsage(int32_t controlIndex, UnityEngine::InputSystem::Utilities::InternedString usage, UnityEngine::InputSystem::InputControl control)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder>::get(),
                            "WithControlUsage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, controlIndex, usage, control);
}
 UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder::WithControlAlias(int32_t controlIndex, UnityEngine::InputSystem::Utilities::InternedString alias)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder>::get(),
                            "WithControlAlias",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, controlIndex, alias);
}
 UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder::WithStateOffsetToControlIndexMap(::ArrayW<uint32_t> map)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder>::get(),
                            "WithStateOffsetToControlIndexMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, map);
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder::Finish()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder>::get(),
                            "Finish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43::*)(int32_t)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x28d29c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x28d3af4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43::MoveNext)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x28d3b18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43.__m__Finally1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43::__m__Finally1)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x28d3da0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43>::get(),
                            "<>m__Finally1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43.System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputControl__get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::InputControl (UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43::System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputControl__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28d3db0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43>::get(),
                            "System.Collections.Generic.IEnumerator<UnityEngine.InputSystem.InputControl>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x28d3db8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28d3df8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43.System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_InputControl__GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerator_1<UnityEngine::InputSystem::InputControl> (UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43::System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_InputControl__GetEnumerator)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x28d3e00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43>::get(),
                            "System.Collections.Generic.IEnumerable<UnityEngine.InputSystem.InputControl>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43.System_Collections_IEnumerable_GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator (UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x28d3eb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<UnityEngine::InputSystem::InputControl>
constexpr  UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43::operator System::Collections::Generic::IEnumerable_1<UnityEngine::InputSystem::InputControl>() const noexcept {
return System::Collections::Generic::IEnumerable_1<UnityEngine::InputSystem::InputControl>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerable
constexpr  UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43::operator System::Collections::IEnumerable() const noexcept {
return System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<UnityEngine::InputSystem::InputControl>
constexpr  UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43::operator System::Collections::Generic::IEnumerator_1<UnityEngine::InputSystem::InputControl>() const noexcept {
return System::Collections::Generic::IEnumerator_1<UnityEngine::InputSystem::InputControl>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerator
constexpr  UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43::operator System::Collections::IEnumerator() const noexcept {
return System::Collections::IEnumerator(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IDisposable
constexpr  UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43::__set___2__current(UnityEngine::InputSystem::InputControl value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::InputControl, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::InputSystem::InputControl>(value));
}
constexpr UnityEngine::InputSystem::InputControl UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43::__get___2__current() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::InputControl, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43::__set___l__initialThreadId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43::__get___l__initialThreadId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43::__set_eventPtr(UnityEngine::InputSystem::LowLevel::InputEventPtr value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::LowLevel::InputEventPtr, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::InputSystem::LowLevel::InputEventPtr>(value));
}
constexpr UnityEngine::InputSystem::LowLevel::InputEventPtr UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43::__get_eventPtr() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::LowLevel::InputEventPtr, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43::__set___3__eventPtr(UnityEngine::InputSystem::LowLevel::InputEventPtr value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::LowLevel::InputEventPtr, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::InputSystem::LowLevel::InputEventPtr>(value));
}
constexpr UnityEngine::InputSystem::LowLevel::InputEventPtr UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43::__get___3__eventPtr() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::LowLevel::InputEventPtr, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43::__set_magnitude(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43::__get_magnitude() const {
return ::cordl_internals::getInstanceField<float_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43::__set___3__magnitude(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43::__get___3__magnitude() const {
return ::cordl_internals::getInstanceField<float_t, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43::__set_buttonControlsOnly(bool value)  {
::cordl_internals::setInstanceField<bool, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43::__get_buttonControlsOnly() const {
return ::cordl_internals::getInstanceField<bool, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43::__set___3__buttonControlsOnly(bool value)  {
::cordl_internals::setInstanceField<bool, 0x41>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43::__get___3__buttonControlsOnly() const {
return ::cordl_internals::getInstanceField<bool, 0x41>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43::__set___7__wrap1(UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator>(value));
}
constexpr UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43::__get___7__wrap1() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
 UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43::UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43(int32_t __1__state)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43>(__1__state))) {}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43::_ctor(int32_t __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, __1__state);
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43>::get(),
                            "<>m__Finally1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::InputControl UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43::System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputControl__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43>::get(),
                            "System.Collections.Generic.IEnumerator<UnityEngine.InputSystem.InputControl>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::InputControl, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::IEnumerator_1<UnityEngine::InputSystem::InputControl> UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43::System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_InputControl__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43>::get(),
                            "System.Collections.Generic.IEnumerable<UnityEngine.InputSystem.InputControl>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerator_1<UnityEngine::InputSystem::InputControl>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::IEnumerator UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: UnityEngine::InputSystem::InputControlExtensions.IsPressed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::InputSystem::InputControl, float_t)>(&UnityEngine::InputSystem::InputControlExtensions::IsPressed)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x28d0ad8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlExtensions>::get(),
                            "IsPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputControlExtensions.IsActuated
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::InputSystem::InputControl, float_t)>(&UnityEngine::InputSystem::InputControlExtensions::IsActuated)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x28d0c20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlExtensions>::get(),
                            "IsActuated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputControlExtensions.ReadValueAsObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(UnityEngine::InputSystem::InputControl)>(&UnityEngine::InputSystem::InputControlExtensions::ReadValueAsObject)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x28d0148;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlExtensions>::get(),
                            "ReadValueAsObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputControlExtensions.ReadValueIntoBuffer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::InputSystem::InputControl, void*, int32_t)>(&UnityEngine::InputSystem::InputControlExtensions::ReadValueIntoBuffer)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x28d0d64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlExtensions>::get(),
                            "ReadValueIntoBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputControlExtensions.ReadDefaultValueAsObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(UnityEngine::InputSystem::InputControl)>(&UnityEngine::InputSystem::InputControlExtensions::ReadDefaultValueAsObject)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x28d0e20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlExtensions>::get(),
                            "ReadDefaultValueAsObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputControlExtensions.ReadValueFromEventAsObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(UnityEngine::InputSystem::InputControl, UnityEngine::InputSystem::LowLevel::InputEventPtr)>(&UnityEngine::InputSystem::InputControlExtensions::ReadValueFromEventAsObject)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x28d0ec8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlExtensions>::get(),
                            "ReadValueFromEventAsObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::InputEventPtr>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputControlExtensions.WriteValueFromObjectIntoEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::InputSystem::InputControl, UnityEngine::InputSystem::LowLevel::InputEventPtr, ::bs_hook::Il2CppWrapperType)>(&UnityEngine::InputSystem::InputControlExtensions::WriteValueFromObjectIntoEvent)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x28d100c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlExtensions>::get(),
                            "WriteValueFromObjectIntoEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::InputEventPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputControlExtensions.WriteValueIntoState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::InputSystem::InputControl, void*)>(&UnityEngine::InputSystem::InputControlExtensions::WriteValueIntoState)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x28d10a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlExtensions>::get(),
                            "WriteValueIntoState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputControlExtensions.CopyState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::InputSystem::InputDevice, void*, int32_t)>(&UnityEngine::InputSystem::InputControlExtensions::CopyState)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x28d123c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlExtensions>::get(),
                            "CopyState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputControlExtensions.CheckStateIsAtDefault
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::InputSystem::InputControl)>(&UnityEngine::InputSystem::InputControlExtensions::CheckStateIsAtDefault)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x28d0cec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlExtensions>::get(),
                            "CheckStateIsAtDefault",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputControlExtensions.CheckStateIsAtDefault
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::InputSystem::InputControl, void*, void*)>(&UnityEngine::InputSystem::InputControlExtensions::CheckStateIsAtDefault)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x28d13a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlExtensions>::get(),
                            "CheckStateIsAtDefault",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputControlExtensions.CheckStateIsAtDefaultIgnoringNoise
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::InputSystem::InputControl)>(&UnityEngine::InputSystem::InputControlExtensions::CheckStateIsAtDefaultIgnoringNoise)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x28d1538;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlExtensions>::get(),
                            "CheckStateIsAtDefaultIgnoringNoise",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputControlExtensions.CheckStateIsAtDefaultIgnoringNoise
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::InputSystem::InputControl, void*)>(&UnityEngine::InputSystem::InputControlExtensions::CheckStateIsAtDefaultIgnoringNoise)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x28d15ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlExtensions>::get(),
                            "CheckStateIsAtDefaultIgnoringNoise",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputControlExtensions.CompareStateIgnoringNoise
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::InputSystem::InputControl, void*)>(&UnityEngine::InputSystem::InputControlExtensions::CompareStateIgnoringNoise)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x28d167c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlExtensions>::get(),
                            "CompareStateIgnoringNoise",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputControlExtensions.CompareState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::InputSystem::InputControl, void*, void*, void*)>(&UnityEngine::InputSystem::InputControlExtensions::CompareState)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x28d1484;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlExtensions>::get(),
                            "CompareState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputControlExtensions.CompareState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::InputSystem::InputControl, void*, void*)>(&UnityEngine::InputSystem::InputControlExtensions::CompareState)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x28d1768;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlExtensions>::get(),
                            "CompareState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputControlExtensions.HasValueChangeInState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::InputSystem::InputControl, void*)>(&UnityEngine::InputSystem::InputControlExtensions::HasValueChangeInState)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x28d181c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlExtensions>::get(),
                            "HasValueChangeInState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputControlExtensions.HasValueChangeInEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::InputSystem::InputControl, UnityEngine::InputSystem::LowLevel::InputEventPtr)>(&UnityEngine::InputSystem::InputControlExtensions::HasValueChangeInEvent)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x28d18d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlExtensions>::get(),
                            "HasValueChangeInEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::InputEventPtr>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputControlExtensions.GetStatePtrFromStateEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (*)(UnityEngine::InputSystem::InputControl, UnityEngine::InputSystem::LowLevel::InputEventPtr)>(&UnityEngine::InputSystem::InputControlExtensions::GetStatePtrFromStateEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x28d0f4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlExtensions>::get(),
                            "GetStatePtrFromStateEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::InputEventPtr>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputControlExtensions.GetStatePtrFromStateEventUnchecked
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (*)(UnityEngine::InputSystem::InputControl, UnityEngine::InputSystem::LowLevel::InputEventPtr, UnityEngine::InputSystem::Utilities::FourCC)>(&UnityEngine::InputSystem::InputControlExtensions::GetStatePtrFromStateEventUnchecked)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x28d19b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlExtensions>::get(),
                            "GetStatePtrFromStateEventUnchecked",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::InputEventPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::FourCC>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputControlExtensions.ResetToDefaultStateInEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::InputSystem::InputControl, UnityEngine::InputSystem::LowLevel::InputEventPtr)>(&UnityEngine::InputSystem::InputControlExtensions::ResetToDefaultStateInEvent)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x28d1ca8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlExtensions>::get(),
                            "ResetToDefaultStateInEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::InputEventPtr>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputControlExtensions.AccumulateValueInEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::InputSystem::InputControl_1<float_t>, void*, UnityEngine::InputSystem::LowLevel::InputEventPtr)>(&UnityEngine::InputSystem::InputControlExtensions::AccumulateValueInEvent)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x28d1e5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlExtensions>::get(),
                            "AccumulateValueInEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl_1<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::InputEventPtr>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputControlExtensions.AccumulateValueInEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::InputSystem::InputControl_1<UnityEngine::Vector2>, void*, UnityEngine::InputSystem::LowLevel::InputEventPtr)>(&UnityEngine::InputSystem::InputControlExtensions::AccumulateValueInEvent)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x28d1f5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlExtensions>::get(),
                            "AccumulateValueInEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl_1<UnityEngine::Vector2>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::InputEventPtr>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputControlExtensions.BuildPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(UnityEngine::InputSystem::InputControl, ::StringW, System::Text::StringBuilder)>(&UnityEngine::InputSystem::InputControlExtensions::BuildPath)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x28d2060;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlExtensions>::get(),
                            "BuildPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputControlExtensions.EnumerateControls
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlCollection (*)(UnityEngine::InputSystem::LowLevel::InputEventPtr, UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__Enumerate, UnityEngine::InputSystem::InputDevice, float_t)>(&UnityEngine::InputSystem::InputControlExtensions::EnumerateControls)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x28d233c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlExtensions>::get(),
                            "EnumerateControls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::InputEventPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__Enumerate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputControlExtensions.EnumerateChangedControls
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlCollection (*)(UnityEngine::InputSystem::LowLevel::InputEventPtr, UnityEngine::InputSystem::InputDevice, float_t)>(&UnityEngine::InputSystem::InputControlExtensions::EnumerateChangedControls)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x28d2568;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlExtensions>::get(),
                            "EnumerateChangedControls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::InputEventPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputControlExtensions.HasButtonPress
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::InputSystem::LowLevel::InputEventPtr, float_t, bool)>(&UnityEngine::InputSystem::InputControlExtensions::HasButtonPress)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x28d25a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlExtensions>::get(),
                            "HasButtonPress",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::InputEventPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputControlExtensions.GetFirstButtonPressOrNull
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::InputControl (*)(UnityEngine::InputSystem::LowLevel::InputEventPtr, float_t, bool)>(&UnityEngine::InputSystem::InputControlExtensions::GetFirstButtonPressOrNull)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x28cf1e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlExtensions>::get(),
                            "GetFirstButtonPressOrNull",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::InputEventPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputControlExtensions.GetAllButtonPresses
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<UnityEngine::InputSystem::InputControl> (*)(UnityEngine::InputSystem::LowLevel::InputEventPtr, float_t, bool)>(&UnityEngine::InputSystem::InputControlExtensions::GetAllButtonPresses)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x28d2924;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlExtensions>::get(),
                            "GetAllButtonPresses",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::InputEventPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputControlExtensions.Setup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder (*)(UnityEngine::InputSystem::InputControl)>(&UnityEngine::InputSystem::InputControlExtensions::Setup)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x28d29f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlExtensions>::get(),
                            "Setup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputControlExtensions.Setup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder (*)(UnityEngine::InputSystem::InputDevice, int32_t, int32_t, int32_t)>(&UnityEngine::InputSystem::InputControlExtensions::Setup)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x28d2ac4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlExtensions>::get(),
                            "Setup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
template<typename TControl>
 TControl UnityEngine::InputSystem::InputControlExtensions::FindInParentChain(UnityEngine::InputSystem::InputControl control)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlExtensions>::get(),
                        "FindInParentChain",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TControl>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TControl>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<TControl, false>(nullptr, ___internal_method, control);
}
/// @param buttonPressPoint: float_t (default: 0)
 bool UnityEngine::InputSystem::InputControlExtensions::IsPressed(UnityEngine::InputSystem::InputControl control, float_t buttonPressPoint)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlExtensions>::get(),
                            "IsPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, control, buttonPressPoint);
}
/// @param threshold: float_t (default: 0)
 bool UnityEngine::InputSystem::InputControlExtensions::IsActuated(UnityEngine::InputSystem::InputControl control, float_t threshold)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlExtensions>::get(),
                            "IsActuated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, control, threshold);
}
 ::bs_hook::Il2CppWrapperType UnityEngine::InputSystem::InputControlExtensions::ReadValueAsObject(UnityEngine::InputSystem::InputControl control)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlExtensions>::get(),
                            "ReadValueAsObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, control);
}
 void UnityEngine::InputSystem::InputControlExtensions::ReadValueIntoBuffer(UnityEngine::InputSystem::InputControl control, void* buffer, int32_t bufferSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlExtensions>::get(),
                            "ReadValueIntoBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, control, buffer, bufferSize);
}
 ::bs_hook::Il2CppWrapperType UnityEngine::InputSystem::InputControlExtensions::ReadDefaultValueAsObject(UnityEngine::InputSystem::InputControl control)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlExtensions>::get(),
                            "ReadDefaultValueAsObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, control);
}
template<typename TValue>
 TValue UnityEngine::InputSystem::InputControlExtensions::ReadValueFromEvent(UnityEngine::InputSystem::InputControl_1<TValue> control, UnityEngine::InputSystem::LowLevel::InputEventPtr inputEvent)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlExtensions>::get(),
                        "ReadValueFromEvent",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl_1<TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::InputEventPtr>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<TValue, false>(nullptr, ___internal_method, control, inputEvent);
}
template<typename TValue>
 bool UnityEngine::InputSystem::InputControlExtensions::ReadValueFromEvent(UnityEngine::InputSystem::InputControl_1<TValue> control, UnityEngine::InputSystem::LowLevel::InputEventPtr inputEvent, ByRef<TValue> value)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlExtensions>::get(),
                        "ReadValueFromEvent",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl_1<TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::InputEventPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, control, inputEvent, value);
}
 ::bs_hook::Il2CppWrapperType UnityEngine::InputSystem::InputControlExtensions::ReadValueFromEventAsObject(UnityEngine::InputSystem::InputControl control, UnityEngine::InputSystem::LowLevel::InputEventPtr inputEvent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlExtensions>::get(),
                            "ReadValueFromEventAsObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::InputEventPtr>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, control, inputEvent);
}
template<typename TValue>
 TValue UnityEngine::InputSystem::InputControlExtensions::ReadUnprocessedValueFromEvent(UnityEngine::InputSystem::InputControl_1<TValue> control, UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlExtensions>::get(),
                        "ReadUnprocessedValueFromEvent",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl_1<TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::InputEventPtr>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<TValue, false>(nullptr, ___internal_method, control, eventPtr);
}
template<typename TValue>
 bool UnityEngine::InputSystem::InputControlExtensions::ReadUnprocessedValueFromEvent(UnityEngine::InputSystem::InputControl_1<TValue> control, UnityEngine::InputSystem::LowLevel::InputEventPtr inputEvent, ByRef<TValue> value)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlExtensions>::get(),
                        "ReadUnprocessedValueFromEvent",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl_1<TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::InputEventPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, control, inputEvent, value);
}
 void UnityEngine::InputSystem::InputControlExtensions::WriteValueFromObjectIntoEvent(UnityEngine::InputSystem::InputControl control, UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, ::bs_hook::Il2CppWrapperType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlExtensions>::get(),
                            "WriteValueFromObjectIntoEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::InputEventPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, control, eventPtr, value);
}
 void UnityEngine::InputSystem::InputControlExtensions::WriteValueIntoState(UnityEngine::InputSystem::InputControl control, void* statePtr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlExtensions>::get(),
                            "WriteValueIntoState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, control, statePtr);
}
template<typename TValue>
 void UnityEngine::InputSystem::InputControlExtensions::WriteValueIntoState(UnityEngine::InputSystem::InputControl control, TValue value, void* statePtr)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlExtensions>::get(),
                        "WriteValueIntoState",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, control, value, statePtr);
}
template<typename TValue>
 void UnityEngine::InputSystem::InputControlExtensions::WriteValueIntoState(UnityEngine::InputSystem::InputControl_1<TValue> control, TValue value, void* statePtr)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlExtensions>::get(),
                        "WriteValueIntoState",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl_1<TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, control, value, statePtr);
}
template<typename TValue>
 void UnityEngine::InputSystem::InputControlExtensions::WriteValueIntoState(UnityEngine::InputSystem::InputControl_1<TValue> control, void* statePtr)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlExtensions>::get(),
                        "WriteValueIntoState",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl_1<TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, control, statePtr);
}
template<typename TValue,typename TState>
 void UnityEngine::InputSystem::InputControlExtensions::WriteValueIntoState(UnityEngine::InputSystem::InputControl_1<TValue> control, TValue value, ByRef<TState> state)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlExtensions>::get(),
                        "WriteValueIntoState",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TState>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl_1<TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TState>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TState>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, control, value, state);
}
template<typename TValue>
 void UnityEngine::InputSystem::InputControlExtensions::WriteValueIntoEvent(UnityEngine::InputSystem::InputControl control, TValue value, UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlExtensions>::get(),
                        "WriteValueIntoEvent",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::InputEventPtr>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, control, value, eventPtr);
}
template<typename TValue>
 void UnityEngine::InputSystem::InputControlExtensions::WriteValueIntoEvent(UnityEngine::InputSystem::InputControl_1<TValue> control, TValue value, UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlExtensions>::get(),
                        "WriteValueIntoEvent",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl_1<TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::InputEventPtr>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, control, value, eventPtr);
}
 void UnityEngine::InputSystem::InputControlExtensions::CopyState(UnityEngine::InputSystem::InputDevice device, void* buffer, int32_t bufferSizeInBytes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlExtensions>::get(),
                            "CopyState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, device, buffer, bufferSizeInBytes);
}
template<typename TState>
 void UnityEngine::InputSystem::InputControlExtensions::CopyState(UnityEngine::InputSystem::InputDevice device, ByRef<TState> state)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlExtensions>::get(),
                        "CopyState",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TState>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TState>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TState>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, device, state);
}
 bool UnityEngine::InputSystem::InputControlExtensions::CheckStateIsAtDefault(UnityEngine::InputSystem::InputControl control)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlExtensions>::get(),
                            "CheckStateIsAtDefault",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, control);
}
/// @param maskPtr: void* (default: csnull)
 bool UnityEngine::InputSystem::InputControlExtensions::CheckStateIsAtDefault(UnityEngine::InputSystem::InputControl control, void* statePtr, void* maskPtr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlExtensions>::get(),
                            "CheckStateIsAtDefault",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, control, statePtr, maskPtr);
}
 bool UnityEngine::InputSystem::InputControlExtensions::CheckStateIsAtDefaultIgnoringNoise(UnityEngine::InputSystem::InputControl control)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlExtensions>::get(),
                            "CheckStateIsAtDefaultIgnoringNoise",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, control);
}
 bool UnityEngine::InputSystem::InputControlExtensions::CheckStateIsAtDefaultIgnoringNoise(UnityEngine::InputSystem::InputControl control, void* statePtr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlExtensions>::get(),
                            "CheckStateIsAtDefaultIgnoringNoise",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, control, statePtr);
}
 bool UnityEngine::InputSystem::InputControlExtensions::CompareStateIgnoringNoise(UnityEngine::InputSystem::InputControl control, void* statePtr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlExtensions>::get(),
                            "CompareStateIgnoringNoise",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, control, statePtr);
}
/// @param maskPtr: void* (default: csnull)
 bool UnityEngine::InputSystem::InputControlExtensions::CompareState(UnityEngine::InputSystem::InputControl control, void* firstStatePtr, void* secondStatePtr, void* maskPtr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlExtensions>::get(),
                            "CompareState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, control, firstStatePtr, secondStatePtr, maskPtr);
}
/// @param maskPtr: void* (default: csnull)
 bool UnityEngine::InputSystem::InputControlExtensions::CompareState(UnityEngine::InputSystem::InputControl control, void* statePtr, void* maskPtr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlExtensions>::get(),
                            "CompareState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, control, statePtr, maskPtr);
}
 bool UnityEngine::InputSystem::InputControlExtensions::HasValueChangeInState(UnityEngine::InputSystem::InputControl control, void* statePtr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlExtensions>::get(),
                            "HasValueChangeInState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, control, statePtr);
}
 bool UnityEngine::InputSystem::InputControlExtensions::HasValueChangeInEvent(UnityEngine::InputSystem::InputControl control, UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlExtensions>::get(),
                            "HasValueChangeInEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::InputEventPtr>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, control, eventPtr);
}
 void* UnityEngine::InputSystem::InputControlExtensions::GetStatePtrFromStateEvent(UnityEngine::InputSystem::InputControl control, UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlExtensions>::get(),
                            "GetStatePtrFromStateEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::InputEventPtr>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void*, false>(nullptr, ___internal_method, control, eventPtr);
}
 void* UnityEngine::InputSystem::InputControlExtensions::GetStatePtrFromStateEventUnchecked(UnityEngine::InputSystem::InputControl control, UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, UnityEngine::InputSystem::Utilities::FourCC eventType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlExtensions>::get(),
                            "GetStatePtrFromStateEventUnchecked",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::InputEventPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::FourCC>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void*, false>(nullptr, ___internal_method, control, eventPtr, eventType);
}
 bool UnityEngine::InputSystem::InputControlExtensions::ResetToDefaultStateInEvent(UnityEngine::InputSystem::InputControl control, UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlExtensions>::get(),
                            "ResetToDefaultStateInEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::InputEventPtr>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, control, eventPtr);
}
/// @param time: double_t (default: -1)
template<typename TValue>
 void UnityEngine::InputSystem::InputControlExtensions::QueueValueChange(UnityEngine::InputSystem::InputControl_1<TValue> control, TValue value, double_t time)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlExtensions>::get(),
                        "QueueValueChange",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl_1<TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, control, value, time);
}
 void UnityEngine::InputSystem::InputControlExtensions::AccumulateValueInEvent(UnityEngine::InputSystem::InputControl_1<float_t> control, void* currentStatePtr, UnityEngine::InputSystem::LowLevel::InputEventPtr newState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlExtensions>::get(),
                            "AccumulateValueInEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl_1<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::InputEventPtr>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, control, currentStatePtr, newState);
}
 void UnityEngine::InputSystem::InputControlExtensions::AccumulateValueInEvent(UnityEngine::InputSystem::InputControl_1<UnityEngine::Vector2> control, void* currentStatePtr, UnityEngine::InputSystem::LowLevel::InputEventPtr newState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlExtensions>::get(),
                            "AccumulateValueInEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl_1<UnityEngine::Vector2>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::InputEventPtr>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, control, currentStatePtr, newState);
}
template<typename TControl>
 void UnityEngine::InputSystem::InputControlExtensions::FindControlsRecursive(UnityEngine::InputSystem::InputControl parent, System::Collections::Generic::IList_1<TControl> controls, System::Func_2<TControl,bool> predicate)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlExtensions>::get(),
                        "FindControlsRecursive",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TControl>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IList_1<TControl>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<TControl,bool>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TControl>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, parent, controls, predicate);
}
/// @param builder: System::Text::StringBuilder (default: csnull)
 ::StringW UnityEngine::InputSystem::InputControlExtensions::BuildPath(UnityEngine::InputSystem::InputControl control, ::StringW deviceLayout, System::Text::StringBuilder builder)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlExtensions>::get(),
                            "BuildPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, control, deviceLayout, builder);
}
/// @param device: UnityEngine::InputSystem::InputDevice (default: csnull)
/// @param magnitudeThreshold: float_t (default: 0)
 UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlCollection UnityEngine::InputSystem::InputControlExtensions::EnumerateControls(UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__Enumerate flags, UnityEngine::InputSystem::InputDevice device, float_t magnitudeThreshold)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlExtensions>::get(),
                            "EnumerateControls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::InputEventPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__Enumerate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlCollection, false>(nullptr, ___internal_method, eventPtr, flags, device, magnitudeThreshold);
}
/// @param device: UnityEngine::InputSystem::InputDevice (default: csnull)
/// @param magnitudeThreshold: float_t (default: 0)
 UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlCollection UnityEngine::InputSystem::InputControlExtensions::EnumerateChangedControls(UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, UnityEngine::InputSystem::InputDevice device, float_t magnitudeThreshold)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlExtensions>::get(),
                            "EnumerateChangedControls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::InputEventPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlCollection, false>(nullptr, ___internal_method, eventPtr, device, magnitudeThreshold);
}
/// @param magnitude: float_t (default: -1)
/// @param buttonControlsOnly: bool (default: true)
 bool UnityEngine::InputSystem::InputControlExtensions::HasButtonPress(UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, float_t magnitude, bool buttonControlsOnly)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlExtensions>::get(),
                            "HasButtonPress",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::InputEventPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, eventPtr, magnitude, buttonControlsOnly);
}
/// @param magnitude: float_t (default: -1)
/// @param buttonControlsOnly: bool (default: true)
 UnityEngine::InputSystem::InputControl UnityEngine::InputSystem::InputControlExtensions::GetFirstButtonPressOrNull(UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, float_t magnitude, bool buttonControlsOnly)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlExtensions>::get(),
                            "GetFirstButtonPressOrNull",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::InputEventPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::InputControl, false>(nullptr, ___internal_method, eventPtr, magnitude, buttonControlsOnly);
}
/// @param magnitude: float_t (default: -1)
/// @param buttonControlsOnly: bool (default: true)
 System::Collections::Generic::IEnumerable_1<UnityEngine::InputSystem::InputControl> UnityEngine::InputSystem::InputControlExtensions::GetAllButtonPresses(UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, float_t magnitude, bool buttonControlsOnly)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlExtensions>::get(),
                            "GetAllButtonPresses",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::InputEventPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerable_1<UnityEngine::InputSystem::InputControl>, false>(nullptr, ___internal_method, eventPtr, magnitude, buttonControlsOnly);
}
 UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder UnityEngine::InputSystem::InputControlExtensions::Setup(UnityEngine::InputSystem::InputControl control)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlExtensions>::get(),
                            "Setup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder, false>(nullptr, ___internal_method, control);
}
 UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder UnityEngine::InputSystem::InputControlExtensions::Setup(UnityEngine::InputSystem::InputDevice device, int32_t controlCount, int32_t usageCount, int32_t aliasCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlExtensions>::get(),
                            "Setup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder, false>(nullptr, ___internal_method, device, controlCount, usageCount, aliasCount);
}
