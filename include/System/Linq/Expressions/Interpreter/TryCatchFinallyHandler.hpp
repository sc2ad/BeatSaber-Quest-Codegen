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
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Linq::Expressions::Interpreter
namespace System::Linq::Expressions::Interpreter {
  // Forward declaring type: ExceptionHandler
  class ExceptionHandler;
  // Forward declaring type: InterpretedFrame
  class InterpretedFrame;
  // Forward declaring type: ExceptionFilter
  class ExceptionFilter;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
// Type namespace: System.Linq.Expressions.Interpreter
namespace System::Linq::Expressions::Interpreter {
  // Forward declaring type: TryCatchFinallyHandler
  class TryCatchFinallyHandler;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::TryCatchFinallyHandler);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::TryCatchFinallyHandler*, "System.Linq.Expressions.Interpreter", "TryCatchFinallyHandler");
// Type namespace: System.Linq.Expressions.Interpreter
namespace System::Linq::Expressions::Interpreter {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: System.Linq.Expressions.Interpreter.TryCatchFinallyHandler
  // [TokenAttribute] Offset: FFFFFFFF
  class TryCatchFinallyHandler : public ::Il2CppObject {
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
    // readonly System.Int32 TryStartIndex
    // Size: 0x4
    // Offset: 0x10
    int TryStartIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // readonly System.Int32 TryEndIndex
    // Size: 0x4
    // Offset: 0x14
    int TryEndIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // readonly System.Int32 FinallyStartIndex
    // Size: 0x4
    // Offset: 0x18
    int FinallyStartIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // readonly System.Int32 FinallyEndIndex
    // Size: 0x4
    // Offset: 0x1C
    int FinallyEndIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // readonly System.Int32 GotoEndTargetIndex
    // Size: 0x4
    // Offset: 0x20
    int GotoEndTargetIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: GotoEndTargetIndex and: handlers
    char __padding4[0x4] = {};
    // private readonly System.Linq.Expressions.Interpreter.ExceptionHandler[] _handlers
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::System::Linq::Expressions::Interpreter::ExceptionHandler*> handlers;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Linq::Expressions::Interpreter::ExceptionHandler*>) == 0x8);
    public:
    // Get instance field reference: readonly System.Int32 TryStartIndex
    int& dyn_TryStartIndex();
    // Get instance field reference: readonly System.Int32 TryEndIndex
    int& dyn_TryEndIndex();
    // Get instance field reference: readonly System.Int32 FinallyStartIndex
    int& dyn_FinallyStartIndex();
    // Get instance field reference: readonly System.Int32 FinallyEndIndex
    int& dyn_FinallyEndIndex();
    // Get instance field reference: readonly System.Int32 GotoEndTargetIndex
    int& dyn_GotoEndTargetIndex();
    // Get instance field reference: private readonly System.Linq.Expressions.Interpreter.ExceptionHandler[] _handlers
    ::ArrayW<::System::Linq::Expressions::Interpreter::ExceptionHandler*>& dyn__handlers();
    // System.Boolean get_IsFinallyBlockExist()
    // Offset: 0x1F05FA8
    bool get_IsFinallyBlockExist();
    // System.Boolean get_IsCatchBlockExist()
    // Offset: 0x1F05FBC
    bool get_IsCatchBlockExist();
    // System.Void .ctor(System.Int32 tryStart, System.Int32 tryEnd, System.Int32 gotoEndTargetIndex, System.Linq.Expressions.Interpreter.ExceptionHandler[] handlers)
    // Offset: 0x1F05FCC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TryCatchFinallyHandler* New_ctor(int tryStart, int tryEnd, int gotoEndTargetIndex, ::ArrayW<::System::Linq::Expressions::Interpreter::ExceptionHandler*> handlers) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::Interpreter::TryCatchFinallyHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TryCatchFinallyHandler*, creationType>(tryStart, tryEnd, gotoEndTargetIndex, handlers)));
    }
    // System.Void .ctor(System.Int32 tryStart, System.Int32 tryEnd, System.Int32 gotoEndLabelIndex, System.Int32 finallyStart, System.Int32 finallyEnd, System.Linq.Expressions.Interpreter.ExceptionHandler[] handlers)
    // Offset: 0x1F06024
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TryCatchFinallyHandler* New_ctor(int tryStart, int tryEnd, int gotoEndLabelIndex, int finallyStart, int finallyEnd, ::ArrayW<::System::Linq::Expressions::Interpreter::ExceptionHandler*> handlers) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::Interpreter::TryCatchFinallyHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TryCatchFinallyHandler*, creationType>(tryStart, tryEnd, gotoEndLabelIndex, finallyStart, finallyEnd, handlers)));
    }
    // System.Boolean HasHandler(System.Linq.Expressions.Interpreter.InterpretedFrame frame, System.Exception exception, out System.Linq.Expressions.Interpreter.ExceptionHandler handler, out System.Object unwrappedException)
    // Offset: 0x1F06088
    bool HasHandler(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame, ::System::Exception* exception, ByRef<::System::Linq::Expressions::Interpreter::ExceptionHandler*> handler, ByRef<::Il2CppObject*> unwrappedException);
    // static private System.Boolean FilterPasses(System.Linq.Expressions.Interpreter.InterpretedFrame frame, ref System.Object exception, System.Linq.Expressions.Interpreter.ExceptionFilter filter)
    // Offset: 0x1F061E4
    static bool FilterPasses(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame, ByRef<::Il2CppObject*> exception, ::System::Linq::Expressions::Interpreter::ExceptionFilter* filter);
  }; // System.Linq.Expressions.Interpreter.TryCatchFinallyHandler
  #pragma pack(pop)
  static check_size<sizeof(TryCatchFinallyHandler), 40 + sizeof(::ArrayW<::System::Linq::Expressions::Interpreter::ExceptionHandler*>)> __System_Linq_Expressions_Interpreter_TryCatchFinallyHandlerSizeCheck;
  static_assert(sizeof(TryCatchFinallyHandler) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::TryCatchFinallyHandler::get_IsFinallyBlockExist
// Il2CppName: get_IsFinallyBlockExist
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Linq::Expressions::Interpreter::TryCatchFinallyHandler::*)()>(&System::Linq::Expressions::Interpreter::TryCatchFinallyHandler::get_IsFinallyBlockExist)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::TryCatchFinallyHandler*), "get_IsFinallyBlockExist", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::TryCatchFinallyHandler::get_IsCatchBlockExist
// Il2CppName: get_IsCatchBlockExist
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Linq::Expressions::Interpreter::TryCatchFinallyHandler::*)()>(&System::Linq::Expressions::Interpreter::TryCatchFinallyHandler::get_IsCatchBlockExist)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::TryCatchFinallyHandler*), "get_IsCatchBlockExist", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::TryCatchFinallyHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::TryCatchFinallyHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::TryCatchFinallyHandler::HasHandler
// Il2CppName: HasHandler
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Linq::Expressions::Interpreter::TryCatchFinallyHandler::*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::System::Exception*, ByRef<::System::Linq::Expressions::Interpreter::ExceptionHandler*>, ByRef<::Il2CppObject*>)>(&System::Linq::Expressions::Interpreter::TryCatchFinallyHandler::HasHandler)> {
  static const MethodInfo* get() {
    static auto* frame = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions.Interpreter", "InterpretedFrame")->byval_arg;
    static auto* exception = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    static auto* handler = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions.Interpreter", "ExceptionHandler")->this_arg;
    static auto* unwrappedException = &::il2cpp_utils::GetClassFromName("System", "Object")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::TryCatchFinallyHandler*), "HasHandler", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{frame, exception, handler, unwrappedException});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::TryCatchFinallyHandler::FilterPasses
// Il2CppName: FilterPasses
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ByRef<::Il2CppObject*>, ::System::Linq::Expressions::Interpreter::ExceptionFilter*)>(&System::Linq::Expressions::Interpreter::TryCatchFinallyHandler::FilterPasses)> {
  static const MethodInfo* get() {
    static auto* frame = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions.Interpreter", "InterpretedFrame")->byval_arg;
    static auto* exception = &::il2cpp_utils::GetClassFromName("System", "Object")->this_arg;
    static auto* filter = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions.Interpreter", "ExceptionFilter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::TryCatchFinallyHandler*), "FilterPasses", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{frame, exception, filter});
  }
};
