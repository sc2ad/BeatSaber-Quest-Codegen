// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Linq.Expressions.Interpreter.Instruction
#include "System/Linq/Expressions/Interpreter/Instruction.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Linq::Expressions::Interpreter
namespace System::Linq::Expressions::Interpreter {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Linq.Expressions.Interpreter
namespace System::Linq::Expressions::Interpreter {
  // Forward declaring type: LessThanInstruction
  class LessThanInstruction;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::LessThanInstruction);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::LessThanInstruction*, "System.Linq.Expressions.Interpreter", "LessThanInstruction");
// Type namespace: System.Linq.Expressions.Interpreter
namespace System::Linq::Expressions::Interpreter {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Linq.Expressions.Interpreter.LessThanInstruction
  // [TokenAttribute] Offset: FFFFFFFF
  class LessThanInstruction : public ::System::Linq::Expressions::Interpreter::Instruction {
    public:
    // Nested type: ::System::Linq::Expressions::Interpreter::LessThanInstruction::LessThanSByte
    class LessThanSByte;
    // Nested type: ::System::Linq::Expressions::Interpreter::LessThanInstruction::LessThanInt16
    class LessThanInt16;
    // Nested type: ::System::Linq::Expressions::Interpreter::LessThanInstruction::LessThanChar
    class LessThanChar;
    // Nested type: ::System::Linq::Expressions::Interpreter::LessThanInstruction::LessThanInt32
    class LessThanInt32;
    // Nested type: ::System::Linq::Expressions::Interpreter::LessThanInstruction::LessThanInt64
    class LessThanInt64;
    // Nested type: ::System::Linq::Expressions::Interpreter::LessThanInstruction::LessThanByte
    class LessThanByte;
    // Nested type: ::System::Linq::Expressions::Interpreter::LessThanInstruction::LessThanUInt16
    class LessThanUInt16;
    // Nested type: ::System::Linq::Expressions::Interpreter::LessThanInstruction::LessThanUInt32
    class LessThanUInt32;
    // Nested type: ::System::Linq::Expressions::Interpreter::LessThanInstruction::LessThanUInt64
    class LessThanUInt64;
    // Nested type: ::System::Linq::Expressions::Interpreter::LessThanInstruction::LessThanSingle
    class LessThanSingle;
    // Nested type: ::System::Linq::Expressions::Interpreter::LessThanInstruction::LessThanDouble
    class LessThanDouble;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private readonly System.Object _nullValue
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppObject* nullValue;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    public:
    // Creating conversion operator: operator ::Il2CppObject*
    constexpr operator ::Il2CppObject*() const noexcept {
      return nullValue;
    }
    // Get static field: static private System.Linq.Expressions.Interpreter.Instruction s_SByte
    static ::System::Linq::Expressions::Interpreter::Instruction* _get_s_SByte();
    // Set static field: static private System.Linq.Expressions.Interpreter.Instruction s_SByte
    static void _set_s_SByte(::System::Linq::Expressions::Interpreter::Instruction* value);
    // Get static field: static private System.Linq.Expressions.Interpreter.Instruction s_Int16
    static ::System::Linq::Expressions::Interpreter::Instruction* _get_s_Int16();
    // Set static field: static private System.Linq.Expressions.Interpreter.Instruction s_Int16
    static void _set_s_Int16(::System::Linq::Expressions::Interpreter::Instruction* value);
    // Get static field: static private System.Linq.Expressions.Interpreter.Instruction s_Char
    static ::System::Linq::Expressions::Interpreter::Instruction* _get_s_Char();
    // Set static field: static private System.Linq.Expressions.Interpreter.Instruction s_Char
    static void _set_s_Char(::System::Linq::Expressions::Interpreter::Instruction* value);
    // Get static field: static private System.Linq.Expressions.Interpreter.Instruction s_Int32
    static ::System::Linq::Expressions::Interpreter::Instruction* _get_s_Int32();
    // Set static field: static private System.Linq.Expressions.Interpreter.Instruction s_Int32
    static void _set_s_Int32(::System::Linq::Expressions::Interpreter::Instruction* value);
    // Get static field: static private System.Linq.Expressions.Interpreter.Instruction s_Int64
    static ::System::Linq::Expressions::Interpreter::Instruction* _get_s_Int64();
    // Set static field: static private System.Linq.Expressions.Interpreter.Instruction s_Int64
    static void _set_s_Int64(::System::Linq::Expressions::Interpreter::Instruction* value);
    // Get static field: static private System.Linq.Expressions.Interpreter.Instruction s_Byte
    static ::System::Linq::Expressions::Interpreter::Instruction* _get_s_Byte();
    // Set static field: static private System.Linq.Expressions.Interpreter.Instruction s_Byte
    static void _set_s_Byte(::System::Linq::Expressions::Interpreter::Instruction* value);
    // Get static field: static private System.Linq.Expressions.Interpreter.Instruction s_UInt16
    static ::System::Linq::Expressions::Interpreter::Instruction* _get_s_UInt16();
    // Set static field: static private System.Linq.Expressions.Interpreter.Instruction s_UInt16
    static void _set_s_UInt16(::System::Linq::Expressions::Interpreter::Instruction* value);
    // Get static field: static private System.Linq.Expressions.Interpreter.Instruction s_UInt32
    static ::System::Linq::Expressions::Interpreter::Instruction* _get_s_UInt32();
    // Set static field: static private System.Linq.Expressions.Interpreter.Instruction s_UInt32
    static void _set_s_UInt32(::System::Linq::Expressions::Interpreter::Instruction* value);
    // Get static field: static private System.Linq.Expressions.Interpreter.Instruction s_UInt64
    static ::System::Linq::Expressions::Interpreter::Instruction* _get_s_UInt64();
    // Set static field: static private System.Linq.Expressions.Interpreter.Instruction s_UInt64
    static void _set_s_UInt64(::System::Linq::Expressions::Interpreter::Instruction* value);
    // Get static field: static private System.Linq.Expressions.Interpreter.Instruction s_Single
    static ::System::Linq::Expressions::Interpreter::Instruction* _get_s_Single();
    // Set static field: static private System.Linq.Expressions.Interpreter.Instruction s_Single
    static void _set_s_Single(::System::Linq::Expressions::Interpreter::Instruction* value);
    // Get static field: static private System.Linq.Expressions.Interpreter.Instruction s_Double
    static ::System::Linq::Expressions::Interpreter::Instruction* _get_s_Double();
    // Set static field: static private System.Linq.Expressions.Interpreter.Instruction s_Double
    static void _set_s_Double(::System::Linq::Expressions::Interpreter::Instruction* value);
    // Get static field: static private System.Linq.Expressions.Interpreter.Instruction s_liftedToNullSByte
    static ::System::Linq::Expressions::Interpreter::Instruction* _get_s_liftedToNullSByte();
    // Set static field: static private System.Linq.Expressions.Interpreter.Instruction s_liftedToNullSByte
    static void _set_s_liftedToNullSByte(::System::Linq::Expressions::Interpreter::Instruction* value);
    // Get static field: static private System.Linq.Expressions.Interpreter.Instruction s_liftedToNullInt16
    static ::System::Linq::Expressions::Interpreter::Instruction* _get_s_liftedToNullInt16();
    // Set static field: static private System.Linq.Expressions.Interpreter.Instruction s_liftedToNullInt16
    static void _set_s_liftedToNullInt16(::System::Linq::Expressions::Interpreter::Instruction* value);
    // Get static field: static private System.Linq.Expressions.Interpreter.Instruction s_liftedToNullChar
    static ::System::Linq::Expressions::Interpreter::Instruction* _get_s_liftedToNullChar();
    // Set static field: static private System.Linq.Expressions.Interpreter.Instruction s_liftedToNullChar
    static void _set_s_liftedToNullChar(::System::Linq::Expressions::Interpreter::Instruction* value);
    // Get static field: static private System.Linq.Expressions.Interpreter.Instruction s_liftedToNullInt32
    static ::System::Linq::Expressions::Interpreter::Instruction* _get_s_liftedToNullInt32();
    // Set static field: static private System.Linq.Expressions.Interpreter.Instruction s_liftedToNullInt32
    static void _set_s_liftedToNullInt32(::System::Linq::Expressions::Interpreter::Instruction* value);
    // Get static field: static private System.Linq.Expressions.Interpreter.Instruction s_liftedToNullInt64
    static ::System::Linq::Expressions::Interpreter::Instruction* _get_s_liftedToNullInt64();
    // Set static field: static private System.Linq.Expressions.Interpreter.Instruction s_liftedToNullInt64
    static void _set_s_liftedToNullInt64(::System::Linq::Expressions::Interpreter::Instruction* value);
    // Get static field: static private System.Linq.Expressions.Interpreter.Instruction s_liftedToNullByte
    static ::System::Linq::Expressions::Interpreter::Instruction* _get_s_liftedToNullByte();
    // Set static field: static private System.Linq.Expressions.Interpreter.Instruction s_liftedToNullByte
    static void _set_s_liftedToNullByte(::System::Linq::Expressions::Interpreter::Instruction* value);
    // Get static field: static private System.Linq.Expressions.Interpreter.Instruction s_liftedToNullUInt16
    static ::System::Linq::Expressions::Interpreter::Instruction* _get_s_liftedToNullUInt16();
    // Set static field: static private System.Linq.Expressions.Interpreter.Instruction s_liftedToNullUInt16
    static void _set_s_liftedToNullUInt16(::System::Linq::Expressions::Interpreter::Instruction* value);
    // Get static field: static private System.Linq.Expressions.Interpreter.Instruction s_liftedToNullUInt32
    static ::System::Linq::Expressions::Interpreter::Instruction* _get_s_liftedToNullUInt32();
    // Set static field: static private System.Linq.Expressions.Interpreter.Instruction s_liftedToNullUInt32
    static void _set_s_liftedToNullUInt32(::System::Linq::Expressions::Interpreter::Instruction* value);
    // Get static field: static private System.Linq.Expressions.Interpreter.Instruction s_liftedToNullUInt64
    static ::System::Linq::Expressions::Interpreter::Instruction* _get_s_liftedToNullUInt64();
    // Set static field: static private System.Linq.Expressions.Interpreter.Instruction s_liftedToNullUInt64
    static void _set_s_liftedToNullUInt64(::System::Linq::Expressions::Interpreter::Instruction* value);
    // Get static field: static private System.Linq.Expressions.Interpreter.Instruction s_liftedToNullSingle
    static ::System::Linq::Expressions::Interpreter::Instruction* _get_s_liftedToNullSingle();
    // Set static field: static private System.Linq.Expressions.Interpreter.Instruction s_liftedToNullSingle
    static void _set_s_liftedToNullSingle(::System::Linq::Expressions::Interpreter::Instruction* value);
    // Get static field: static private System.Linq.Expressions.Interpreter.Instruction s_liftedToNullDouble
    static ::System::Linq::Expressions::Interpreter::Instruction* _get_s_liftedToNullDouble();
    // Set static field: static private System.Linq.Expressions.Interpreter.Instruction s_liftedToNullDouble
    static void _set_s_liftedToNullDouble(::System::Linq::Expressions::Interpreter::Instruction* value);
    // Get instance field reference: private readonly System.Object _nullValue
    ::Il2CppObject*& dyn__nullValue();
    // private System.Void .ctor(System.Object nullValue)
    // Offset: 0x1C00E78
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LessThanInstruction* New_ctor(::Il2CppObject* nullValue) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::Interpreter::LessThanInstruction::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LessThanInstruction*, creationType>(nullValue)));
    }
    // static public System.Linq.Expressions.Interpreter.Instruction Create(System.Type type, System.Boolean liftedToNull)
    // Offset: 0x1BFB154
    static ::System::Linq::Expressions::Interpreter::Instruction* Create(::System::Type* type, bool liftedToNull);
    // public override System.Int32 get_ConsumedStack()
    // Offset: 0x1C00E20
    // Implemented from: System.Linq.Expressions.Interpreter.Instruction
    // Base method: System.Int32 Instruction::get_ConsumedStack()
    int get_ConsumedStack();
    // public override System.Int32 get_ProducedStack()
    // Offset: 0x1C00E28
    // Implemented from: System.Linq.Expressions.Interpreter.Instruction
    // Base method: System.Int32 Instruction::get_ProducedStack()
    int get_ProducedStack();
    // public override System.String get_InstructionName()
    // Offset: 0x1C00E30
    // Implemented from: System.Linq.Expressions.Interpreter.Instruction
    // Base method: System.String Instruction::get_InstructionName()
    ::StringW get_InstructionName();
  }; // System.Linq.Expressions.Interpreter.LessThanInstruction
  #pragma pack(pop)
  static check_size<sizeof(LessThanInstruction), 16 + sizeof(::Il2CppObject*)> __System_Linq_Expressions_Interpreter_LessThanInstructionSizeCheck;
  static_assert(sizeof(LessThanInstruction) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::LessThanInstruction::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::LessThanInstruction::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Interpreter::Instruction* (*)(::System::Type*, bool)>(&System::Linq::Expressions::Interpreter::LessThanInstruction::Create)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* liftedToNull = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::LessThanInstruction*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, liftedToNull});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::LessThanInstruction::get_ConsumedStack
// Il2CppName: get_ConsumedStack
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Linq::Expressions::Interpreter::LessThanInstruction::*)()>(&System::Linq::Expressions::Interpreter::LessThanInstruction::get_ConsumedStack)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::LessThanInstruction*), "get_ConsumedStack", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::LessThanInstruction::get_ProducedStack
// Il2CppName: get_ProducedStack
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Linq::Expressions::Interpreter::LessThanInstruction::*)()>(&System::Linq::Expressions::Interpreter::LessThanInstruction::get_ProducedStack)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::LessThanInstruction*), "get_ProducedStack", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::LessThanInstruction::get_InstructionName
// Il2CppName: get_InstructionName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Linq::Expressions::Interpreter::LessThanInstruction::*)()>(&System::Linq::Expressions::Interpreter::LessThanInstruction::get_InstructionName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::LessThanInstruction*), "get_InstructionName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
