#pragma once
#include "UnityEngine/UIElements/zzzz__DropdownMenuItem_impl.hpp"
#include "UnityEngine/UIElements/zzzz__DropdownMenuSeparator_def.hpp"
//  Writing Method size for method: UnityEngine::UIElements::DropdownMenuSeparator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::DropdownMenuSeparator::*)(::StringW)>(&UnityEngine::UIElements::DropdownMenuSeparator::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2c8fc60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::DropdownMenuSeparator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::UIElements::DropdownMenuSeparator::__set__subMenuPath_k__BackingField(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::UIElements::DropdownMenuSeparator::__get__subMenuPath_k__BackingField() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "subMenuPath", ty: "::StringW", modifiers: "", def_value: None }]
 UnityEngine::UIElements::DropdownMenuSeparator::DropdownMenuSeparator(::StringW subMenuPath)  : UnityEngine::UIElements::DropdownMenuItem(THROW_UNLESS(::il2cpp_utils::New<DropdownMenuSeparator>(subMenuPath))) {}
 void UnityEngine::UIElements::DropdownMenuSeparator::_ctor(::StringW subMenuPath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::DropdownMenuSeparator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, subMenuPath);
}
