// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: System.Linq.Expressions.Interpreter
namespace System::Linq::Expressions::Interpreter {
  // Forward declaring type: ConvertHelper
  class ConvertHelper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::ConvertHelper);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::ConvertHelper*, "System.Linq.Expressions.Interpreter", "ConvertHelper");
// Type namespace: System.Linq.Expressions.Interpreter
namespace System::Linq::Expressions::Interpreter {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Linq.Expressions.Interpreter.ConvertHelper
  // [TokenAttribute] Offset: FFFFFFFF
  class ConvertHelper : public ::Il2CppObject {
    public:
    // static public System.Int32 ToInt32NoNull(System.Object val)
    // Offset: 0x1EE7F5C
    static int ToInt32NoNull(::Il2CppObject* val);
  }; // System.Linq.Expressions.Interpreter.ConvertHelper
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::ConvertHelper::ToInt32NoNull
// Il2CppName: ToInt32NoNull
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::Il2CppObject*)>(&System::Linq::Expressions::Interpreter::ConvertHelper::ToInt32NoNull)> {
  static const MethodInfo* get() {
    static auto* val = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::ConvertHelper*), "ToInt32NoNull", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val});
  }
};
