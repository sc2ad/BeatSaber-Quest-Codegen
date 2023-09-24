#pragma once
#include "GlobalNamespace/zzzz__PacketPool_1_def.hpp"
#include "GlobalNamespace/zzzz__IPoolablePacket_def.hpp"
#include "GlobalNamespace/zzzz__IPacketPool_1_def.hpp"
#include "GlobalNamespace/zzzz__IPacketPool_def.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentBag_1_def.hpp"
/// @brief Convert operator to GlobalNamespace::IPacketPool_1<T>
constexpr  GlobalNamespace::PacketPool_1<T>::operator GlobalNamespace::IPacketPool_1<T>() const noexcept {
return GlobalNamespace::IPacketPool_1<T>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to GlobalNamespace::IPacketPool
constexpr  GlobalNamespace::PacketPool_1<T>::operator GlobalNamespace::IPacketPool() const noexcept {
return GlobalNamespace::IPacketPool(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PacketPool_1<T>::__set__bag(System::Collections::Concurrent::ConcurrentBag_1<T> value)  {
::cordl_internals::setInstanceField<System::Collections::Concurrent::ConcurrentBag_1<T>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Concurrent::ConcurrentBag_1<T>>(value));
}
constexpr System::Collections::Concurrent::ConcurrentBag_1<T> GlobalNamespace::PacketPool_1<T>::__get__bag() const {
return ::cordl_internals::getInstanceField<System::Collections::Concurrent::ConcurrentBag_1<T>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 T GlobalNamespace::PacketPool_1<T>::Obtain()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PacketPool_1<T>>::get(),
                            "Obtain",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::PacketPool_1<T>::Release(T t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PacketPool_1<T>>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, t);
}
 void GlobalNamespace::PacketPool_1<T>::Fill()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PacketPool_1<T>>::get(),
                            "Fill",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::PacketPool_1<T>::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PacketPool_1<T>>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::PacketPool_1<T>::IPacketPool_Release(GlobalNamespace::IPoolablePacket o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PacketPool_1<T>>::get(),
                            "IPacketPool.Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IPoolablePacket>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, o);
}
 GlobalNamespace::PacketPool_1<T> GlobalNamespace::PacketPool_1<T>::New_ctor()  {
GlobalNamespace::PacketPool_1<T> o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::PacketPool_1<T>>())};
return o;
}
 void GlobalNamespace::PacketPool_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PacketPool_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
