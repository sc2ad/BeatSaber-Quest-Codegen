#pragma once
#include "System/Xml/Schema/zzzz__FacetsChecker_impl.hpp"
#include "System/Xml/Schema/zzzz__MiscFacetsChecker_def.hpp"
//  Writing Method size for method: System::Xml::Schema::MiscFacetsChecker._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::MiscFacetsChecker::*)()>(&System::Xml::Schema::MiscFacetsChecker::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x272f8d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::MiscFacetsChecker>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 System::Xml::Schema::MiscFacetsChecker::MiscFacetsChecker()  : System::Xml::Schema::FacetsChecker(THROW_UNLESS(::il2cpp_utils::New<MiscFacetsChecker>())) {}
 void System::Xml::Schema::MiscFacetsChecker::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::MiscFacetsChecker>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
