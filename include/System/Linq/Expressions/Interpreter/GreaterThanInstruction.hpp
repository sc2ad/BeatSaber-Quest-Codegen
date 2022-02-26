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
  // Forward declaring type: GreaterThanInstruction
  class GreaterThanInstruction;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::GreaterThanInstruction);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::GreaterThanInstruction*, "System.Linq.Expressions.Interpreter", "GreaterThanInstruction");
// Type namespace: System.Linq.Expressions.Interpreter
namespace System::Linq::Expressions::Interpreter {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Linq.Expressions.Interpreter.GreaterThanInstruction
  // [TokenAttribute] Offset: FFFFFFFF
  class GreaterThanInstruction : public ::System::Linq::Expressions::Interpreter::Instruction {
    public:
    // Nested type: ::System::Linq::Expressions::Interpreter::GreaterThanInstruction::GreaterThanSByte
    class GreaterThanSByte;
    // Nested type: ::System::Linq::Expressions::Interpreter::GreaterThanInstruction::GreaterThanInt16
    class GreaterThanInt16;
    // Nested type: ::System::Linq::Expressions::Interpreter::GreaterThanInstruction::GreaterThanChar
    class GreaterThanChar;
    // Nested type: ::System::Linq::Expressions::Interpreter::GreaterThanInstruction::GreaterThanInt32
    class GreaterThanInt32;
    // Nested type: ::System::Linq::Expressions::Interpreter::GreaterThanInstruction::GreaterThanInt64
    class GreaterThanInt64;
    // Nested type: ::System::Linq::Expressions::Interpreter::GreaterThanInstruction::GreaterThanByte
    class GreaterThanByte;
    // Nested type: ::System::Linq::Expressions::Interpreter::GreaterThanInstruction::GreaterThanUInt16
    class GreaterThanUInt16;
    // Nested type: ::System::Linq::Expressions::Interpreter::GreaterThanInstruction::GreaterThanUInt32
    class GreaterThanUInt32;
    // Nested type: ::System::Linq::Expressions::Interpreter::GreaterThanInstruction::GreaterThanUInt64
    class GreaterThanUInt64;
    // Nested type: ::System::Linq::Expressions::Interpreter::GreaterThanInstruction::GreaterThanSingle
    class GreaterThanSingle;
    // Nested type: ::System::Linq::Expressions::Interpreter::GreaterThanInstruction::GreaterThanDouble
    class GreaterThanDouble;
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
    // Offset: 0x1EEEE00
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GreaterThanInstruction* New_ctor(::Il2CppObject* nullValue) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::Interpreter::GreaterThanInstruction::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GreaterThanInstruction*, creationType>(nullValue)));
    }
    // static public System.Linq.Expressions.Interpreter.Instruction Create(System.Type type, System.Boolean liftedToNull)
    // Offset: 0x1EEEE2C
    static ::System::Linq::Expressions::Interpreter::Instruction* Create(::System::Type* type, bool liftedToNull);
    // public override System.Int32 get_ConsumedStack()
    // Offset: 0x1EEEDA8
    // Implemented from: System.Linq.Expressions.Interpreter.Instruction
    // Base method: System.Int32 Instruction::get_ConsumedStack()
    int get_ConsumedStack();
    // public override System.Int32 get_ProducedStack()
    // Offset: 0x1EEEDB0
    // Implemented from: System.Linq.Expressions.Interpreter.Instruction
    // Base method: System.Int32 Instruction::get_ProducedStack()
    int get_ProducedStack();
    // public override System.String get_InstructionName()
    // Offset: 0x1EEEDB8
    // Implemented from: System.Linq.Expressions.Interpreter.Instruction
    // Base method: System.String Instruction::get_InstructionName()
    ::StringW get_InstructionName();
  }; // System.Linq.Expressions.Interpreter.GreaterThanInstruction
  #pragma pack(pop)
  static check_size<sizeof(GreaterThanInstruction), 16 + sizeof(::Il2CppObject*)> __System_Linq_Expressions_Interpreter_GreaterThanInstructionSizeCheck;
  static_assert(sizeof(GreaterThanInstruction) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::GreaterThanInstruction::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::GreaterThanInstruction::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Interpreter::Instruction* (*)(::System::Type*, bool)>(&System::Linq::Expressions::Interpreter::GreaterThanInstruction::Create)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* liftedToNull = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::GreaterThanInstruction*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, liftedToNull});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::GreaterThanInstruction::get_ConsumedStack
// Il2CppName: get_ConsumedStack
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Linq::Expressions::Interpreter::GreaterThanInstruction::*)()>(&System::Linq::Expressions::Interpreter::GreaterThanInstruction::get_ConsumedStack)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::GreaterThanInstruction*), "get_ConsumedStack", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::GreaterThanInstruction::get_ProducedStack
// Il2CppName: get_ProducedStack
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Linq::Expressions::Interpreter::GreaterThanInstruction::*)()>(&System::Linq::Expressions::Interpreter::GreaterThanInstruction::get_ProducedStack)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::GreaterThanInstruction*), "get_ProducedStack", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::GreaterThanInstruction::get_InstructionName
// Il2CppName: get_InstructionName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Linq::Expressions::Interpreter::GreaterThanInstruction::*)()>(&System::Linq::Expressions::Interpreter::GreaterThanInstruction::get_InstructionName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::GreaterThanInstruction*), "get_InstructionName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
