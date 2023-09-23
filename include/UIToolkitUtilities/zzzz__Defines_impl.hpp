#pragma once
#include "UIToolkitUtilities/zzzz__Defines_def.hpp"
//  Writing Method size for method: UIToolkitUtilities::Defines._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UIToolkitUtilities::Defines::*)()>(&UIToolkitUtilities::Defines::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x287b934;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UIToolkitUtilities::Defines>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void UIToolkitUtilities::Defines::__set_basePath(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "basePath", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UIToolkitUtilities::Defines>::get>(std::forward<::StringW>(value));
}
 ::StringW UIToolkitUtilities::Defines::__get_basePath()  {
return ::cordl_internals::getStaticField<::StringW, "basePath", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UIToolkitUtilities::Defines>::get>();
}
 void UIToolkitUtilities::Defines::__set_styleSheetDirectory(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "styleSheetDirectory", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UIToolkitUtilities::Defines>::get>(std::forward<::StringW>(value));
}
 ::StringW UIToolkitUtilities::Defines::__get_styleSheetDirectory()  {
return ::cordl_internals::getStaticField<::StringW, "styleSheetDirectory", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UIToolkitUtilities::Defines>::get>();
}
 void UIToolkitUtilities::Defines::__set_globalStyleSheet(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "globalStyleSheet", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UIToolkitUtilities::Defines>::get>(std::forward<::StringW>(value));
}
 ::StringW UIToolkitUtilities::Defines::__get_globalStyleSheet()  {
return ::cordl_internals::getStaticField<::StringW, "globalStyleSheet", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UIToolkitUtilities::Defines>::get>();
}
// Ctor Parameters []
 UIToolkitUtilities::Defines::Defines()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Defines>())) {}
 void UIToolkitUtilities::Defines::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UIToolkitUtilities::Defines>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
