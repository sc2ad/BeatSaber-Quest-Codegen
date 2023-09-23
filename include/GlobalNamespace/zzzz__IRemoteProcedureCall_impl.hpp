#pragma once
#include "GlobalNamespace/zzzz__IRemoteProcedureCall_def.hpp"
#include "GlobalNamespace/zzzz__IPoolablePacket_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
//  Writing Method size for method: GlobalNamespace::IRemoteProcedureCall.get_syncTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::IRemoteProcedureCall::*)()>(&GlobalNamespace::IRemoteProcedureCall::get_syncTime)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::IRemoteProcedureCall),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IRemoteProcedureCall>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to LiteNetLib::Utils::INetSerializable
constexpr  GlobalNamespace::IRemoteProcedureCall::operator LiteNetLib::Utils::INetSerializable() const noexcept {
return LiteNetLib::Utils::INetSerializable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to GlobalNamespace::IPoolablePacket
constexpr  GlobalNamespace::IRemoteProcedureCall::operator GlobalNamespace::IPoolablePacket() const noexcept {
return GlobalNamespace::IPoolablePacket(::bs_hook::Il2CppWrapperType::instance);
}
 float_t GlobalNamespace::IRemoteProcedureCall::get_syncTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IRemoteProcedureCall>::get(),
                            "get_syncTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
