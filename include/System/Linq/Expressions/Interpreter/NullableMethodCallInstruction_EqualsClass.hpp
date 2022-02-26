// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Linq.Expressions.Interpreter.NullableMethodCallInstruction
#include "System/Linq/Expressions/Interpreter/NullableMethodCallInstruction.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Linq::Expressions::Interpreter
namespace System::Linq::Expressions::Interpreter {
  // Forward declaring type: InterpretedFrame
  class InterpretedFrame;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction::EqualsClass);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction::EqualsClass*, "System.Linq.Expressions.Interpreter", "NullableMethodCallInstruction/EqualsClass");
// Type namespace: System.Linq.Expressions.Interpreter
namespace System::Linq::Expressions::Interpreter {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Linq.Expressions.Interpreter.NullableMethodCallInstruction/System.Linq.Expressions.Interpreter.EqualsClass
  // [TokenAttribute] Offset: FFFFFFFF
  class NullableMethodCallInstruction::EqualsClass : public ::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction {
    public:
    // public override System.Int32 get_ConsumedStack()
    // Offset: 0x1EFE870
    // Implemented from: System.Linq.Expressions.Interpreter.NullableMethodCallInstruction
    // Base method: System.Int32 NullableMethodCallInstruction::get_ConsumedStack()
    int get_ConsumedStack();
    // public System.Void .ctor()
    // Offset: 0x1EFE788
    // Implemented from: System.Linq.Expressions.Interpreter.NullableMethodCallInstruction
    // Base method: System.Void NullableMethodCallInstruction::.ctor()
    // Base method: System.Void Instruction::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NullableMethodCallInstruction::EqualsClass* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction::EqualsClass::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NullableMethodCallInstruction::EqualsClass*, creationType>()));
    }
    // public override System.Int32 Run(System.Linq.Expressions.Interpreter.InterpretedFrame frame)
    // Offset: 0x1EFE878
    // Implemented from: System.Linq.Expressions.Interpreter.Instruction
    // Base method: System.Int32 Instruction::Run(System.Linq.Expressions.Interpreter.InterpretedFrame frame)
    int Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);
  }; // System.Linq.Expressions.Interpreter.NullableMethodCallInstruction/System.Linq.Expressions.Interpreter.EqualsClass
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::NullableMethodCallInstruction::EqualsClass::get_ConsumedStack
// Il2CppName: get_ConsumedStack
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Linq::Expressions::Interpreter::NullableMethodCallInstruction::EqualsClass::*)()>(&System::Linq::Expressions::Interpreter::NullableMethodCallInstruction::EqualsClass::get_ConsumedStack)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::NullableMethodCallInstruction::EqualsClass*), "get_ConsumedStack", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::NullableMethodCallInstruction::EqualsClass::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::NullableMethodCallInstruction::EqualsClass::Run
// Il2CppName: Run
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Linq::Expressions::Interpreter::NullableMethodCallInstruction::EqualsClass::*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(&System::Linq::Expressions::Interpreter::NullableMethodCallInstruction::EqualsClass::Run)> {
  static const MethodInfo* get() {
    static auto* frame = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions.Interpreter", "InterpretedFrame")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::NullableMethodCallInstruction::EqualsClass*), "Run", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{frame});
  }
};
