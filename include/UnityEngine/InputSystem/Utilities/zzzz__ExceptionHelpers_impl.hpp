#pragma once
namespace {
#include "UnityEngine/InputSystem/Utilities/zzzz__ExceptionHelpers_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::ExceptionHelpers.IsExceptionIndicatingBugInCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Exception)>(&::UnityEngine::InputSystem::Utilities::ExceptionHelpers::IsExceptionIndicatingBugInCode)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x297d088;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::ExceptionHelpers>::get(),
                            "IsExceptionIndicatingBugInCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception>::get()}
                        )));
    return ___internal_method;
  }
};
 bool ::UnityEngine::InputSystem::Utilities::ExceptionHelpers::IsExceptionIndicatingBugInCode(::System::Exception exception)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::ExceptionHelpers>::get(),
                            "IsExceptionIndicatingBugInCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, exception);
}
} // end anonymous namespace
