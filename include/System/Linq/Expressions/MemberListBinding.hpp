// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Linq.Expressions.MemberBinding
#include "System/Linq/Expressions/MemberBinding.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::ObjectModel
namespace System::Collections::ObjectModel {
  // Forward declaring type: ReadOnlyCollection`1<T>
  template<typename T>
  class ReadOnlyCollection_1;
}
// Forward declaring namespace: System::Linq::Expressions
namespace System::Linq::Expressions {
  // Forward declaring type: ElementInit
  class ElementInit;
}
// Completed forward declares
// Type namespace: System.Linq.Expressions
namespace System::Linq::Expressions {
  // Forward declaring type: MemberListBinding
  class MemberListBinding;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Linq::Expressions::MemberListBinding);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::MemberListBinding*, "System.Linq.Expressions", "MemberListBinding");
// Type namespace: System.Linq.Expressions
namespace System::Linq::Expressions {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Linq.Expressions.MemberListBinding
  // [TokenAttribute] Offset: FFFFFFFF
  class MemberListBinding : public ::System::Linq::Expressions::MemberBinding {
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
    // private readonly System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ElementInit> <Initializers>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ElementInit*>* Initializers;
    // Field size check
    static_assert(sizeof(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ElementInit*>*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ElementInit*>*
    constexpr operator ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ElementInit*>*() const noexcept {
      return Initializers;
    }
    // Get instance field reference: private readonly System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ElementInit> <Initializers>k__BackingField
    ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ElementInit*>*& dyn_$Initializers$k__BackingField();
    // public System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ElementInit> get_Initializers()
    // Offset: 0x1F08224
    ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ElementInit*>* get_Initializers();
  }; // System.Linq.Expressions.MemberListBinding
  #pragma pack(pop)
  static check_size<sizeof(MemberListBinding), 32 + sizeof(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ElementInit*>*)> __System_Linq_Expressions_MemberListBindingSizeCheck;
  static_assert(sizeof(MemberListBinding) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Linq::Expressions::MemberListBinding::get_Initializers
// Il2CppName: get_Initializers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ElementInit*>* (System::Linq::Expressions::MemberListBinding::*)()>(&System::Linq::Expressions::MemberListBinding::get_Initializers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::MemberListBinding*), "get_Initializers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
