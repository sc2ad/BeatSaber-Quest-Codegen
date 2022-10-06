// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SerializationHelpers
  class SerializationHelpers;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SerializationHelpers);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SerializationHelpers*, "", "SerializationHelpers");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: SerializationHelpers
  // [TokenAttribute] Offset: FFFFFFFF
  class SerializationHelpers : public ::Il2CppObject {
    public:
    // public System.Void .ctor()
    // Offset: 0x2A82AF0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SerializationHelpers* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SerializationHelpers::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SerializationHelpers*, creationType>()));
    }
    // static public T DeserializeData(System.Byte[] data)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static T DeserializeData(::ArrayW<uint8_t> data) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SerializationHelpers::DeserializeData");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("", "SerializationHelpers", "DeserializeData", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(data)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, data);
    }
    // static public System.Byte[] SerializeObject(T serializableObject)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static ::ArrayW<uint8_t> SerializeObject(T serializableObject) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SerializationHelpers::SerializeObject");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("", "SerializationHelpers", "SerializeObject", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(serializableObject)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::ArrayW<uint8_t>, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, serializableObject);
    }
    // static public T DeserializeDataFromPlayerPrefs(System.String key)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static T DeserializeDataFromPlayerPrefs(::StringW key) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SerializationHelpers::DeserializeDataFromPlayerPrefs");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("", "SerializationHelpers", "DeserializeDataFromPlayerPrefs", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(key)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, key);
    }
    // static public System.Void SerializeObjectIntoPlayerPrefs(System.String key, T serializableObject)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static void SerializeObjectIntoPlayerPrefs(::StringW key, T serializableObject) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SerializationHelpers::SerializeObjectIntoPlayerPrefs");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("", "SerializationHelpers", "SerializeObjectIntoPlayerPrefs", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(key), ::il2cpp_utils::ExtractType(serializableObject)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, key, serializableObject);
    }
    // static public T DeserializeDataFromFile(System.String filePath)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static T DeserializeDataFromFile(::StringW filePath) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SerializationHelpers::DeserializeDataFromFile");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("", "SerializationHelpers", "DeserializeDataFromFile", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(filePath)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, filePath);
    }
    // static public System.Void SerializeObjectToFile(System.String filePath, T serializableObject)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static void SerializeObjectToFile(::StringW filePath, T serializableObject) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SerializationHelpers::SerializeObjectToFile");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("", "SerializationHelpers", "SerializeObjectToFile", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(filePath), ::il2cpp_utils::ExtractType(serializableObject)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, filePath, serializableObject);
    }
  }; // SerializationHelpers
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SerializationHelpers::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SerializationHelpers::DeserializeData
// Il2CppName: DeserializeData
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: GlobalNamespace::SerializationHelpers::SerializeObject
// Il2CppName: SerializeObject
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: GlobalNamespace::SerializationHelpers::DeserializeDataFromPlayerPrefs
// Il2CppName: DeserializeDataFromPlayerPrefs
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: GlobalNamespace::SerializationHelpers::SerializeObjectIntoPlayerPrefs
// Il2CppName: SerializeObjectIntoPlayerPrefs
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: GlobalNamespace::SerializationHelpers::DeserializeDataFromFile
// Il2CppName: DeserializeDataFromFile
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: GlobalNamespace::SerializationHelpers::SerializeObjectToFile
// Il2CppName: SerializeObjectToFile
// Cannot write MetadataGetter for generic methods!
