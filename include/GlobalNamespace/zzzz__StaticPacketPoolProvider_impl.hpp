#pragma once
#include "GlobalNamespace/zzzz__StaticPacketPoolProvider_def.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentDictionary_2_def.hpp"
#include "GlobalNamespace/zzzz__IPacketPool_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "GlobalNamespace/zzzz__PacketPool_1_def.hpp"
//  Writing Method size for method: GlobalNamespace::StaticPacketPoolProvider.TryGetPacketPool
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Type, ByRef<GlobalNamespace::IPacketPool>)>(&GlobalNamespace::StaticPacketPoolProvider::TryGetPacketPool)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xdb25c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StaticPacketPoolProvider>::get(),
                            "TryGetPacketPool",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::IPacketPool>>::get()}
                        )));
    return ___internal_method;
  }
};
 void GlobalNamespace::StaticPacketPoolProvider::__set__staticPools(System::Collections::Concurrent::ConcurrentDictionary_2<System::Type,GlobalNamespace::IPacketPool> value)  {
::cordl_internals::setStaticField<System::Collections::Concurrent::ConcurrentDictionary_2<System::Type,GlobalNamespace::IPacketPool>, "_staticPools", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StaticPacketPoolProvider>::get>(std::forward<System::Collections::Concurrent::ConcurrentDictionary_2<System::Type,GlobalNamespace::IPacketPool>>(value));
}
 System::Collections::Concurrent::ConcurrentDictionary_2<System::Type,GlobalNamespace::IPacketPool> GlobalNamespace::StaticPacketPoolProvider::__get__staticPools()  {
return ::cordl_internals::getStaticField<System::Collections::Concurrent::ConcurrentDictionary_2<System::Type,GlobalNamespace::IPacketPool>, "_staticPools", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StaticPacketPoolProvider>::get>();
}
template<typename T>
 GlobalNamespace::PacketPool_1<T> GlobalNamespace::StaticPacketPoolProvider::GetPacketPool()  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StaticPacketPoolProvider>::get(),
                        "GetPacketPool",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::PacketPool_1<T>, false>(nullptr, ___internal_method);
}
 bool GlobalNamespace::StaticPacketPoolProvider::TryGetPacketPool(System::Type t, ByRef<GlobalNamespace::IPacketPool> pool)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StaticPacketPoolProvider>::get(),
                            "TryGetPacketPool",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::IPacketPool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, t, pool);
}
