// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SkinColorSO
  class SkinColorSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SkinColorSetSO
  class SkinColorSetSO;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SkinColorSetSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SkinColorSetSO*, "", "SkinColorSetSO");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: SkinColorSetSO
  // [TokenAttribute] Offset: FFFFFFFF
  class SkinColorSetSO : public ::GlobalNamespace::PersistentScriptableObject {
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
    // private SkinColorSO[] _colors
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::GlobalNamespace::SkinColorSO*> colors;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::SkinColorSO*>) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private SkinColorSO[] _colors
    ::ArrayW<::GlobalNamespace::SkinColorSO*>& dyn__colors();
    // public SkinColorSO[] get_colors()
    // Offset: 0x2A9D364
    ::ArrayW<::GlobalNamespace::SkinColorSO*> get_colors();
    // public System.Void .ctor()
    // Offset: 0x2A9D36C
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SkinColorSetSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SkinColorSetSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SkinColorSetSO*, creationType>()));
    }
  }; // SkinColorSetSO
  #pragma pack(pop)
  static check_size<sizeof(SkinColorSetSO), 24 + sizeof(::ArrayW<::GlobalNamespace::SkinColorSO*>)> __GlobalNamespace_SkinColorSetSOSizeCheck;
  static_assert(sizeof(SkinColorSetSO) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SkinColorSetSO::get_colors
// Il2CppName: get_colors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::SkinColorSO*> (GlobalNamespace::SkinColorSetSO::*)()>(&GlobalNamespace::SkinColorSetSO::get_colors)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SkinColorSetSO*), "get_colors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SkinColorSetSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
