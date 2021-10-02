// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Including type: JetBrains.Annotations.ImplicitUseKindFlags
#include "JetBrains/Annotations/ImplicitUseKindFlags.hpp"
// Including type: JetBrains.Annotations.ImplicitUseTargetFlags
#include "JetBrains/Annotations/ImplicitUseTargetFlags.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: JetBrains.Annotations
namespace JetBrains::Annotations {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: JetBrains.Annotations.MeansImplicitUseAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: EAD800
  class MeansImplicitUseAttribute : public System::Attribute {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private JetBrains.Annotations.ImplicitUseKindFlags <UseKindFlags>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    JetBrains::Annotations::ImplicitUseKindFlags UseKindFlags;
    // Field size check
    static_assert(sizeof(JetBrains::Annotations::ImplicitUseKindFlags) == 0x4);
    // private JetBrains.Annotations.ImplicitUseTargetFlags <TargetFlags>k__BackingField
    // Size: 0x4
    // Offset: 0x14
    JetBrains::Annotations::ImplicitUseTargetFlags TargetFlags;
    // Field size check
    static_assert(sizeof(JetBrains::Annotations::ImplicitUseTargetFlags) == 0x4);
    public:
    // Get instance field reference: private JetBrains.Annotations.ImplicitUseKindFlags <UseKindFlags>k__BackingField
    JetBrains::Annotations::ImplicitUseKindFlags& dyn_$UseKindFlags$k__BackingField();
    // Get instance field reference: private JetBrains.Annotations.ImplicitUseTargetFlags <TargetFlags>k__BackingField
    JetBrains::Annotations::ImplicitUseTargetFlags& dyn_$TargetFlags$k__BackingField();
    // public JetBrains.Annotations.ImplicitUseKindFlags get_UseKindFlags()
    // Offset: 0x2610720
    JetBrains::Annotations::ImplicitUseKindFlags get_UseKindFlags();
    // private System.Void set_UseKindFlags(JetBrains.Annotations.ImplicitUseKindFlags value)
    // Offset: 0x2610728
    void set_UseKindFlags(JetBrains::Annotations::ImplicitUseKindFlags value);
    // public JetBrains.Annotations.ImplicitUseTargetFlags get_TargetFlags()
    // Offset: 0x2610730
    JetBrains::Annotations::ImplicitUseTargetFlags get_TargetFlags();
    // private System.Void set_TargetFlags(JetBrains.Annotations.ImplicitUseTargetFlags value)
    // Offset: 0x2610738
    void set_TargetFlags(JetBrains::Annotations::ImplicitUseTargetFlags value);
    // public System.Void .ctor(JetBrains.Annotations.ImplicitUseKindFlags useKindFlags)
    // Offset: 0x26106C0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MeansImplicitUseAttribute* New_ctor(JetBrains::Annotations::ImplicitUseKindFlags useKindFlags) {
      static auto ___internal__logger = ::Logger::get().WithContext("JetBrains::Annotations::MeansImplicitUseAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MeansImplicitUseAttribute*, creationType>(useKindFlags)));
    }
    // public System.Void .ctor(JetBrains.Annotations.ImplicitUseTargetFlags targetFlags)
    // Offset: 0x26106F0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MeansImplicitUseAttribute* New_ctor(JetBrains::Annotations::ImplicitUseTargetFlags targetFlags) {
      static auto ___internal__logger = ::Logger::get().WithContext("JetBrains::Annotations::MeansImplicitUseAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MeansImplicitUseAttribute*, creationType>(targetFlags)));
    }
    // public System.Void .ctor(JetBrains.Annotations.ImplicitUseKindFlags useKindFlags, JetBrains.Annotations.ImplicitUseTargetFlags targetFlags)
    // Offset: 0x2610688
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MeansImplicitUseAttribute* New_ctor(JetBrains::Annotations::ImplicitUseKindFlags useKindFlags, JetBrains::Annotations::ImplicitUseTargetFlags targetFlags) {
      static auto ___internal__logger = ::Logger::get().WithContext("JetBrains::Annotations::MeansImplicitUseAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MeansImplicitUseAttribute*, creationType>(useKindFlags, targetFlags)));
    }
    // public System.Void .ctor()
    // Offset: 0x2610658
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MeansImplicitUseAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("JetBrains::Annotations::MeansImplicitUseAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MeansImplicitUseAttribute*, creationType>()));
    }
  }; // JetBrains.Annotations.MeansImplicitUseAttribute
  #pragma pack(pop)
  static check_size<sizeof(MeansImplicitUseAttribute), 20 + sizeof(JetBrains::Annotations::ImplicitUseTargetFlags)> __JetBrains_Annotations_MeansImplicitUseAttributeSizeCheck;
  static_assert(sizeof(MeansImplicitUseAttribute) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::MeansImplicitUseAttribute*, "JetBrains.Annotations", "MeansImplicitUseAttribute");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: JetBrains::Annotations::MeansImplicitUseAttribute::get_UseKindFlags
// Il2CppName: get_UseKindFlags
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<JetBrains::Annotations::ImplicitUseKindFlags (JetBrains::Annotations::MeansImplicitUseAttribute::*)()>(&JetBrains::Annotations::MeansImplicitUseAttribute::get_UseKindFlags)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(JetBrains::Annotations::MeansImplicitUseAttribute*), "get_UseKindFlags", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: JetBrains::Annotations::MeansImplicitUseAttribute::set_UseKindFlags
// Il2CppName: set_UseKindFlags
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (JetBrains::Annotations::MeansImplicitUseAttribute::*)(JetBrains::Annotations::ImplicitUseKindFlags)>(&JetBrains::Annotations::MeansImplicitUseAttribute::set_UseKindFlags)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("JetBrains.Annotations", "ImplicitUseKindFlags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(JetBrains::Annotations::MeansImplicitUseAttribute*), "set_UseKindFlags", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: JetBrains::Annotations::MeansImplicitUseAttribute::get_TargetFlags
// Il2CppName: get_TargetFlags
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<JetBrains::Annotations::ImplicitUseTargetFlags (JetBrains::Annotations::MeansImplicitUseAttribute::*)()>(&JetBrains::Annotations::MeansImplicitUseAttribute::get_TargetFlags)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(JetBrains::Annotations::MeansImplicitUseAttribute*), "get_TargetFlags", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: JetBrains::Annotations::MeansImplicitUseAttribute::set_TargetFlags
// Il2CppName: set_TargetFlags
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (JetBrains::Annotations::MeansImplicitUseAttribute::*)(JetBrains::Annotations::ImplicitUseTargetFlags)>(&JetBrains::Annotations::MeansImplicitUseAttribute::set_TargetFlags)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("JetBrains.Annotations", "ImplicitUseTargetFlags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(JetBrains::Annotations::MeansImplicitUseAttribute*), "set_TargetFlags", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: JetBrains::Annotations::MeansImplicitUseAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: JetBrains::Annotations::MeansImplicitUseAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: JetBrains::Annotations::MeansImplicitUseAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: JetBrains::Annotations::MeansImplicitUseAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
