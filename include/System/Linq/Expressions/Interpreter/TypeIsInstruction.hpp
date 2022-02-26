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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Linq::Expressions::Interpreter
namespace System::Linq::Expressions::Interpreter {
  // Forward declaring type: InterpretedFrame
  class InterpretedFrame;
}
// Completed forward declares
// Type namespace: System.Linq.Expressions.Interpreter
namespace System::Linq::Expressions::Interpreter {
  // Forward declaring type: TypeIsInstruction
  class TypeIsInstruction;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::TypeIsInstruction);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::TypeIsInstruction*, "System.Linq.Expressions.Interpreter", "TypeIsInstruction");
// Type namespace: System.Linq.Expressions.Interpreter
namespace System::Linq::Expressions::Interpreter {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Linq.Expressions.Interpreter.TypeIsInstruction
  // [TokenAttribute] Offset: FFFFFFFF
  class TypeIsInstruction : public ::System::Linq::Expressions::Interpreter::Instruction {
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
    // private readonly System.Type _type
    // Size: 0x8
    // Offset: 0x10
    ::System::Type* type;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Type*
    constexpr operator ::System::Type*() const noexcept {
      return type;
    }
    // Get instance field reference: private readonly System.Type _type
    ::System::Type*& dyn__type();
    // System.Void .ctor(System.Type type)
    // Offset: 0x1F066D8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TypeIsInstruction* New_ctor(::System::Type* type) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::Interpreter::TypeIsInstruction::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TypeIsInstruction*, creationType>(type)));
    }
    // public override System.Int32 get_ConsumedStack()
    // Offset: 0x1F06704
    // Implemented from: System.Linq.Expressions.Interpreter.Instruction
    // Base method: System.Int32 Instruction::get_ConsumedStack()
    int get_ConsumedStack();
    // public override System.Int32 get_ProducedStack()
    // Offset: 0x1F0670C
    // Implemented from: System.Linq.Expressions.Interpreter.Instruction
    // Base method: System.Int32 Instruction::get_ProducedStack()
    int get_ProducedStack();
    // public override System.String get_InstructionName()
    // Offset: 0x1F06714
    // Implemented from: System.Linq.Expressions.Interpreter.Instruction
    // Base method: System.String Instruction::get_InstructionName()
    ::StringW get_InstructionName();
    // public override System.Int32 Run(System.Linq.Expressions.Interpreter.InterpretedFrame frame)
    // Offset: 0x1F0675C
    // Implemented from: System.Linq.Expressions.Interpreter.Instruction
    // Base method: System.Int32 Instruction::Run(System.Linq.Expressions.Interpreter.InterpretedFrame frame)
    int Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);
    // public override System.String ToString()
    // Offset: 0x1F067C0
    // Implemented from: System.Linq.Expressions.Interpreter.Instruction
    // Base method: System.String Instruction::ToString()
    ::StringW ToString();
  }; // System.Linq.Expressions.Interpreter.TypeIsInstruction
  #pragma pack(pop)
  static check_size<sizeof(TypeIsInstruction), 16 + sizeof(::System::Type*)> __System_Linq_Expressions_Interpreter_TypeIsInstructionSizeCheck;
  static_assert(sizeof(TypeIsInstruction) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::TypeIsInstruction::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::TypeIsInstruction::get_ConsumedStack
// Il2CppName: get_ConsumedStack
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Linq::Expressions::Interpreter::TypeIsInstruction::*)()>(&System::Linq::Expressions::Interpreter::TypeIsInstruction::get_ConsumedStack)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::TypeIsInstruction*), "get_ConsumedStack", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::TypeIsInstruction::get_ProducedStack
// Il2CppName: get_ProducedStack
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Linq::Expressions::Interpreter::TypeIsInstruction::*)()>(&System::Linq::Expressions::Interpreter::TypeIsInstruction::get_ProducedStack)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::TypeIsInstruction*), "get_ProducedStack", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::TypeIsInstruction::get_InstructionName
// Il2CppName: get_InstructionName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Linq::Expressions::Interpreter::TypeIsInstruction::*)()>(&System::Linq::Expressions::Interpreter::TypeIsInstruction::get_InstructionName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::TypeIsInstruction*), "get_InstructionName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::TypeIsInstruction::Run
// Il2CppName: Run
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Linq::Expressions::Interpreter::TypeIsInstruction::*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(&System::Linq::Expressions::Interpreter::TypeIsInstruction::Run)> {
  static const MethodInfo* get() {
    static auto* frame = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions.Interpreter", "InterpretedFrame")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::TypeIsInstruction*), "Run", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{frame});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::TypeIsInstruction::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Linq::Expressions::Interpreter::TypeIsInstruction::*)()>(&System::Linq::Expressions::Interpreter::TypeIsInstruction::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::TypeIsInstruction*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
