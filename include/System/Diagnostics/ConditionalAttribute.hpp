// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Diagnostics
namespace System::Diagnostics {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Diagnostics.ConditionalAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: E6248C
  // [AttributeUsageAttribute] Offset: E6248C
  class ConditionalAttribute : public System::Attribute {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private System.String m_conditionString
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* m_conditionString;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    public:
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return m_conditionString;
    }
    // Get instance field reference: private System.String m_conditionString
    ::Il2CppString*& dyn_m_conditionString();
    // public System.Void .ctor(System.String conditionString)
    // Offset: 0x1CEB1E4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConditionalAttribute* New_ctor(::Il2CppString* conditionString) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Diagnostics::ConditionalAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConditionalAttribute*, creationType>(conditionString)));
    }
  }; // System.Diagnostics.ConditionalAttribute
  #pragma pack(pop)
  static check_size<sizeof(ConditionalAttribute), 16 + sizeof(::Il2CppString*)> __System_Diagnostics_ConditionalAttributeSizeCheck;
  static_assert(sizeof(ConditionalAttribute) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::ConditionalAttribute*, "System.Diagnostics", "ConditionalAttribute");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Diagnostics::ConditionalAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
