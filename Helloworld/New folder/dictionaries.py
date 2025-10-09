def main():
    spacecraft = {"name": "James Webb SPace Telescope"} 
    spacecraft["distance"] = 0.01
    print(create_report(spacecraft))

    def create_report(spacecraft):
        return f"""
        ==================== Report ===================

        name: {spacecraft["name"]}
        Distance: {spacecraft["distance"]} AU

        ==================== Report ====================
        """


