#pragma once
#include "UnityEngine/zzzz__Object_impl.hpp"
namespace {
#include "UnityEngine/zzzz__LightProbes_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::UnityEngine::LightProbes.Internal_CallTetrahedralizationCompletedFunction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::LightProbes::Internal_CallTetrahedralizationCompletedFunction)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2b41010;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::LightProbes>::get(),
                            "Internal_CallTetrahedralizationCompletedFunction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.Internal_CallNeedsRetetrahedralizationFunction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::LightProbes::Internal_CallNeedsRetetrahedralizationFunction)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2b41074;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::LightProbes>::get(),
                            "Internal_CallNeedsRetetrahedralizationFunction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void ::UnityEngine::LightProbes::__set_tetrahedralizationCompleted(::System::Action value)  {
::cordl_internals::setStaticField<::System::Action, "tetrahedralizationCompleted", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::LightProbes>::get>(std::forward<::System::Action>(value));
}
 ::System::Action ::UnityEngine::LightProbes::__get_tetrahedralizationCompleted()  {
return ::cordl_internals::getStaticField<::System::Action, "tetrahedralizationCompleted", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::LightProbes>::get>();
}
 void ::UnityEngine::LightProbes::__set_needsRetetrahedralization(::System::Action value)  {
::cordl_internals::setStaticField<::System::Action, "needsRetetrahedralization", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::LightProbes>::get>(std::forward<::System::Action>(value));
}
 ::System::Action ::UnityEngine::LightProbes::__get_needsRetetrahedralization()  {
return ::cordl_internals::getStaticField<::System::Action, "needsRetetrahedralization", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::LightProbes>::get>();
}
 void ::UnityEngine::LightProbes::Internal_CallTetrahedralizationCompletedFunction()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::LightProbes>::get(),
                            "Internal_CallTetrahedralizationCompletedFunction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 void ::UnityEngine::LightProbes::Internal_CallNeedsRetetrahedralizationFunction()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::LightProbes>::get(),
                            "Internal_CallNeedsRetetrahedralizationFunction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
} // end anonymous namespace
