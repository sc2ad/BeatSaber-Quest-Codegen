// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: IQuickPlaySetupModel
#include "GlobalNamespace/IQuickPlaySetupModel.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: QuickPlaySetupData
  class QuickPlaySetupData;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MockQuickPlaySetupModel
  class MockQuickPlaySetupModel;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MockQuickPlaySetupModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockQuickPlaySetupModel*, "", "MockQuickPlaySetupModel");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: MockQuickPlaySetupModel
  // [TokenAttribute] Offset: FFFFFFFF
  class MockQuickPlaySetupModel : public ::Il2CppObject/*, public ::GlobalNamespace::IQuickPlaySetupModel*/ {
    public:
    public:
    // [InjectAttribute] Offset: 0x111A208
    // private readonly QuickPlaySetupData _quickPlaySetupData
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::QuickPlaySetupData* quickPlaySetupData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::QuickPlaySetupData*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::IQuickPlaySetupModel
    operator ::GlobalNamespace::IQuickPlaySetupModel() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IQuickPlaySetupModel*>(this);
    }
    // Creating interface conversion operator: i_IQuickPlaySetupModel
    inline ::GlobalNamespace::IQuickPlaySetupModel* i_IQuickPlaySetupModel() noexcept {
      return reinterpret_cast<::GlobalNamespace::IQuickPlaySetupModel*>(this);
    }
    // Creating conversion operator: operator ::GlobalNamespace::QuickPlaySetupData*
    constexpr operator ::GlobalNamespace::QuickPlaySetupData*() const noexcept {
      return quickPlaySetupData;
    }
    // Get instance field reference: private readonly QuickPlaySetupData _quickPlaySetupData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::QuickPlaySetupData*& dyn__quickPlaySetupData();
    // public System.Void .ctor()
    // Offset: 0x1492460
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MockQuickPlaySetupModel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MockQuickPlaySetupModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MockQuickPlaySetupModel*, creationType>()));
    }
    // public System.Threading.Tasks.Task`1<QuickPlaySetupData> GetQuickPlaySetupAsync(System.Threading.CancellationToken cancellationToken)
    // Offset: 0x14923EC
    ::System::Threading::Tasks::Task_1<::GlobalNamespace::QuickPlaySetupData*>* GetQuickPlaySetupAsync(::System::Threading::CancellationToken cancellationToken);
  }; // MockQuickPlaySetupModel
  #pragma pack(pop)
  static check_size<sizeof(MockQuickPlaySetupModel), 16 + sizeof(::GlobalNamespace::QuickPlaySetupData*)> __GlobalNamespace_MockQuickPlaySetupModelSizeCheck;
  static_assert(sizeof(MockQuickPlaySetupModel) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MockQuickPlaySetupModel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MockQuickPlaySetupModel::GetQuickPlaySetupAsync
// Il2CppName: GetQuickPlaySetupAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::QuickPlaySetupData*>* (GlobalNamespace::MockQuickPlaySetupModel::*)(::System::Threading::CancellationToken)>(&GlobalNamespace::MockQuickPlaySetupModel::GetQuickPlaySetupAsync)> {
  static const MethodInfo* get() {
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockQuickPlaySetupModel*), "GetQuickPlaySetupAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cancellationToken});
  }
};
