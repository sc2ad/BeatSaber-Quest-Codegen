// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Ray
  struct Ray;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Bounds
  // [NativeHeaderAttribute] Offset: D8E32C
  // [RequiredByNativeCodeAttribute] Offset: D8E32C
  // [NativeHeaderAttribute] Offset: D8E32C
  // [NativeClassAttribute] Offset: D8E32C
  // [NativeHeaderAttribute] Offset: D8E32C
  // [NativeHeaderAttribute] Offset: D8E32C
  // [NativeTypeAttribute] Offset: D8E32C
  struct Bounds/*, public System::ValueType, public System::IEquatable_1<UnityEngine::Bounds>*/ {
    public:
    // private UnityEngine.Vector3 m_Center
    // Size: 0xC
    // Offset: 0x0
    UnityEngine::Vector3 m_Center;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // [NativeNameAttribute] Offset: 0xD92F2C
    // private UnityEngine.Vector3 m_Extents
    // Size: 0xC
    // Offset: 0xC
    UnityEngine::Vector3 m_Extents;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // Creating value type constructor for type: Bounds
    constexpr Bounds(UnityEngine::Vector3 m_Center_ = {}, UnityEngine::Vector3 m_Extents_ = {}) noexcept : m_Center{m_Center_}, m_Extents{m_Extents_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<UnityEngine::Bounds>
    operator System::IEquatable_1<UnityEngine::Bounds>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<UnityEngine::Bounds>*>(this);
    }
    // public System.Void .ctor(UnityEngine.Vector3 center, UnityEngine.Vector3 size)
    // Offset: 0xF07530
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: conflicts with another method.  Bounds(UnityEngine::Vector3 center, UnityEngine::Vector3 size)
    // public System.Boolean Equals(UnityEngine.Bounds other)
    // Offset: 0xF07548
    bool Equals(UnityEngine::Bounds other);
    // public UnityEngine.Vector3 get_center()
    // Offset: 0xF07580
    UnityEngine::Vector3 get_center();
    // public System.Void set_center(UnityEngine.Vector3 value)
    // Offset: 0xF0758C
    void set_center(UnityEngine::Vector3 value);
    // public UnityEngine.Vector3 get_size()
    // Offset: 0xF07598
    UnityEngine::Vector3 get_size();
    // public System.Void set_size(UnityEngine.Vector3 value)
    // Offset: 0xF075A0
    void set_size(UnityEngine::Vector3 value);
    // public UnityEngine.Vector3 get_extents()
    // Offset: 0xF075A8
    UnityEngine::Vector3 get_extents();
    // public System.Void set_extents(UnityEngine.Vector3 value)
    // Offset: 0xF075B4
    void set_extents(UnityEngine::Vector3 value);
    // public UnityEngine.Vector3 get_min()
    // Offset: 0xF075C0
    UnityEngine::Vector3 get_min();
    // public UnityEngine.Vector3 get_max()
    // Offset: 0xF075C8
    UnityEngine::Vector3 get_max();
    // public System.Void SetMinMax(UnityEngine.Vector3 min, UnityEngine.Vector3 max)
    // Offset: 0xF075D0
    void SetMinMax(UnityEngine::Vector3 min, UnityEngine::Vector3 max);
    // public System.Void Encapsulate(UnityEngine.Vector3 point)
    // Offset: 0xF075D8
    void Encapsulate(UnityEngine::Vector3 point);
    // public System.Boolean IntersectRay(UnityEngine.Ray ray, out System.Single distance)
    // Offset: 0xF075E0
    bool IntersectRay(UnityEngine::Ray ray, float& distance);
    // public System.Boolean Contains(UnityEngine.Vector3 point)
    // Offset: 0xF07660
    bool Contains(UnityEngine::Vector3 point);
    // static private System.Boolean IntersectRayAABB(UnityEngine.Ray ray, UnityEngine.Bounds bounds, out System.Single dist)
    // Offset: 0x1B8CE24
    static bool IntersectRayAABB(UnityEngine::Ray ray, UnityEngine::Bounds bounds, float& dist);
    // static private System.Boolean Contains_Injected(ref UnityEngine.Bounds _unity_self, ref UnityEngine.Vector3 point)
    // Offset: 0x1B8D00C
    static bool Contains_Injected(UnityEngine::Bounds& _unity_self, UnityEngine::Vector3& point);
    // static private System.Boolean IntersectRayAABB_Injected(ref UnityEngine.Ray ray, ref UnityEngine.Bounds bounds, out System.Single dist)
    // Offset: 0x1B8D05C
    static bool IntersectRayAABB_Injected(UnityEngine::Ray& ray, UnityEngine::Bounds& bounds, float& dist);
    // public override System.Int32 GetHashCode()
    // Offset: 0xF07538
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object other)
    // Offset: 0xF07540
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object other)
    bool Equals(::Il2CppObject* other);
    // public override System.String ToString()
    // Offset: 0xF07658
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
  }; // UnityEngine.Bounds
  #pragma pack(pop)
  static check_size<sizeof(Bounds), 12 + sizeof(UnityEngine::Vector3)> __UnityEngine_BoundsSizeCheck;
  static_assert(sizeof(Bounds) == 0x18);
  // static public System.Boolean op_Equality(UnityEngine.Bounds lhs, UnityEngine.Bounds rhs)
  // Offset: 0x1B8CA5C
  bool operator ==(const UnityEngine::Bounds& lhs, const UnityEngine::Bounds& rhs);
  // static public System.Boolean op_Inequality(UnityEngine.Bounds lhs, UnityEngine.Bounds rhs)
  // Offset: 0x1B8CB78
  bool operator !=(const UnityEngine::Bounds& lhs, const UnityEngine::Bounds& rhs);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Bounds, "UnityEngine", "Bounds");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Bounds::Bounds
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Bounds::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Bounds::*)(UnityEngine::Bounds)>(&UnityEngine::Bounds::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine", "Bounds")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Bounds), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::Bounds::get_center
// Il2CppName: get_center
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (UnityEngine::Bounds::*)()>(&UnityEngine::Bounds::get_center)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Bounds), "get_center", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Bounds::set_center
// Il2CppName: set_center
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Bounds::*)(UnityEngine::Vector3)>(&UnityEngine::Bounds::set_center)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Bounds), "set_center", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Bounds::get_size
// Il2CppName: get_size
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (UnityEngine::Bounds::*)()>(&UnityEngine::Bounds::get_size)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Bounds), "get_size", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Bounds::set_size
// Il2CppName: set_size
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Bounds::*)(UnityEngine::Vector3)>(&UnityEngine::Bounds::set_size)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Bounds), "set_size", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Bounds::get_extents
// Il2CppName: get_extents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (UnityEngine::Bounds::*)()>(&UnityEngine::Bounds::get_extents)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Bounds), "get_extents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Bounds::set_extents
// Il2CppName: set_extents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Bounds::*)(UnityEngine::Vector3)>(&UnityEngine::Bounds::set_extents)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Bounds), "set_extents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Bounds::get_min
// Il2CppName: get_min
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (UnityEngine::Bounds::*)()>(&UnityEngine::Bounds::get_min)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Bounds), "get_min", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Bounds::get_max
// Il2CppName: get_max
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (UnityEngine::Bounds::*)()>(&UnityEngine::Bounds::get_max)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Bounds), "get_max", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Bounds::SetMinMax
// Il2CppName: SetMinMax
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Bounds::*)(UnityEngine::Vector3, UnityEngine::Vector3)>(&UnityEngine::Bounds::SetMinMax)> {
  static const MethodInfo* get() {
    static auto* min = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* max = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Bounds), "SetMinMax", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{min, max});
  }
};
// Writing MetadataGetter for method: UnityEngine::Bounds::Encapsulate
// Il2CppName: Encapsulate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Bounds::*)(UnityEngine::Vector3)>(&UnityEngine::Bounds::Encapsulate)> {
  static const MethodInfo* get() {
    static auto* point = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Bounds), "Encapsulate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{point});
  }
};
// Writing MetadataGetter for method: UnityEngine::Bounds::IntersectRay
// Il2CppName: IntersectRay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Bounds::*)(UnityEngine::Ray, float&)>(&UnityEngine::Bounds::IntersectRay)> {
  static const MethodInfo* get() {
    static auto* ray = &::il2cpp_utils::GetClassFromName("UnityEngine", "Ray")->byval_arg;
    static auto* distance = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Bounds), "IntersectRay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ray, distance});
  }
};
// Writing MetadataGetter for method: UnityEngine::Bounds::Contains
// Il2CppName: Contains
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Bounds::*)(UnityEngine::Vector3)>(&UnityEngine::Bounds::Contains)> {
  static const MethodInfo* get() {
    static auto* point = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Bounds), "Contains", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{point});
  }
};
// Writing MetadataGetter for method: UnityEngine::Bounds::IntersectRayAABB
// Il2CppName: IntersectRayAABB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::Ray, UnityEngine::Bounds, float&)>(&UnityEngine::Bounds::IntersectRayAABB)> {
  static const MethodInfo* get() {
    static auto* ray = &::il2cpp_utils::GetClassFromName("UnityEngine", "Ray")->byval_arg;
    static auto* bounds = &::il2cpp_utils::GetClassFromName("UnityEngine", "Bounds")->byval_arg;
    static auto* dist = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Bounds), "IntersectRayAABB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ray, bounds, dist});
  }
};
// Writing MetadataGetter for method: UnityEngine::Bounds::Contains_Injected
// Il2CppName: Contains_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::Bounds&, UnityEngine::Vector3&)>(&UnityEngine::Bounds::Contains_Injected)> {
  static const MethodInfo* get() {
    static auto* _unity_self = &::il2cpp_utils::GetClassFromName("UnityEngine", "Bounds")->this_arg;
    static auto* point = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Bounds), "Contains_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_unity_self, point});
  }
};
// Writing MetadataGetter for method: UnityEngine::Bounds::IntersectRayAABB_Injected
// Il2CppName: IntersectRayAABB_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::Ray&, UnityEngine::Bounds&, float&)>(&UnityEngine::Bounds::IntersectRayAABB_Injected)> {
  static const MethodInfo* get() {
    static auto* ray = &::il2cpp_utils::GetClassFromName("UnityEngine", "Ray")->this_arg;
    static auto* bounds = &::il2cpp_utils::GetClassFromName("UnityEngine", "Bounds")->this_arg;
    static auto* dist = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Bounds), "IntersectRayAABB_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ray, bounds, dist});
  }
};
// Writing MetadataGetter for method: UnityEngine::Bounds::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Bounds::*)()>(&UnityEngine::Bounds::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Bounds), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Bounds::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Bounds::*)(::Il2CppObject*)>(&UnityEngine::Bounds::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Bounds), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::Bounds::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::Bounds::*)()>(&UnityEngine::Bounds::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Bounds), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Bounds::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Bounds::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!
