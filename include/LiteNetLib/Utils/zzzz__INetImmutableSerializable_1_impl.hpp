#pragma once
namespace {
#include "LiteNetLib/Utils/zzzz__INetImmutableSerializable_1_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
//  Writing Method size for method: ::LiteNetLib::Utils::INetImmutableSerializable_1.Serialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::Utils::INetImmutableSerializable_1::*)(::LiteNetLib::Utils::NetDataWriter)>(&::LiteNetLib::Utils::INetImmutableSerializable_1::Serialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::LiteNetLib::Utils::INetImmutableSerializable_1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::INetImmutableSerializable_1>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::INetImmutableSerializable_1.CreateFromSerializedData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<T (::LiteNetLib::Utils::INetImmutableSerializable_1::*)(::LiteNetLib::Utils::NetDataReader)>(&::LiteNetLib::Utils::INetImmutableSerializable_1::CreateFromSerializedData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::LiteNetLib::Utils::INetImmutableSerializable_1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::INetImmutableSerializable_1>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
 void ::LiteNetLib::Utils::INetImmutableSerializable_1::Serialize(::LiteNetLib::Utils::NetDataWriter writer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::INetImmutableSerializable_1>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writer);
}
 T ::LiteNetLib::Utils::INetImmutableSerializable_1::CreateFromSerializedData(::LiteNetLib::Utils::NetDataReader reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::INetImmutableSerializable_1>::get(),
                            "CreateFromSerializedData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(instance), ___internal_method, reader);
}
} // end anonymous namespace
