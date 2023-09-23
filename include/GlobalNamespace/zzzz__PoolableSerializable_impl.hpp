#pragma once
#include "GlobalNamespace/zzzz__PoolableSerializable_def.hpp"
#include "GlobalNamespace/zzzz__IPoolableSerializable_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentBag_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentDictionary_2_def.hpp"
//  Writing Method size for method: GlobalNamespace::PoolableSerializable.NoDomainReloadInit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::PoolableSerializable::NoDomainReloadInit)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x1219178;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PoolableSerializable>::get(),
                            "NoDomainReloadInit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PoolableSerializable.Retain
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PoolableSerializable::*)()>(&GlobalNamespace::PoolableSerializable::Retain)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1218d4c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::PoolableSerializable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PoolableSerializable>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PoolableSerializable.Release
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PoolableSerializable::*)()>(&GlobalNamespace::PoolableSerializable::Release)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1218c40;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::PoolableSerializable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PoolableSerializable>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PoolableSerializable.Serialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PoolableSerializable::*)(LiteNetLib::Utils::NetDataWriter)>(&GlobalNamespace::PoolableSerializable::Serialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::PoolableSerializable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PoolableSerializable>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PoolableSerializable.Deserialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PoolableSerializable::*)(LiteNetLib::Utils::NetDataReader)>(&GlobalNamespace::PoolableSerializable::Deserialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::PoolableSerializable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PoolableSerializable>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PoolableSerializable.Release
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(GlobalNamespace::IPoolableSerializable)>(&GlobalNamespace::PoolableSerializable::Release)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x12191f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PoolableSerializable>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IPoolableSerializable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PoolableSerializable.GetPool
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Concurrent::ConcurrentBag_1<GlobalNamespace::IPoolableSerializable> (*)(System::Type)>(&GlobalNamespace::PoolableSerializable::GetPool)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x12192bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PoolableSerializable>::get(),
                            "GetPool",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PoolableSerializable._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PoolableSerializable::*)()>(&GlobalNamespace::PoolableSerializable::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1217670;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PoolableSerializable>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to GlobalNamespace::IPoolableSerializable
constexpr  GlobalNamespace::PoolableSerializable::operator GlobalNamespace::IPoolableSerializable() const noexcept {
return GlobalNamespace::IPoolableSerializable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to LiteNetLib::Utils::INetSerializable
constexpr  GlobalNamespace::PoolableSerializable::operator LiteNetLib::Utils::INetSerializable() const noexcept {
return LiteNetLib::Utils::INetSerializable(::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::PoolableSerializable::__set__pools(System::Collections::Concurrent::ConcurrentDictionary_2<System::Type,System::Collections::Concurrent::ConcurrentBag_1<GlobalNamespace::IPoolableSerializable>> value)  {
::cordl_internals::setStaticField<System::Collections::Concurrent::ConcurrentDictionary_2<System::Type,System::Collections::Concurrent::ConcurrentBag_1<GlobalNamespace::IPoolableSerializable>>, "_pools", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PoolableSerializable>::get>(std::forward<System::Collections::Concurrent::ConcurrentDictionary_2<System::Type,System::Collections::Concurrent::ConcurrentBag_1<GlobalNamespace::IPoolableSerializable>>>(value));
}
 System::Collections::Concurrent::ConcurrentDictionary_2<System::Type,System::Collections::Concurrent::ConcurrentBag_1<GlobalNamespace::IPoolableSerializable>> GlobalNamespace::PoolableSerializable::__get__pools()  {
return ::cordl_internals::getStaticField<System::Collections::Concurrent::ConcurrentDictionary_2<System::Type,System::Collections::Concurrent::ConcurrentBag_1<GlobalNamespace::IPoolableSerializable>>, "_pools", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PoolableSerializable>::get>();
}
constexpr void GlobalNamespace::PoolableSerializable::__set__referenceCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::PoolableSerializable::__get__referenceCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::PoolableSerializable::NoDomainReloadInit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PoolableSerializable>::get(),
                            "NoDomainReloadInit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 void GlobalNamespace::PoolableSerializable::Retain()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PoolableSerializable>::get(),
                            "Retain",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::PoolableSerializable::Release()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PoolableSerializable>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::PoolableSerializable::Serialize(LiteNetLib::Utils::NetDataWriter writer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PoolableSerializable>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writer);
}
 void GlobalNamespace::PoolableSerializable::Deserialize(LiteNetLib::Utils::NetDataReader reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PoolableSerializable>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reader);
}
template<typename T>
 T GlobalNamespace::PoolableSerializable::Obtain()  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PoolableSerializable>::get(),
                        "Obtain",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method);
}
 void GlobalNamespace::PoolableSerializable::Release(GlobalNamespace::IPoolableSerializable t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PoolableSerializable>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IPoolableSerializable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, t);
}
 System::Collections::Concurrent::ConcurrentBag_1<GlobalNamespace::IPoolableSerializable> GlobalNamespace::PoolableSerializable::GetPool(System::Type t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PoolableSerializable>::get(),
                            "GetPool",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Concurrent::ConcurrentBag_1<GlobalNamespace::IPoolableSerializable>, false>(nullptr, ___internal_method, t);
}
// Ctor Parameters []
 GlobalNamespace::PoolableSerializable::PoolableSerializable()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<PoolableSerializable>())) {}
 void GlobalNamespace::PoolableSerializable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PoolableSerializable>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
