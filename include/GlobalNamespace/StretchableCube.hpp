// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Mesh
  class Mesh;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: StretchableCube
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: EFC9A8
  class StretchableCube : public UnityEngine::MonoBehaviour {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private UnityEngine.Vector2[] _uvs
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<UnityEngine::Vector2> uvs;
    // Field size check
    static_assert(sizeof(::ArrayW<UnityEngine::Vector2>) == 0x8);
    // private UnityEngine.Mesh _mesh
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Mesh* mesh;
    // Field size check
    static_assert(sizeof(UnityEngine::Mesh*) == 0x8);
    public:
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Single kLength
    static constexpr const float kLength = 1;
    // Get static field: static private System.Single kLength
    static float _get_kLength();
    // Set static field: static private System.Single kLength
    static void _set_kLength(float value);
    // static field const value: static private System.Single kWidth
    static constexpr const float kWidth = 1;
    // Get static field: static private System.Single kWidth
    static float _get_kWidth();
    // Set static field: static private System.Single kWidth
    static void _set_kWidth(float value);
    // static field const value: static private System.Single kHeight
    static constexpr const float kHeight = 1;
    // Get static field: static private System.Single kHeight
    static float _get_kHeight();
    // Set static field: static private System.Single kHeight
    static void _set_kHeight(float value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xF05040
    // Get static field: static private readonly UnityEngine.Vector3 p0
    static UnityEngine::Vector3 _get_p0();
    // Set static field: static private readonly UnityEngine.Vector3 p0
    static void _set_p0(UnityEngine::Vector3 value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xF05050
    // Get static field: static private readonly UnityEngine.Vector3 p1
    static UnityEngine::Vector3 _get_p1();
    // Set static field: static private readonly UnityEngine.Vector3 p1
    static void _set_p1(UnityEngine::Vector3 value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xF05060
    // Get static field: static private readonly UnityEngine.Vector3 p2
    static UnityEngine::Vector3 _get_p2();
    // Set static field: static private readonly UnityEngine.Vector3 p2
    static void _set_p2(UnityEngine::Vector3 value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xF05070
    // Get static field: static private readonly UnityEngine.Vector3 p3
    static UnityEngine::Vector3 _get_p3();
    // Set static field: static private readonly UnityEngine.Vector3 p3
    static void _set_p3(UnityEngine::Vector3 value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xF05080
    // Get static field: static private readonly UnityEngine.Vector3 p4
    static UnityEngine::Vector3 _get_p4();
    // Set static field: static private readonly UnityEngine.Vector3 p4
    static void _set_p4(UnityEngine::Vector3 value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xF05090
    // Get static field: static private readonly UnityEngine.Vector3 p5
    static UnityEngine::Vector3 _get_p5();
    // Set static field: static private readonly UnityEngine.Vector3 p5
    static void _set_p5(UnityEngine::Vector3 value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xF050A0
    // Get static field: static private readonly UnityEngine.Vector3 p6
    static UnityEngine::Vector3 _get_p6();
    // Set static field: static private readonly UnityEngine.Vector3 p6
    static void _set_p6(UnityEngine::Vector3 value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xF050B0
    // Get static field: static private readonly UnityEngine.Vector3 p7
    static UnityEngine::Vector3 _get_p7();
    // Set static field: static private readonly UnityEngine.Vector3 p7
    static void _set_p7(UnityEngine::Vector3 value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xF050C0
    // Get static field: static private readonly UnityEngine.Vector3[] vertices
    static ::ArrayW<UnityEngine::Vector3> _get_vertices();
    // Set static field: static private readonly UnityEngine.Vector3[] vertices
    static void _set_vertices(::ArrayW<UnityEngine::Vector3> value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xF050D0
    // Get static field: static private readonly UnityEngine.Vector3 up
    static UnityEngine::Vector3 _get_up();
    // Set static field: static private readonly UnityEngine.Vector3 up
    static void _set_up(UnityEngine::Vector3 value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xF050E0
    // Get static field: static private readonly UnityEngine.Vector3 down
    static UnityEngine::Vector3 _get_down();
    // Set static field: static private readonly UnityEngine.Vector3 down
    static void _set_down(UnityEngine::Vector3 value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xF050F0
    // Get static field: static private readonly UnityEngine.Vector3 front
    static UnityEngine::Vector3 _get_front();
    // Set static field: static private readonly UnityEngine.Vector3 front
    static void _set_front(UnityEngine::Vector3 value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xF05100
    // Get static field: static private readonly UnityEngine.Vector3 back
    static UnityEngine::Vector3 _get_back();
    // Set static field: static private readonly UnityEngine.Vector3 back
    static void _set_back(UnityEngine::Vector3 value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xF05110
    // Get static field: static private readonly UnityEngine.Vector3 left
    static UnityEngine::Vector3 _get_left();
    // Set static field: static private readonly UnityEngine.Vector3 left
    static void _set_left(UnityEngine::Vector3 value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xF05120
    // Get static field: static private readonly UnityEngine.Vector3 right
    static UnityEngine::Vector3 _get_right();
    // Set static field: static private readonly UnityEngine.Vector3 right
    static void _set_right(UnityEngine::Vector3 value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xF05130
    // Get static field: static private readonly UnityEngine.Vector3[] normals
    static ::ArrayW<UnityEngine::Vector3> _get_normals();
    // Set static field: static private readonly UnityEngine.Vector3[] normals
    static void _set_normals(::ArrayW<UnityEngine::Vector3> value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xF05140
    // Get static field: static private readonly System.Int32[] triangles
    static ::ArrayW<int> _get_triangles();
    // Set static field: static private readonly System.Int32[] triangles
    static void _set_triangles(::ArrayW<int> value);
    // Get instance field reference: private UnityEngine.Vector2[] _uvs
    ::ArrayW<UnityEngine::Vector2>& dyn__uvs();
    // Get instance field reference: private UnityEngine.Mesh _mesh
    UnityEngine::Mesh*& dyn__mesh();
    // protected System.Void Awake()
    // Offset: 0x115AC8C
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0x115AE34
    void OnDestroy();
    // private UnityEngine.Mesh CreateBox()
    // Offset: 0x115AD04
    UnityEngine::Mesh* CreateBox();
    // private System.Void RecalculateUVs(UnityEngine.Vector2[] uvs)
    // Offset: 0x115AE40
    void RecalculateUVs(::ArrayW<UnityEngine::Vector2> uvs);
    // public System.Void RefreshUVs()
    // Offset: 0x115B118
    void RefreshUVs();
    // public System.Void .ctor()
    // Offset: 0x115B1BC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StretchableCube* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::StretchableCube::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StretchableCube*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x115B1C4
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // StretchableCube
  #pragma pack(pop)
  static check_size<sizeof(StretchableCube), 32 + sizeof(UnityEngine::Mesh*)> __GlobalNamespace_StretchableCubeSizeCheck;
  static_assert(sizeof(StretchableCube) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StretchableCube*, "", "StretchableCube");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::StretchableCube::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StretchableCube::*)()>(&GlobalNamespace::StretchableCube::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StretchableCube*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StretchableCube::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StretchableCube::*)()>(&GlobalNamespace::StretchableCube::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StretchableCube*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StretchableCube::CreateBox
// Il2CppName: CreateBox
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Mesh* (GlobalNamespace::StretchableCube::*)()>(&GlobalNamespace::StretchableCube::CreateBox)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StretchableCube*), "CreateBox", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StretchableCube::RecalculateUVs
// Il2CppName: RecalculateUVs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StretchableCube::*)(::ArrayW<UnityEngine::Vector2>)>(&GlobalNamespace::StretchableCube::RecalculateUVs)> {
  static const MethodInfo* get() {
    static auto* uvs = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StretchableCube*), "RecalculateUVs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{uvs});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StretchableCube::RefreshUVs
// Il2CppName: RefreshUVs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StretchableCube::*)()>(&GlobalNamespace::StretchableCube::RefreshUVs)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StretchableCube*), "RefreshUVs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StretchableCube::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::StretchableCube::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::StretchableCube::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StretchableCube*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
