// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Constraints.ComparisonAdapter
#include "NUnit/Framework/Constraints/ComparisonAdapter.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IComparer
  class IComparer;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Constraints
namespace NUnit::Framework::Constraints {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Constraints.ComparisonAdapter/ComparerAdapter
  // [] Offset: FFFFFFFF
  class ComparisonAdapter::ComparerAdapter : public NUnit::Framework::Constraints::ComparisonAdapter {
    public:
    // private readonly System.Collections.IComparer comparer
    // Size: 0x8
    // Offset: 0x10
    System::Collections::IComparer* comparer;
    // Field size check
    static_assert(sizeof(System::Collections::IComparer*) == 0x8);
    // Creating value type constructor for type: ComparerAdapter
    ComparerAdapter(System::Collections::IComparer* comparer_ = {}) noexcept : comparer{comparer_} {}
    // Creating conversion operator: operator System::Collections::IComparer*
    constexpr operator System::Collections::IComparer*() const noexcept {
      return comparer;
    }
    // public System.Void .ctor(System.Collections.IComparer comparer)
    // Offset: 0x159D4D0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ComparisonAdapter::ComparerAdapter* New_ctor(System::Collections::IComparer* comparer) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Constraints::ComparisonAdapter::ComparerAdapter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ComparisonAdapter::ComparerAdapter*, creationType>(comparer)));
    }
    // public override System.Int32 Compare(System.Object expected, System.Object actual)
    // Offset: 0x159D4FC
    // Implemented from: NUnit.Framework.Constraints.ComparisonAdapter
    // Base method: System.Int32 ComparisonAdapter::Compare_NEW(System.Object expected, System.Object actual)
    int Compare(::Il2CppObject* expected, ::Il2CppObject* actual);
  }; // NUnit.Framework.Constraints.ComparisonAdapter/ComparerAdapter
  #pragma pack(pop)
  static check_size<sizeof(ComparisonAdapter::ComparerAdapter), 16 + sizeof(System::Collections::IComparer*)> __NUnit_Framework_Constraints_ComparisonAdapter_ComparerAdapterSizeCheck;
  static_assert(sizeof(ComparisonAdapter::ComparerAdapter) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Constraints::ComparisonAdapter::ComparerAdapter*, "NUnit.Framework.Constraints", "ComparisonAdapter/ComparerAdapter");