#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
struct ModifiableContactPair;
}
// Type: UnityEngine::ModifiableContactPair
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15461))
// CS Name: UnityEngine.ModifiableContactPair
struct CORDL_TYPE ModifiableContactPair : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "actor", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "otherActor", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "shape", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "otherShape", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "rotation", ty: "UnityEngine::Quaternion", modifiers: "", def_value: None }, CppParam { name: "position", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "otherRotation", ty: "UnityEngine::Quaternion", modifiers: "", def_value: None }, CppParam { name: "otherPosition", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "numContacts", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "contacts", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
constexpr ModifiableContactPair(::cordl_internals::intptr_t actor, ::cordl_internals::intptr_t otherActor, ::cordl_internals::intptr_t shape, ::cordl_internals::intptr_t otherShape, UnityEngine::Quaternion rotation, UnityEngine::Vector3 position, UnityEngine::Quaternion otherRotation, UnityEngine::Vector3 otherPosition, int32_t numContacts, ::cordl_internals::intptr_t contacts) noexcept;


                    constexpr ModifiableContactPair(ModifiableContactPair const&) = default;
                    constexpr ModifiableContactPair(ModifiableContactPair&&) = default;
                    constexpr ModifiableContactPair& operator=(ModifiableContactPair const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ModifiableContactPair& operator=(ModifiableContactPair&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x68};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ModifiableContactPair(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_actor, put=__set_actor))  actor;

constexpr void __set_actor(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_actor() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_otherActor, put=__set_otherActor))  otherActor;

constexpr void __set_otherActor(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_otherActor() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_shape, put=__set_shape))  shape;

constexpr void __set_shape(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_shape() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_otherShape, put=__set_otherShape))  otherShape;

constexpr void __set_otherShape(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_otherShape() const;

 UnityEngine::Quaternion __declspec(property(get=__get_rotation, put=__set_rotation))  rotation;

constexpr void __set_rotation(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get_rotation() const;

 UnityEngine::Vector3 __declspec(property(get=__get_position, put=__set_position))  position;

constexpr void __set_position(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_position() const;

 UnityEngine::Quaternion __declspec(property(get=__get_otherRotation, put=__set_otherRotation))  otherRotation;

constexpr void __set_otherRotation(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get_otherRotation() const;

 UnityEngine::Vector3 __declspec(property(get=__get_otherPosition, put=__set_otherPosition))  otherPosition;

constexpr void __set_otherPosition(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_otherPosition() const;

 int32_t __declspec(property(get=__get_numContacts, put=__set_numContacts))  numContacts;

constexpr void __set_numContacts(int32_t value) ;

constexpr int32_t __get_numContacts() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_contacts, put=__set_contacts))  contacts;

constexpr void __set_contacts(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_contacts() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ModifiableContactPair, "UnityEngine", "ModifiableContactPair");
