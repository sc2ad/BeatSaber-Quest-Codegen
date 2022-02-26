// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Reflection.LocalVariableInfo
#include "System/Reflection/LocalVariableInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection::Emit
namespace System::Reflection::Emit {
  // Forward declaring type: ILGenerator
  class ILGenerator;
}
// Completed forward declares
// Type namespace: System.Reflection.Emit
namespace System::Reflection::Emit {
  // Forward declaring type: LocalBuilder
  class LocalBuilder;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Reflection::Emit::LocalBuilder);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::Emit::LocalBuilder*, "System.Reflection.Emit", "LocalBuilder");
// Type namespace: System.Reflection.Emit
namespace System::Reflection::Emit {
  // Size: 0x38
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Reflection.Emit.LocalBuilder
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 1188E4C
  // [ClassInterfaceAttribute] Offset: 1188E4C
  class LocalBuilder : public ::System::Reflection::LocalVariableInfo {
    public:
    // Writing base type padding for base size: 0x1C to desired offset: 0x20
    char ___base_padding[0x4] = {};
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.String name
    // Size: 0x8
    // Offset: 0x20
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // System.Reflection.Emit.ILGenerator ilgen
    // Size: 0x8
    // Offset: 0x28
    ::System::Reflection::Emit::ILGenerator* ilgen;
    // Field size check
    static_assert(sizeof(::System::Reflection::Emit::ILGenerator*) == 0x8);
    // private System.Int32 startOffset
    // Size: 0x4
    // Offset: 0x30
    int startOffset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 endOffset
    // Size: 0x4
    // Offset: 0x34
    int endOffset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private System.String name
    ::StringW& dyn_name();
    // Get instance field reference: System.Reflection.Emit.ILGenerator ilgen
    ::System::Reflection::Emit::ILGenerator*& dyn_ilgen();
    // Get instance field reference: private System.Int32 startOffset
    int& dyn_startOffset();
    // Get instance field reference: private System.Int32 endOffset
    int& dyn_endOffset();
  }; // System.Reflection.Emit.LocalBuilder
  #pragma pack(pop)
  static check_size<sizeof(LocalBuilder), 52 + sizeof(int)> __System_Reflection_Emit_LocalBuilderSizeCheck;
  static_assert(sizeof(LocalBuilder) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
