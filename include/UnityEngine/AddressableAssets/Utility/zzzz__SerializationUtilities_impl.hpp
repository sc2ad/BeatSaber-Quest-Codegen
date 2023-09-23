#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/AddressableAssets/Utility/zzzz__SerializationUtilities_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::AddressableAssets::Utility::UnityEngine__AddressableAssets__Utility__SerializationUtilities__ObjectType::UnityEngine__AddressableAssets__Utility__SerializationUtilities__ObjectType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::AddressableAssets::Utility::UnityEngine__AddressableAssets__Utility__SerializationUtilities__ObjectType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::AddressableAssets::Utility::UnityEngine__AddressableAssets__Utility__SerializationUtilities__ObjectType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::AddressableAssets::Utility::UnityEngine__AddressableAssets__Utility__SerializationUtilities__ObjectType  UnityEngine::AddressableAssets::Utility::UnityEngine__AddressableAssets__Utility__SerializationUtilities__ObjectType::AsciiString{0};
constexpr UnityEngine::AddressableAssets::Utility::UnityEngine__AddressableAssets__Utility__SerializationUtilities__ObjectType  UnityEngine::AddressableAssets::Utility::UnityEngine__AddressableAssets__Utility__SerializationUtilities__ObjectType::UnicodeString{1};
constexpr UnityEngine::AddressableAssets::Utility::UnityEngine__AddressableAssets__Utility__SerializationUtilities__ObjectType  UnityEngine::AddressableAssets::Utility::UnityEngine__AddressableAssets__Utility__SerializationUtilities__ObjectType::UInt16{2};
constexpr UnityEngine::AddressableAssets::Utility::UnityEngine__AddressableAssets__Utility__SerializationUtilities__ObjectType  UnityEngine::AddressableAssets::Utility::UnityEngine__AddressableAssets__Utility__SerializationUtilities__ObjectType::UInt32{3};
constexpr UnityEngine::AddressableAssets::Utility::UnityEngine__AddressableAssets__Utility__SerializationUtilities__ObjectType  UnityEngine::AddressableAssets::Utility::UnityEngine__AddressableAssets__Utility__SerializationUtilities__ObjectType::Int32{4};
constexpr UnityEngine::AddressableAssets::Utility::UnityEngine__AddressableAssets__Utility__SerializationUtilities__ObjectType  UnityEngine::AddressableAssets::Utility::UnityEngine__AddressableAssets__Utility__SerializationUtilities__ObjectType::Hash128{5};
constexpr UnityEngine::AddressableAssets::Utility::UnityEngine__AddressableAssets__Utility__SerializationUtilities__ObjectType  UnityEngine::AddressableAssets::Utility::UnityEngine__AddressableAssets__Utility__SerializationUtilities__ObjectType::Type{6};
constexpr UnityEngine::AddressableAssets::Utility::UnityEngine__AddressableAssets__Utility__SerializationUtilities__ObjectType  UnityEngine::AddressableAssets::Utility::UnityEngine__AddressableAssets__Utility__SerializationUtilities__ObjectType::JsonObject{7};
//  Writing Method size for method: UnityEngine::AddressableAssets::Utility::SerializationUtilities.ReadInt32FromByteArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::ArrayW<uint8_t>, int32_t)>(&UnityEngine::AddressableAssets::Utility::SerializationUtilities::ReadInt32FromByteArray)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2897bec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Utility::SerializationUtilities>::get(),
                            "ReadInt32FromByteArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::Utility::SerializationUtilities.WriteInt32ToByteArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&UnityEngine::AddressableAssets::Utility::SerializationUtilities::WriteInt32ToByteArray)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2897c60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Utility::SerializationUtilities>::get(),
                            "WriteInt32ToByteArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::Utility::SerializationUtilities.ReadObjectFromByteArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(::ArrayW<uint8_t>, int32_t)>(&UnityEngine::AddressableAssets::Utility::SerializationUtilities::ReadObjectFromByteArray)> {
  constexpr static std::size_t size = 0x5a0;
  constexpr static std::size_t addrs = 0x2897ce4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Utility::SerializationUtilities>::get(),
                            "ReadObjectFromByteArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::Utility::SerializationUtilities.WriteObjectToByteList
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::bs_hook::Il2CppWrapperType, System::Collections::Generic::List_1<uint8_t>)>(&UnityEngine::AddressableAssets::Utility::SerializationUtilities::WriteObjectToByteList)> {
  constexpr static std::size_t size = 0xb60;
  constexpr static std::size_t addrs = 0x2898284;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Utility::SerializationUtilities>::get(),
                            "WriteObjectToByteList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
 int32_t UnityEngine::AddressableAssets::Utility::SerializationUtilities::ReadInt32FromByteArray(::ArrayW<uint8_t> data, int32_t offset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Utility::SerializationUtilities>::get(),
                            "ReadInt32FromByteArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, data, offset);
}
 int32_t UnityEngine::AddressableAssets::Utility::SerializationUtilities::WriteInt32ToByteArray(::ArrayW<uint8_t> data, int32_t val, int32_t offset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Utility::SerializationUtilities>::get(),
                            "WriteInt32ToByteArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, data, val, offset);
}
 ::bs_hook::Il2CppWrapperType UnityEngine::AddressableAssets::Utility::SerializationUtilities::ReadObjectFromByteArray(::ArrayW<uint8_t> keyData, int32_t dataIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Utility::SerializationUtilities>::get(),
                            "ReadObjectFromByteArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, keyData, dataIndex);
}
 int32_t UnityEngine::AddressableAssets::Utility::SerializationUtilities::WriteObjectToByteList(::bs_hook::Il2CppWrapperType obj, System::Collections::Generic::List_1<uint8_t> buffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Utility::SerializationUtilities>::get(),
                            "WriteObjectToByteList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, obj, buffer);
}
