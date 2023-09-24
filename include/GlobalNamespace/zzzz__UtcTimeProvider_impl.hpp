#pragma once
#include "GlobalNamespace/zzzz__UtcTimeProvider_def.hpp"
#include "BGNet/Core/zzzz__ITimeProvider_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: GlobalNamespace::UtcTimeProvider.GetTimeMs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (GlobalNamespace::UtcTimeProvider::*)()>(&GlobalNamespace::UtcTimeProvider::GetTimeMs)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xdcdc60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UtcTimeProvider>::get(),
                            "GetTimeMs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UtcTimeProvider.GetTicks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (GlobalNamespace::UtcTimeProvider::*)()>(&GlobalNamespace::UtcTimeProvider::GetTicks)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xdbc8b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UtcTimeProvider>::get(),
                            "GetTicks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UtcTimeProvider._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UtcTimeProvider::*)()>(&GlobalNamespace::UtcTimeProvider::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdcdc8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UtcTimeProvider>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to BGNet::Core::ITimeProvider
constexpr  GlobalNamespace::UtcTimeProvider::operator BGNet::Core::ITimeProvider() const noexcept {
return BGNet::Core::ITimeProvider(::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::UtcTimeProvider::__set__epoch(System::DateTime value)  {
::cordl_internals::setStaticField<System::DateTime, "_epoch", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UtcTimeProvider>::get>(std::forward<System::DateTime>(value));
}
 System::DateTime GlobalNamespace::UtcTimeProvider::__get__epoch()  {
return ::cordl_internals::getStaticField<System::DateTime, "_epoch", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UtcTimeProvider>::get>();
}
 void GlobalNamespace::UtcTimeProvider::__set_instance(GlobalNamespace::UtcTimeProvider value)  {
::cordl_internals::setStaticField<GlobalNamespace::UtcTimeProvider, "instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UtcTimeProvider>::get>(std::forward<GlobalNamespace::UtcTimeProvider>(value));
}
 GlobalNamespace::UtcTimeProvider GlobalNamespace::UtcTimeProvider::__get_instance()  {
return ::cordl_internals::getStaticField<GlobalNamespace::UtcTimeProvider, "instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UtcTimeProvider>::get>();
}
 int64_t GlobalNamespace::UtcTimeProvider::GetTimeMs()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UtcTimeProvider>::get(),
                            "GetTimeMs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int64_t GlobalNamespace::UtcTimeProvider::GetTicks()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UtcTimeProvider>::get(),
                            "GetTicks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::UtcTimeProvider GlobalNamespace::UtcTimeProvider::New_ctor()  {
GlobalNamespace::UtcTimeProvider o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::UtcTimeProvider>())};
return o;
}
 void GlobalNamespace::UtcTimeProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UtcTimeProvider>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
