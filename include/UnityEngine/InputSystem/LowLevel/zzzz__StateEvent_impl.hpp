#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "UnityEngine/InputSystem/LowLevel/zzzz__StateEvent_def.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventPtr_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputEventTypeInfo_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEvent_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__StateEvent___stateData_e__FixedBuffer::____UnityEngine__InputSystem__LowLevel__StateEvent___stateData_e__FixedBuffer(uint8_t FixedElementField) noexcept : ::bs_hook::ValueTypeWrapper() {this->FixedElementField = FixedElementField;
}
constexpr void ::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__StateEvent___stateData_e__FixedBuffer::__set_FixedElementField(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x0>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t ::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__StateEvent___stateData_e__FixedBuffer::__get_FixedElementField() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->__instance);
}
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::StateEvent.get_stateSizeInBytes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::UnityEngine::InputSystem::LowLevel::StateEvent::*)()>(&::UnityEngine::InputSystem::LowLevel::StateEvent::get_stateSizeInBytes)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2959330;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::StateEvent>::get(),
                            "get_stateSizeInBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::StateEvent.get_state
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (::UnityEngine::InputSystem::LowLevel::StateEvent::*)()>(&::UnityEngine::InputSystem::LowLevel::StateEvent::get_state)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x295dab0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::StateEvent>::get(),
                            "get_state",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::StateEvent.ToEventPtr
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::LowLevel::InputEventPtr (::UnityEngine::InputSystem::LowLevel::StateEvent::*)()>(&::UnityEngine::InputSystem::LowLevel::StateEvent::ToEventPtr)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x295dab8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::StateEvent>::get(),
                            "ToEventPtr",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::StateEvent.get_typeStatic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (::UnityEngine::InputSystem::LowLevel::StateEvent::*)()>(&::UnityEngine::InputSystem::LowLevel::StateEvent::get_typeStatic)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x295dabc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::StateEvent>::get(),
                            "get_typeStatic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::StateEvent.From
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr)>(&::UnityEngine::InputSystem::LowLevel::StateEvent::From)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x2959200;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::StateEvent>::get(),
                            "From",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::StateEvent.FromUnchecked
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr)>(&::UnityEngine::InputSystem::LowLevel::StateEvent::FromUnchecked)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2959048;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::StateEvent>::get(),
                            "FromUnchecked",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::StateEvent.From
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::NativeArray_1<uint8_t> (*)(::UnityEngine::InputSystem::InputDevice, ByRef<::UnityEngine::InputSystem::LowLevel::InputEventPtr>, ::Unity::Collections::Allocator)>(&::UnityEngine::InputSystem::LowLevel::StateEvent::From)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x295dadc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::StateEvent>::get(),
                            "From",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::LowLevel::InputEventPtr>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::Allocator>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::StateEvent.FromDefaultStateFor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::NativeArray_1<uint8_t> (*)(::UnityEngine::InputSystem::InputDevice, ByRef<::UnityEngine::InputSystem::LowLevel::InputEventPtr>, ::Unity::Collections::Allocator)>(&::UnityEngine::InputSystem::LowLevel::StateEvent::FromDefaultStateFor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x295de1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::StateEvent>::get(),
                            "FromDefaultStateFor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::LowLevel::InputEventPtr>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::Allocator>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::StateEvent.From
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::NativeArray_1<uint8_t> (*)(::UnityEngine::InputSystem::InputDevice, ByRef<::UnityEngine::InputSystem::LowLevel::InputEventPtr>, ::Unity::Collections::Allocator, bool)>(&::UnityEngine::InputSystem::LowLevel::StateEvent::From)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x295dae4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::StateEvent>::get(),
                            "From",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::LowLevel::InputEventPtr>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::Allocator>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo
constexpr  ::UnityEngine::InputSystem::LowLevel::StateEvent::operator ::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo() const {
return ::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "baseEvent", ty: "::UnityEngine::InputSystem::LowLevel::InputEvent", modifiers: "", def_value: Some("{}") }, CppParam { name: "stateFormat", ty: "::UnityEngine::InputSystem::Utilities::FourCC", modifiers: "", def_value: Some("{}") }, CppParam { name: "stateData", ty: "::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__StateEvent___stateData_e__FixedBuffer", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::LowLevel::StateEvent::StateEvent(::UnityEngine::InputSystem::LowLevel::InputEvent baseEvent, ::UnityEngine::InputSystem::Utilities::FourCC stateFormat, ::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__StateEvent___stateData_e__FixedBuffer stateData) noexcept : ::bs_hook::ValueTypeWrapper() {this->baseEvent = baseEvent;
this->stateFormat = stateFormat;
this->stateData = stateData;
}
constexpr void ::UnityEngine::InputSystem::LowLevel::StateEvent::__set_baseEvent(::UnityEngine::InputSystem::LowLevel::InputEvent value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::LowLevel::InputEvent, 0x0>(this->__instance, std::forward<::UnityEngine::InputSystem::LowLevel::InputEvent>(value));
}
constexpr ::UnityEngine::InputSystem::LowLevel::InputEvent ::UnityEngine::InputSystem::LowLevel::StateEvent::__get_baseEvent() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::LowLevel::InputEvent, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::LowLevel::StateEvent::__set_stateFormat(::UnityEngine::InputSystem::Utilities::FourCC value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::Utilities::FourCC, 0x14>(this->__instance, std::forward<::UnityEngine::InputSystem::Utilities::FourCC>(value));
}
constexpr ::UnityEngine::InputSystem::Utilities::FourCC ::UnityEngine::InputSystem::LowLevel::StateEvent::__get_stateFormat() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Utilities::FourCC, 0x14>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::LowLevel::StateEvent::__set_stateData(::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__StateEvent___stateData_e__FixedBuffer value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__StateEvent___stateData_e__FixedBuffer, 0x18>(this->__instance, std::forward<::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__StateEvent___stateData_e__FixedBuffer>(value));
}
constexpr ::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__StateEvent___stateData_e__FixedBuffer ::UnityEngine::InputSystem::LowLevel::StateEvent::__get_stateData() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__StateEvent___stateData_e__FixedBuffer, 0x18>(this->__instance);
}
 uint32_t ::UnityEngine::InputSystem::LowLevel::StateEvent::get_stateSizeInBytes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::StateEvent>::get(),
                            "get_stateSizeInBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void* ::UnityEngine::InputSystem::LowLevel::StateEvent::get_state()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::StateEvent>::get(),
                            "get_state",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void*, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::UnityEngine::InputSystem::LowLevel::InputEventPtr ::UnityEngine::InputSystem::LowLevel::StateEvent::ToEventPtr()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::StateEvent>::get(),
                            "ToEventPtr",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::InputEventPtr, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::UnityEngine::InputSystem::Utilities::FourCC ::UnityEngine::InputSystem::LowLevel::StateEvent::get_typeStatic()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::StateEvent>::get(),
                            "get_typeStatic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
template<typename TState>
 TState ::UnityEngine::InputSystem::LowLevel::StateEvent::GetState()  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::StateEvent>::get(),
                        "GetState",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TState>::get()},
                        ::std::vector<const Il2CppType*>{}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TState>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<TState, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
template<typename TState>
 TState ::UnityEngine::InputSystem::LowLevel::StateEvent::GetState(::UnityEngine::InputSystem::LowLevel::InputEventPtr ptr)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::StateEvent>::get(),
                        "GetState",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TState>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TState>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<TState, false>(nullptr, ___internal_method, ptr);
}
template<typename TState>
 int32_t ::UnityEngine::InputSystem::LowLevel::StateEvent::GetEventSizeWithPayload()  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::StateEvent>::get(),
                        "GetEventSizeWithPayload",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TState>::get()},
                        ::std::vector<const Il2CppType*>{}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TState>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
 void* ::UnityEngine::InputSystem::LowLevel::StateEvent::From(::UnityEngine::InputSystem::LowLevel::InputEventPtr ptr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::StateEvent>::get(),
                            "From",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void*, false>(nullptr, ___internal_method, ptr);
}
 void* ::UnityEngine::InputSystem::LowLevel::StateEvent::FromUnchecked(::UnityEngine::InputSystem::LowLevel::InputEventPtr ptr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::StateEvent>::get(),
                            "FromUnchecked",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void*, false>(nullptr, ___internal_method, ptr);
}
/// @param allocator: ::Unity::Collections::Allocator (default: 2)
 ::Unity::Collections::NativeArray_1<uint8_t> ::UnityEngine::InputSystem::LowLevel::StateEvent::From(::UnityEngine::InputSystem::InputDevice device, ByRef<::UnityEngine::InputSystem::LowLevel::InputEventPtr> eventPtr, ::Unity::Collections::Allocator allocator)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::StateEvent>::get(),
                            "From",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::LowLevel::InputEventPtr>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::Allocator>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<uint8_t>, false>(nullptr, ___internal_method, device, eventPtr, allocator);
}
/// @param allocator: ::Unity::Collections::Allocator (default: 2)
 ::Unity::Collections::NativeArray_1<uint8_t> ::UnityEngine::InputSystem::LowLevel::StateEvent::FromDefaultStateFor(::UnityEngine::InputSystem::InputDevice device, ByRef<::UnityEngine::InputSystem::LowLevel::InputEventPtr> eventPtr, ::Unity::Collections::Allocator allocator)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::StateEvent>::get(),
                            "FromDefaultStateFor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::LowLevel::InputEventPtr>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::Allocator>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<uint8_t>, false>(nullptr, ___internal_method, device, eventPtr, allocator);
}
 ::Unity::Collections::NativeArray_1<uint8_t> ::UnityEngine::InputSystem::LowLevel::StateEvent::From(::UnityEngine::InputSystem::InputDevice device, ByRef<::UnityEngine::InputSystem::LowLevel::InputEventPtr> eventPtr, ::Unity::Collections::Allocator allocator, bool useDefaultState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::StateEvent>::get(),
                            "From",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::LowLevel::InputEventPtr>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::Allocator>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<uint8_t>, false>(nullptr, ___internal_method, device, eventPtr, allocator, useDefaultState);
}
} // end anonymous namespace
