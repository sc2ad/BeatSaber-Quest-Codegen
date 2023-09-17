#pragma once
namespace {
#include "Org/BouncyCastle/Cms/zzzz__CmsAttributeTableGenerator_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__AttributeTable_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator.GetAttributes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Cms::AttributeTable (::Org::BouncyCastle::Cms::CmsAttributeTableGenerator::*)(::System::Collections::IDictionary)>(&::Org::BouncyCastle::Cms::CmsAttributeTableGenerator::GetAttributes)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Cms::CmsAttributeTableGenerator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 ::Org::BouncyCastle::Asn1::Cms::AttributeTable ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator::GetAttributes(::System::Collections::IDictionary parameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator>::get(),
                            "GetAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::AttributeTable, false>(const_cast<void*>(instance), ___internal_method, parameters);
}
} // end anonymous namespace
