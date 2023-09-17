#pragma once
namespace {
#include "GlobalNamespace/zzzz__IDiffieHellmanKeyPair_def.hpp"
#include "BGNet/Core/zzzz__ITaskUtility_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IDiffieHellmanKeyPair.get_publicKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (::GlobalNamespace::IDiffieHellmanKeyPair::*)()>(&::GlobalNamespace::IDiffieHellmanKeyPair::get_publicKey)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::IDiffieHellmanKeyPair),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IDiffieHellmanKeyPair>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IDiffieHellmanKeyPair.GetPreMasterSecretAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>> (::GlobalNamespace::IDiffieHellmanKeyPair::*)(::BGNet::Core::ITaskUtility, ::ArrayW<uint8_t>)>(&::GlobalNamespace::IDiffieHellmanKeyPair::GetPreMasterSecretAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::IDiffieHellmanKeyPair),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IDiffieHellmanKeyPair>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IDiffieHellmanKeyPair.GetPreMasterSecret
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (::GlobalNamespace::IDiffieHellmanKeyPair::*)(::ArrayW<uint8_t>)>(&::GlobalNamespace::IDiffieHellmanKeyPair::GetPreMasterSecret)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::IDiffieHellmanKeyPair),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IDiffieHellmanKeyPair>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
 ::ArrayW<uint8_t> ::GlobalNamespace::IDiffieHellmanKeyPair::get_publicKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IDiffieHellmanKeyPair>::get(),
                            "get_publicKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>> ::GlobalNamespace::IDiffieHellmanKeyPair::GetPreMasterSecretAsync(::BGNet::Core::ITaskUtility taskUtility, ::ArrayW<uint8_t> clientPublicKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IDiffieHellmanKeyPair>::get(),
                            "GetPreMasterSecretAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::ITaskUtility>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>, false>(const_cast<void*>(instance), ___internal_method, taskUtility, clientPublicKey);
}
 ::ArrayW<uint8_t> ::GlobalNamespace::IDiffieHellmanKeyPair::GetPreMasterSecret(::ArrayW<uint8_t> clientPublicKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IDiffieHellmanKeyPair>::get(),
                            "GetPreMasterSecret",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method, clientPublicKey);
}
} // end anonymous namespace
