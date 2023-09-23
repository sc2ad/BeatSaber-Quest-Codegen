#pragma once
#include "GlobalNamespace/zzzz__IPacketPool_1_def.hpp"
#include "GlobalNamespace/zzzz__IPacketPool_def.hpp"
//  Writing Method size for method: GlobalNamespace::IPacketPool_1.Obtain
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<T (GlobalNamespace::IPacketPool_1::*)()>(&GlobalNamespace::IPacketPool_1::Obtain)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::IPacketPool_1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IPacketPool_1>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::IPacketPool_1.Release
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IPacketPool_1::*)(T)>(&GlobalNamespace::IPacketPool_1::Release)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::IPacketPool_1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IPacketPool_1>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to GlobalNamespace::IPacketPool
constexpr  GlobalNamespace::IPacketPool_1::operator GlobalNamespace::IPacketPool() const noexcept {
return GlobalNamespace::IPacketPool(::bs_hook::Il2CppWrapperType::instance);
}
 T GlobalNamespace::IPacketPool_1::Obtain()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IPacketPool_1>::get(),
                            "Obtain",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::IPacketPool_1::Release(T t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IPacketPool_1>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, t);
}
