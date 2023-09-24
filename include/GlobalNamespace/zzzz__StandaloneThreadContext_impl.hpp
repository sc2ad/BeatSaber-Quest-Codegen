#pragma once
#include "GlobalNamespace/zzzz__StandaloneThreadContext_def.hpp"
#include "GlobalNamespace/zzzz__IStandaloneThreadRunner_def.hpp"
#include "GlobalNamespace/zzzz__IStandaloneThreadRunnable_def.hpp"
//  Writing Method size for method: GlobalNamespace::StandaloneThreadContext.Run
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandaloneThreadContext::*)(GlobalNamespace::IStandaloneThreadRunnable)>(&GlobalNamespace::StandaloneThreadContext::Run)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xdcc2c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandaloneThreadContext>::get(),
                            "Run",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IStandaloneThreadRunnable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::StandaloneThreadContext._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandaloneThreadContext::*)()>(&GlobalNamespace::StandaloneThreadContext::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdcc2c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandaloneThreadContext>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to GlobalNamespace::IStandaloneThreadRunner
constexpr  GlobalNamespace::StandaloneThreadContext::operator GlobalNamespace::IStandaloneThreadRunner() const noexcept {
return GlobalNamespace::IStandaloneThreadRunner(::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::StandaloneThreadContext::__set_instance(GlobalNamespace::StandaloneThreadContext value)  {
::cordl_internals::setStaticField<GlobalNamespace::StandaloneThreadContext, "instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandaloneThreadContext>::get>(std::forward<GlobalNamespace::StandaloneThreadContext>(value));
}
 GlobalNamespace::StandaloneThreadContext GlobalNamespace::StandaloneThreadContext::__get_instance()  {
return ::cordl_internals::getStaticField<GlobalNamespace::StandaloneThreadContext, "instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandaloneThreadContext>::get>();
}
 void GlobalNamespace::StandaloneThreadContext::Run(GlobalNamespace::IStandaloneThreadRunnable runnable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandaloneThreadContext>::get(),
                            "Run",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IStandaloneThreadRunnable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, runnable);
}
 GlobalNamespace::StandaloneThreadContext GlobalNamespace::StandaloneThreadContext::New_ctor()  {
GlobalNamespace::StandaloneThreadContext o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::StandaloneThreadContext>())};
return o;
}
 void GlobalNamespace::StandaloneThreadContext::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandaloneThreadContext>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
