#pragma once
#include "GlobalNamespace/zzzz__ThreadStaticPacketPool_1_def.hpp"
#include "GlobalNamespace/zzzz__PacketPool_1_def.hpp"
 GlobalNamespace::PacketPool_1<T> GlobalNamespace::ThreadStaticPacketPool_1<T>::get_pool()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ThreadStaticPacketPool_1<T>>::get(),
                            "get_pool",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::PacketPool_1<T>, false>(nullptr, ___internal_method);
}
