#pragma once
namespace {
#include "GlobalNamespace/zzzz__ThreadStaticPacketPool_1_def.hpp"
#include "GlobalNamespace/zzzz__PacketPool_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ThreadStaticPacketPool_1.get_pool
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PacketPool_1<T> (*)()>(&::GlobalNamespace::ThreadStaticPacketPool_1::get_pool)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ThreadStaticPacketPool_1>::get(),
                            "get_pool",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 ::GlobalNamespace::PacketPool_1<T> ::GlobalNamespace::ThreadStaticPacketPool_1::get_pool()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ThreadStaticPacketPool_1>::get(),
                            "get_pool",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PacketPool_1<T>, false>(nullptr, ___internal_method);
}
} // end anonymous namespace
