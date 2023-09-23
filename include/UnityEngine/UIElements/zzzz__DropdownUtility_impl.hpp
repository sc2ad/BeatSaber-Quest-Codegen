#pragma once
#include "UnityEngine/UIElements/zzzz__DropdownUtility_def.hpp"
#include "UnityEngine/UIElements/zzzz__IGenericMenu_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
//  Writing Method size for method: UnityEngine::UIElements::DropdownUtility.CreateDropdown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UIElements::IGenericMenu (*)()>(&UnityEngine::UIElements::DropdownUtility::CreateDropdown)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2c3b050;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::DropdownUtility>::get(),
                            "CreateDropdown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void UnityEngine::UIElements::DropdownUtility::__set_MakeDropdownFunc(System::Func_1<UnityEngine::UIElements::IGenericMenu> value)  {
::cordl_internals::setStaticField<System::Func_1<UnityEngine::UIElements::IGenericMenu>, "MakeDropdownFunc", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::DropdownUtility>::get>(std::forward<System::Func_1<UnityEngine::UIElements::IGenericMenu>>(value));
}
 System::Func_1<UnityEngine::UIElements::IGenericMenu> UnityEngine::UIElements::DropdownUtility::__get_MakeDropdownFunc()  {
return ::cordl_internals::getStaticField<System::Func_1<UnityEngine::UIElements::IGenericMenu>, "MakeDropdownFunc", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::DropdownUtility>::get>();
}
 UnityEngine::UIElements::IGenericMenu UnityEngine::UIElements::DropdownUtility::CreateDropdown()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::DropdownUtility>::get(),
                            "CreateDropdown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::IGenericMenu, false>(nullptr, ___internal_method);
}
