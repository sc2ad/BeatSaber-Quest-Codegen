#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "UnityEngine/InputSystem/HID/zzzz__HIDSupport_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ReadOnlyArray_1_def.hpp"
#include "UnityEngine/InputSystem/HID/zzzz__HID_def.hpp"
#include "UnityEngine/InputSystem/HID/zzzz__HID_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HIDSupport__HIDPageUsage._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HIDSupport__HIDPageUsage::*)(::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HID__UsagePage, int32_t)>(&::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HIDSupport__HIDPageUsage::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x294771c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HIDSupport__HIDPageUsage>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HID__UsagePage>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HIDSupport__HIDPageUsage._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HIDSupport__HIDPageUsage::*)(::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HID__GenericDesktop)>(&::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HIDSupport__HIDPageUsage::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x294c808;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HIDSupport__HIDPageUsage>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HID__GenericDesktop>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "page", ty: "::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HID__UsagePage", modifiers: "", def_value: Some("{}") }, CppParam { name: "usage", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HIDSupport__HIDPageUsage::____UnityEngine__InputSystem__HID__HIDSupport__HIDPageUsage(::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HID__UsagePage page, int32_t usage) noexcept : ::bs_hook::ValueTypeWrapper() {this->page = page;
this->usage = usage;
}
constexpr void ::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HIDSupport__HIDPageUsage::__set_page(::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HID__UsagePage value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HID__UsagePage, 0x0>(this->__instance, std::forward<::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HID__UsagePage>(value));
}
constexpr ::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HID__UsagePage ::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HIDSupport__HIDPageUsage::__get_page() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HID__UsagePage, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HIDSupport__HIDPageUsage::__set_usage(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x4>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HIDSupport__HIDPageUsage::__get_usage() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->__instance);
}
 void ::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HIDSupport__HIDPageUsage::_ctor(::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HID__UsagePage page, int32_t usage)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HIDSupport__HIDPageUsage>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HID__UsagePage>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, page, usage);
}
 void ::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HIDSupport__HIDPageUsage::_ctor(::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HID__GenericDesktop usage)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HIDSupport__HIDPageUsage>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HID__GenericDesktop>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, usage);
}
//  Writing Method size for method: ::UnityEngine::InputSystem::HID::HIDSupport.get_supportedHIDUsages
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HIDSupport__HIDPageUsage> (*)()>(&::UnityEngine::InputSystem::HID::HIDSupport::get_supportedHIDUsages)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x29476bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::HID::HIDSupport>::get(),
                            "get_supportedHIDUsages",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::HID::HIDSupport.set_supportedHIDUsages
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HIDSupport__HIDPageUsage>)>(&::UnityEngine::InputSystem::HID::HIDSupport::set_supportedHIDUsages)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x294c498;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::HID::HIDSupport>::get(),
                            "set_supportedHIDUsages",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HIDSupport__HIDPageUsage>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::HID::HIDSupport.Initialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::InputSystem::HID::HIDSupport::Initialize)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x294c6bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::HID::HIDSupport>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void ::UnityEngine::InputSystem::HID::HIDSupport::__set_s_SupportedHIDUsages(::ArrayW<::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HIDSupport__HIDPageUsage> value)  {
::cordl_internals::setStaticField<::ArrayW<::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HIDSupport__HIDPageUsage>, "s_SupportedHIDUsages", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::HID::HIDSupport>::get>(std::forward<::ArrayW<::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HIDSupport__HIDPageUsage>>(value));
}
 ::ArrayW<::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HIDSupport__HIDPageUsage> ::UnityEngine::InputSystem::HID::HIDSupport::__get_s_SupportedHIDUsages()  {
return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HIDSupport__HIDPageUsage>, "s_SupportedHIDUsages", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::HID::HIDSupport>::get>();
}
 ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HIDSupport__HIDPageUsage> ::UnityEngine::InputSystem::HID::HIDSupport::get_supportedHIDUsages()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::HID::HIDSupport>::get(),
                            "get_supportedHIDUsages",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HIDSupport__HIDPageUsage>, false>(nullptr, ___internal_method);
}
 void ::UnityEngine::InputSystem::HID::HIDSupport::set_supportedHIDUsages(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HIDSupport__HIDPageUsage> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::HID::HIDSupport>::get(),
                            "set_supportedHIDUsages",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HIDSupport__HIDPageUsage>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 void ::UnityEngine::InputSystem::HID::HIDSupport::Initialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::HID::HIDSupport>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
} // end anonymous namespace
