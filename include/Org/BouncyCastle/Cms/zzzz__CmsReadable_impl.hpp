#pragma once
namespace {
#include "Org/BouncyCastle/Cms/zzzz__CmsReadable_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsReadable.GetInputStream
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream (::Org::BouncyCastle::Cms::CmsReadable::*)()>(&::Org::BouncyCastle::Cms::CmsReadable::GetInputStream)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Cms::CmsReadable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsReadable>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 ::System::IO::Stream ::Org::BouncyCastle::Cms::CmsReadable::GetInputStream()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsReadable>::get(),
                            "GetInputStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
