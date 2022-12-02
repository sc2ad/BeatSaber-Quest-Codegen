// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OculusPlatformAdditionalContentModel
#include "GlobalNamespace/OculusPlatformAdditionalContentModel.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: TaskCompletionSource`1<TResult>
  template<typename TResult>
  class TaskCompletionSource_1;
}
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Message`1<T>
  template<typename T>
  class Message_1;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: Purchase
  class Purchase;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OculusPlatformAdditionalContentModel::$$c__DisplayClass10_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusPlatformAdditionalContentModel::$$c__DisplayClass10_0*, "", "OculusPlatformAdditionalContentModel/<>c__DisplayClass10_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: OculusPlatformAdditionalContentModel/<>c__DisplayClass10_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class OculusPlatformAdditionalContentModel::$$c__DisplayClass10_0 : public ::Il2CppObject {
    public:
    public:
    // public System.Threading.Tasks.TaskCompletionSource`1<Oculus.Platform.Message`1<Oculus.Platform.Models.Purchase>> launchCheckoutFlowTaskSource
    // Size: 0x8
    // Offset: 0x10
    ::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*>* launchCheckoutFlowTaskSource;
    // Field size check
    static_assert(sizeof(::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*>*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*>*
    constexpr operator ::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*>*() const noexcept {
      return launchCheckoutFlowTaskSource;
    }
    // Get instance field reference: public System.Threading.Tasks.TaskCompletionSource`1<Oculus.Platform.Message`1<Oculus.Platform.Models.Purchase>> launchCheckoutFlowTaskSource
    [[deprecated("Use field access instead!")]] ::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*>*& dyn_launchCheckoutFlowTaskSource();
    // public System.Void .ctor()
    // Offset: 0x1559CF4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OculusPlatformAdditionalContentModel::$$c__DisplayClass10_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OculusPlatformAdditionalContentModel::$$c__DisplayClass10_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OculusPlatformAdditionalContentModel::$$c__DisplayClass10_0*, creationType>()));
    }
    // System.Void <LaunchCheckoutFlow>b__0(Oculus.Platform.Message`1<Oculus.Platform.Models.Purchase> msg)
    // Offset: 0x1559CFC
    void $LaunchCheckoutFlow$b__0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>* msg);
  }; // OculusPlatformAdditionalContentModel/<>c__DisplayClass10_0
  #pragma pack(pop)
  static check_size<sizeof(OculusPlatformAdditionalContentModel::$$c__DisplayClass10_0), 16 + sizeof(::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*>*)> __GlobalNamespace_OculusPlatformAdditionalContentModel_$$c__DisplayClass10_0SizeCheck;
  static_assert(sizeof(OculusPlatformAdditionalContentModel::$$c__DisplayClass10_0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OculusPlatformAdditionalContentModel::$$c__DisplayClass10_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OculusPlatformAdditionalContentModel::$$c__DisplayClass10_0::$LaunchCheckoutFlow$b__0
// Il2CppName: <LaunchCheckoutFlow>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusPlatformAdditionalContentModel::$$c__DisplayClass10_0::*)(::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*)>(&GlobalNamespace::OculusPlatformAdditionalContentModel::$$c__DisplayClass10_0::$LaunchCheckoutFlow$b__0)> {
  static const MethodInfo* get() {
    static auto* msg = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Oculus.Platform", "Message`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Oculus.Platform.Models", "Purchase")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusPlatformAdditionalContentModel::$$c__DisplayClass10_0*), "<LaunchCheckoutFlow>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{msg});
  }
};
