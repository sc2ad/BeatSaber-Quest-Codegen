#pragma once
namespace {
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__IPreCompCallback_def.hpp"
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__PreCompInfo_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback.Precompute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo (::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback::*)(::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo)>(&::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback::Precompute)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 ::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo ::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback::Precompute(::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo existing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback>::get(),
                            "Precompute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo, false>(const_cast<void*>(instance), ___internal_method, existing);
}
} // end anonymous namespace
