// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AssetFileNameExtensionAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [VisibleToOtherModulesAttribute] Offset: E6D8F8
  // [AttributeUsageAttribute] Offset: E6D8F8
  class AssetFileNameExtensionAttribute : public System::Attribute {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // [DebuggerBrowsableAttribute] Offset: 0xE6DEF8
    // private readonly System.String <preferredExtension>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* preferredExtension;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0xE6DF34
    // private readonly System.Collections.Generic.IEnumerable`1<System.String> <otherExtensions>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::IEnumerable_1<::Il2CppString*>* otherExtensions;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::IEnumerable_1<::Il2CppString*>*) == 0x8);
    public:
    // Get instance field reference: private readonly System.String <preferredExtension>k__BackingField
    ::Il2CppString*& dyn_$preferredExtension$k__BackingField();
    // Get instance field reference: private readonly System.Collections.Generic.IEnumerable`1<System.String> <otherExtensions>k__BackingField
    System::Collections::Generic::IEnumerable_1<::Il2CppString*>*& dyn_$otherExtensions$k__BackingField();
    // public System.Void .ctor(System.String preferredExtension, params System.String[] otherExtensions)
    // Offset: 0x261F290
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AssetFileNameExtensionAttribute* New_ctor(::Il2CppString* preferredExtension, ::ArrayW<::Il2CppString*> otherExtensions) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AssetFileNameExtensionAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AssetFileNameExtensionAttribute*, creationType>(preferredExtension, otherExtensions)));
    }
  }; // UnityEngine.AssetFileNameExtensionAttribute
  #pragma pack(pop)
  static check_size<sizeof(AssetFileNameExtensionAttribute), 24 + sizeof(System::Collections::Generic::IEnumerable_1<::Il2CppString*>*)> __UnityEngine_AssetFileNameExtensionAttributeSizeCheck;
  static_assert(sizeof(AssetFileNameExtensionAttribute) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AssetFileNameExtensionAttribute*, "UnityEngine", "AssetFileNameExtensionAttribute");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::AssetFileNameExtensionAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
