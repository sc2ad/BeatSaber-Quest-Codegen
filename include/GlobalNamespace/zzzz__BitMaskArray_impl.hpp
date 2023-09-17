#pragma once
namespace {
#include "GlobalNamespace/zzzz__BitMaskArray_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__IBitMask_1_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BitMaskArray.get_bitCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::BitMaskArray::*)()>(&::GlobalNamespace::BitMaskArray::get_bitCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12144b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BitMaskArray>::get(),
                            "get_bitCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitMaskArray._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BitMaskArray::*)(int32_t)>(&::GlobalNamespace::BitMaskArray::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x12144b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BitMaskArray>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitMaskArray.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::BitMaskArray::*)(::GlobalNamespace::BitMaskArray)>(&::GlobalNamespace::BitMaskArray::Equals)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x1214534;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BitMaskArray>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BitMaskArray>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitMaskArray.SetBits
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BitMaskArray (::GlobalNamespace::BitMaskArray::*)(int32_t, uint64_t)>(&::GlobalNamespace::BitMaskArray::SetBits)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x1214598;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BitMaskArray>::get(),
                            "SetBits",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitMaskArray.GetBits
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::GlobalNamespace::BitMaskArray::*)(int32_t, int32_t)>(&::GlobalNamespace::BitMaskArray::GetBits)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x1214694;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BitMaskArray>::get(),
                            "GetBits",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitMaskArray.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::BitMaskArray::*)()>(&::GlobalNamespace::BitMaskArray::ToString)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x12147b0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::BitMaskArray),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BitMaskArray>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitMaskArray.Serialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BitMaskArray::*)(::LiteNetLib::Utils::NetDataWriter)>(&::GlobalNamespace::BitMaskArray::Serialize)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x12148a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BitMaskArray>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitMaskArray.Deserialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BitMaskArray::*)(::LiteNetLib::Utils::NetDataReader)>(&::GlobalNamespace::BitMaskArray::Deserialize)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x1214a04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BitMaskArray>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::GlobalNamespace::IBitMask_1<::GlobalNamespace::BitMaskArray>
constexpr  ::GlobalNamespace::BitMaskArray::operator ::GlobalNamespace::IBitMask_1<::GlobalNamespace::BitMaskArray>() const noexcept {
return ::GlobalNamespace::IBitMask_1<::GlobalNamespace::BitMaskArray>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::IEquatable_1<::GlobalNamespace::BitMaskArray>
constexpr  ::GlobalNamespace::BitMaskArray::operator ::System::IEquatable_1<::GlobalNamespace::BitMaskArray>() const noexcept {
return ::System::IEquatable_1<::GlobalNamespace::BitMaskArray>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::LiteNetLib::Utils::INetSerializable
constexpr  ::GlobalNamespace::BitMaskArray::operator ::LiteNetLib::Utils::INetSerializable() const noexcept {
return ::LiteNetLib::Utils::INetSerializable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BitMaskArray::__set__bitCount_k__BackingField(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::BitMaskArray::__get__bitCount_k__BackingField() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BitMaskArray::__set__data(::ArrayW<uint64_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint64_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint64_t>>(value));
}
constexpr ::ArrayW<uint64_t> ::GlobalNamespace::BitMaskArray::__get__data() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint64_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 int32_t ::GlobalNamespace::BitMaskArray::get_bitCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BitMaskArray>::get(),
                            "get_bitCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "bitCount", ty: "int32_t", modifiers: "", def_value: None }]
 ::GlobalNamespace::BitMaskArray::BitMaskArray(int32_t bitCount)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<BitMaskArray>(bitCount))) {}
 void ::GlobalNamespace::BitMaskArray::_ctor(int32_t bitCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BitMaskArray>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bitCount);
}
 bool ::GlobalNamespace::BitMaskArray::Equals(::GlobalNamespace::BitMaskArray other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BitMaskArray>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BitMaskArray>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, other);
}
 ::GlobalNamespace::BitMaskArray ::GlobalNamespace::BitMaskArray::SetBits(int32_t offset, uint64_t bits)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BitMaskArray>::get(),
                            "SetBits",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BitMaskArray, false>(const_cast<void*>(instance), ___internal_method, offset, bits);
}
 uint64_t ::GlobalNamespace::BitMaskArray::GetBits(int32_t offset, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BitMaskArray>::get(),
                            "GetBits",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint64_t, false>(const_cast<void*>(instance), ___internal_method, offset, count);
}
 ::StringW ::GlobalNamespace::BitMaskArray::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BitMaskArray>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::BitMaskArray::Serialize(::LiteNetLib::Utils::NetDataWriter writer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BitMaskArray>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writer);
}
 void ::GlobalNamespace::BitMaskArray::Deserialize(::LiteNetLib::Utils::NetDataReader reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BitMaskArray>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reader);
}
} // end anonymous namespace
