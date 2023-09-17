#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "System/Threading/zzzz__SpinWait_def.hpp"
//  Writing Method size for method: ::System::Threading::SpinWait.get_Count
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Threading::SpinWait::*)()>(&::System::Threading::SpinWait::get_Count)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24a4ba4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SpinWait>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SpinWait.get_NextSpinWillYield
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::SpinWait::*)()>(&::System::Threading::SpinWait::get_NextSpinWillYield)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x24a4bac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SpinWait>::get(),
                            "get_NextSpinWillYield",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SpinWait.SpinOnce
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::SpinWait::*)()>(&::System::Threading::SpinWait::SpinOnce)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24a4b08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SpinWait>::get(),
                            "SpinOnce",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SpinWait.SpinOnce
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::SpinWait::*)(int32_t)>(&::System::Threading::SpinWait::SpinOnce)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x24a4798;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SpinWait>::get(),
                            "SpinOnce",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SpinWait.SpinOnceCore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::SpinWait::*)(int32_t)>(&::System::Threading::SpinWait::SpinOnceCore)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x24a4c24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SpinWait>::get(),
                            "SpinOnceCore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SpinWait.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::SpinWait::*)()>(&::System::Threading::SpinWait::Reset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24a4dc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SpinWait>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "_count", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Threading::SpinWait::SpinWait(int32_t _count) noexcept : ::bs_hook::ValueTypeWrapper() {this->_count = _count;
}
 void ::System::Threading::SpinWait::__set_SpinCountforSpinBeforeWait(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "SpinCountforSpinBeforeWait", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SpinWait>::get>(std::forward<int32_t>(value));
}
 int32_t ::System::Threading::SpinWait::__get_SpinCountforSpinBeforeWait()  {
return ::cordl_internals::getStaticField<int32_t, "SpinCountforSpinBeforeWait", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SpinWait>::get>();
}
constexpr void ::System::Threading::SpinWait::__set__count(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Threading::SpinWait::__get__count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
 int32_t ::System::Threading::SpinWait::get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SpinWait>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool ::System::Threading::SpinWait::get_NextSpinWillYield()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SpinWait>::get(),
                            "get_NextSpinWillYield",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::System::Threading::SpinWait::SpinOnce()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SpinWait>::get(),
                            "SpinOnce",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::System::Threading::SpinWait::SpinOnce(int32_t sleep1Threshold)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SpinWait>::get(),
                            "SpinOnce",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, sleep1Threshold);
}
 void ::System::Threading::SpinWait::SpinOnceCore(int32_t sleep1Threshold)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SpinWait>::get(),
                            "SpinOnceCore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, sleep1Threshold);
}
 void ::System::Threading::SpinWait::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SpinWait>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
} // end anonymous namespace
