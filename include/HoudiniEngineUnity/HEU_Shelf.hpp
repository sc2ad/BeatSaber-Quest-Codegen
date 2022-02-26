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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_ShelfToolData
  class HEU_ShelfToolData;
}
// Completed forward declares
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_Shelf
  class HEU_Shelf;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HoudiniEngineUnity::HEU_Shelf);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_Shelf*, "HoudiniEngineUnity", "HEU_Shelf");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_Shelf
  // [TokenAttribute] Offset: FFFFFFFF
  class HEU_Shelf : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public System.String _shelfName
    // Size: 0x8
    // Offset: 0x10
    ::StringW shelfName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String _shelfPath
    // Size: 0x8
    // Offset: 0x18
    ::StringW shelfPath;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Boolean _defaultShelf
    // Size: 0x1
    // Offset: 0x20
    bool defaultShelf;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: defaultShelf and: tools
    char __padding2[0x7] = {};
    // public System.Collections.Generic.List`1<HoudiniEngineUnity.HEU_ShelfToolData> _tools
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ShelfToolData*>* tools;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ShelfToolData*>*) == 0x8);
    public:
    // Get instance field reference: public System.String _shelfName
    ::StringW& dyn__shelfName();
    // Get instance field reference: public System.String _shelfPath
    ::StringW& dyn__shelfPath();
    // Get instance field reference: public System.Boolean _defaultShelf
    bool& dyn__defaultShelf();
    // Get instance field reference: public System.Collections.Generic.List`1<HoudiniEngineUnity.HEU_ShelfToolData> _tools
    ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ShelfToolData*>*& dyn__tools();
    // public System.Void .ctor()
    // Offset: 0x1A60824
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HEU_Shelf* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HoudiniEngineUnity::HEU_Shelf::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HEU_Shelf*, creationType>()));
    }
  }; // HoudiniEngineUnity.HEU_Shelf
  #pragma pack(pop)
  static check_size<sizeof(HEU_Shelf), 40 + sizeof(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ShelfToolData*>*)> __HoudiniEngineUnity_HEU_ShelfSizeCheck;
  static_assert(sizeof(HEU_Shelf) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_Shelf::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
